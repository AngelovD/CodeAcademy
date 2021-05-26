#include "tryFunc.h"
#include <time.h>

static FILE *logfile;
static char *statusArr[]={"Success.","Failure.","Memory allocation error.","File error.","Barcode too short.","Barcode no edge sequence.","Wrong C.","Wrong K.","Unknown symbol in barcode"};



void tryFunc(int (*func)(t_barcode *barcode),t_barcode *barcode,char *name){
    
    t_Status a = func(barcode);
    fprintf(logfile,"%s: ",name);
    fprintf(logfile,"%s\n",statusArr[a]);
    if(a){
        deInitLogFile();
        exit(1);
    }
}

void initLogFile(void){
    logfile = fopen("BarcodeLog.txt","a+");
    if(!logfile){
        perror("Unable to open or create log file");
        exit(1);
    }
    time_t rawtime;
    struct tm * timeinfo;

    time ( &rawtime );
    timeinfo = localtime ( &rawtime );
    fprintf (logfile,"File opened at: %s\n", asctime (timeinfo) );
}

void deInitLogFile(void){
    time_t rawtime;
    struct tm * timeinfo;

    time ( &rawtime );
    timeinfo = localtime ( &rawtime );
    fprintf (logfile,"\nFile closed at: %s\n\n", asctime (timeinfo) );
    fclose(logfile);
}