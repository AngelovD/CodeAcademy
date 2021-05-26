#ifndef BARCODELIB_H_
#define BARCODELIB_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char *barcode;
    int size;
}t_barcode;

typedef enum Status{
    Success,
    Failure,
    Memory_allocation_error,
    File_error,
    Barcode_too_short,
    Barcode_no_edge_sequence,
    Wrong_C,
    Wrong_K,
    Unknown_symbol
}t_Status;

int scanSequence(t_barcode *barcode);
int readSequence(t_barcode *barcode);
int validateCode(t_barcode *barcode);
int checkCode(t_barcode *barcode);


#endif /* BARCODELIB_H_ */