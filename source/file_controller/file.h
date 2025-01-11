#ifndef FILE_CONTROLLER_H
#define FILE_CONTROLLER_H

#include <stdio.h>

// for reading and writing handlers
typedef void (*fcReadHandler)(const char *buffer);
typedef void (*fcWriteHandler)();

// file struct create
typedef struct {
  char *name;
  char *mode;
  FILE *descriptor;
} s_file_controller;

// create object
s_file_controller *fcCreate(char *name, char *mode);

// free object
int fcFreeMemory(s_file_controller *ctl);

// read data from file
void fcRead(s_file_controller *ctl, fcReadHandler handler);

// write data in file
void fcWrite(s_file_controller *ctl, fcWriteHandler handler);
#endif
