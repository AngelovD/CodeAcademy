#include "barcodeLib.h"
#include "tryFunc.h"
#include "barcodeFunc.h"

int main(void){
    initLogFile();
    t_barcode *barcode = malloc(sizeof(t_barcode));
    if(!barcode){
        perror("Unable to allocate memory for the barcode");
        exit(1);
    }
    tryFunc(&scanSequence,barcode,"scanSequence");
    tryFunc(&readSequence,barcode,"readSequence");
    tryFunc(&validateCode,barcode,"validateCode");
    tryFunc(&checkCode,barcode,"checkCode");
    free(barcode->barcode);
    free(barcode);
    deInitLogFile();
}