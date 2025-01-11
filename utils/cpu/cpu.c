#include "cpu.h"
#include "../../main.h"
#include "../../source/file_controller/file.h"
#include <malloc.h>
#include <stdio.h>

// private

// public
CPUInfo *getCpuInfo() {
  CPUInfo *data = malloc(sizeof(CPUInfo));
  s_file_controller *ctl = fcCreate(CPU_FILE_PATH, FILE_READ);
  // read data from file
  fcFreeMemory(ctl);
  return data;
}

void printCpuInfo() {
  CPUInfo *data = getCpuInfo();
  printf("Get CPU info");
}
