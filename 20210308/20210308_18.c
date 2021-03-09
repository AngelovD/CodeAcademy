#include <stdio.h>
#include <stdlib.h>
#include <string.h>
static const char *Jason_FORMAT_PERSON_IN = "{\"name\":\"%[^\"]\", \"age\"%d,\"gender\":\"%c\"}";
static const char *Jason_FORMAT_PERSON_OUT = "{\"name\":\"%s\", \"age\"%d,\"gender\":\"%c\"}";

typedef struct{
    char name[15];
    int age;
    char gender[1];
}t_person;

int main(void)
{
    t_person jm = {
        .name = "Miro",
        .age = 37,
        .gender = 'M'};
    t_person jdm;
    FILE *jfp;
    fopen_s(&jfp, "jasonPeople.dat", "w+");
    if (NULL == jfp)
        return 1;
    fprintf(jfp, Jason_FORMAT_PERSON_OUT, jm.name, jm.age, jm.gender);
    fseek(jfp, 0, SEEK_SET);
    fscanf(jfp, Jason_FORMAT_PERSON_IN, jdm.name, &jdm.age,&jdm.gender);
    printf(Jason_FORMAT_PERSON_OUT, jdm.name, jdm.age, jdm.gender);
    fclose(jfp);
    return 0;
}