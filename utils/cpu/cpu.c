#include "cpu.h"
#include <stdio.h>

// /proc/cpuinfo
// get all info about processor
CPUInfo *getCpuInfo() {
  CPUInfo *data;

  return data;
}

void printCpuInfo() {
  CPUInfo *data = getCpuInfo();
  printf("Get CPU info");
}
