/*Напишете стандартната програма за Linux wc, която приема име на
файл като аргумент от командния ред и изкарва на стандартния изход
стринга "Брой думи: ", последван от броя думи във файла. Програмата да
приема три вида аргументи:
 -c - който да изкарва "Брой символи: "
 -l - който да изкарва "Брой редове: "
 -w - който е за брой думи(тоест стандартното поведение на
програмата)
Ако един два или три от тези аргументи са подадени да не се взема
предвид стандартното поведение.
 Примери:
 > wc f1 // изкарва броя думи
 > wc -с f1 // изкарва броя символи
 > wc -l f1 // изкарва само броя редове
 > wc -c -w f1 // изкарва броя символи и броя думи във f1*/

#include<stdio.h>

int main(int argc, char *argv[]){

    int l=0,w=0,c=0;
    int wdef=1;
    int lCount=1,wCount=1,cCount=0;

    for(int i=1;i<argc-1;i++){
        if(argv[i][1]=='c'){
            wdef=0;
            c=1;
        }else if(argv[i][1]=='w'){
            w=1;
        }else if(argv[i][1]=='l'){
            wdef=0;
            l=1;
        }
    }

    FILE *pfile = NULL;
    char *filename = argv[argc-1];
    pfile = fopen(filename, "rt");
    if (pfile == NULL)
    {
        printf("Failed to open %s.\n", filename);
    }
    else
    {
        printf("%s is open\n", filename);
        while((c=fgetc(pfile))!=EOF){
            cCount++;
            if(c==' '){
                wCount++;
            }
            if(c=='\n'){
                lCount++;
                wCount++;
            }
        }
    }
    if(w||wdef){
        printf("Word count: %d\n",wCount);
    }

    if(l){
        printf("Line count: %d\n",lCount);
    }

    if(c){
        printf("Char count: %d\n",cCount);
    }

    fclose(pfile);

    return 0;
}
