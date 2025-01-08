#include "file.h"
#include <malloc.h>

s_file_controller *fcCreate(char *file_name) {
  s_file_controller *ctl = malloc(sizeof(s_file_controller));
  if (ctl == NULL)
    return NULL;

  ctl->name = file_name;
  return ctl;
}

int fcFreeMemory(s_file_controller *ctl) {
  free(ctl->name);
  return 1;
}
