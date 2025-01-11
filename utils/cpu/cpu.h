#ifndef CPU_H
#define CPU_H

#define STRINGS 10
#define STRLEN 255
const char cpuInfoKeys[STRINGS][STRLEN] = {
    "vendor_id", "cpu family", "model",      "model name", "stepping",
    "microcode", "cpu MHz",    "cache size", "cpu cores",  "fpu"};
typedef struct {
  char *vendor_id;
  int cpu_family;
  int model;
  char *model_name;
  int stepping;
  int microcode;
  float cpu_MHz;
  char *cache_size;
  int cpu_cores;
  char *fpu;
} CPUInfo;

// get CPU info
CPUInfo *getCpuInfo();

// print CPU info in console
void printCpuInfo();

#endif
