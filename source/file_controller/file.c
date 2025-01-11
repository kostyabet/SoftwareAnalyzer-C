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
s_filectl *fcCreate(char *name, char *mode) {
  s_filectl *ctl = malloc(sizeof(s_filectl));
  if (ctl == NULL)
    return NULL;

  ctl->name = name;
  ctl->mode = mode;
  ctl->descriptor = fcOpenDesctiptor(ctl->name, ctl->mode);
  if (ctl->descriptor == NULL)
    return NULL;
  return ctl;
}

int fcFreeMemory(s_filectl *ctl) {
  fclose(ctl->descriptor);
  return 1;
}

void fcRead(s_filectl *ctl, fcReadHandler handler, void *context) {
  bool isEnd = false;
  const char *buffer;
  do {
    handler(buffer, context);
  } while (isEnd);
}
