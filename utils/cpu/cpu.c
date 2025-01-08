#include "cpu.h"
#include "../../main.h"
#include "../../source/file_controller/file.h"
#include <stdio.h>
// /proc/cpuinfo
// get all info about processor
CPUInfo *getCpuInfo() {
  CPUInfo *data;
  s_file_controller *ctl = fcCreate(CPU_FILE_PATH, "r");
  // read data from file
  fcFreeMemory(ctl);
  return data;
}

void printCpuInfo() {
  CPUInfo *data = getCpuInfo();
  printf("Get CPU info");
}
