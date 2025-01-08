#ifndef FILE_CONTROLLER_H
#define FILE_CONTROLLER_H

// file struct create
typedef struct {
  char name[255];
} s_file_controller;

// create object
s_file_controller *fcCreate(char *file_name);

// free object
bool fcFreeMemory(s_file_controller *ctl);

#endif
