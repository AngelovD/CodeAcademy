#ifndef TRYFUNC_H_
#define TRYFUNC_H_

#include "barcodeLib.h"

void tryFunc(int (*func)(t_barcode *barcode),t_barcode *barcode,char *name);
void initLogFile(void);
void deInitLogFile(void);

#endif /* TRYFUNC_H_ */