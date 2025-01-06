#ifndef CPU_H
#define CPU_H

typedef struct {
  char model[255];
  int cores;
  int threads;
  float frequency; // in GHz
} CPUInfo;

// get CPU info
CPUInfo *getCpuInfo();

// print CPU info in console
void printCpuInfo();

#endif
