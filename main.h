#ifndef MAIN_H
#define MAIN_H

// general inicializations
#define DEFAULT_STRING_LENGTH 255;

// cpu
#define CPU_FILE_PATH "/proc/cpuinfo"

// work with files
#define FILE_READ "r"      // Open reading. File must exist.
#define FILE_READPL "r+"   // Open reading and writing. File must exist.
#define FILE_WRITE "w"     // Open writing (rewriter). File creating.
#define FILE_WRITEPL "w+"  // Open reading and writing (rewrite). File creating.
#define FILE_APPEND "a"    // Open append in the end. File creating.
#define FILE_APPENDPL "a+" // Open append and reading. File creating.

#endif
