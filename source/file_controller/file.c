#include "file.h"
#include <malloc.h>
#include <stdio.h>

// private functions
FILE *fcOpenDesctiptor(char *name, char *mode) {
  FILE *descriptor = fopen(name, mode);
  if (descriptor == NULL)
    return NULL;
  return descriptor;
}

// public functions
s_file_controller *fcCreate(char *name, char *mode) {
  s_file_controller *ctl = malloc(sizeof(s_file_controller));
  if (ctl == NULL)
    return NULL;

  ctl->name = name;
  ctl->mode = mode;
  ctl->descriptor = fcOpenDesctiptor(ctl->name, ctl->mode);
  if (ctl->descriptor == NULL)
    return NULL;
  return ctl;
}

int fcFreeMemory(s_file_controller *ctl) {
  fclose(ctl->descriptor);
  return 1;
}
