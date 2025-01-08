#ifndef FILE_CONTROLLER_H
#define FILE_CONTROLLER_H

#include <stdio.h>

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

// write data in file
#endif
