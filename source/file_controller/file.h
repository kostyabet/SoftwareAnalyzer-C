#ifndef FILE_CONTROLLER_H
#define FILE_CONTROLLER_H

#include <stdbool.h>
#include <stdio.h>

// for reading and writing handlers
typedef bool (*fcReadHandler)(const char *buffer, void *context);
typedef bool (*fcWriteHandler)();

// file struct create
typedef struct {
  char *name;
  char *mode;
  FILE *descriptor;
} s_filectl;

// create object
s_filectl *fcCreate(char *name, char *mode);

// free object
int fcFreeMemory(s_filectl *ctl);

// read data from file
void fcRead(s_filectl *ctl, fcReadHandler handler, void *context);

// write data in file
void fcWrite(s_filectl *ctl, fcWriteHandler handler, void *context);

#endif
