  
CC=gcc
FILE=main.c
LISTL=List.c
MENU=menu.c
TARGET=main

### unified cross-platform clean function
#checks for env var of win 
ifeq ($(OS),Windows_NT)
    RM=del /Q
    TARGET=task.exe
else
    RM=rm -f
    TARGET=task
endif

all:
	$(CC) $(FILE) $(LISTL) $(MENU) -o $(TARGET)

clean:
	$(RM) $(TARGET)