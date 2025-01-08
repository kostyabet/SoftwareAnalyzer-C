#ifndef FILE_CONTROLLER_H
#define FILE_CONTROLLER_H

// file struct create
typedef struct {
  char *name;
} s_file_controller;

// create object
s_file_controller *fcCreate(char *file_name);

// free object
int fcFreeMemory(s_file_controller *ctl);

#endif
