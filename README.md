# lsanitazerTest
This repository presents a Cmake and C++ template on how to use LeakSanitizer. It includes the flags to configure LeakSanitizer and the debug information to easily detect memory leaks.

# Create a build directory
mkdir build
cd build

# Build the project
make

# Run the executable
./lsanitizerTest

```c
=================================================================
==196895==ERROR: LeakSanitizer: detected memory leaks

Direct leak of 40 byte(s) in 1 object(s) allocated from:
    #0 0x7f8510850787 in operator new[](unsigned long) ../../../../src/libsanitizer/asan/asan_new_delete.cc:107
    #1 0x5647ebcd625e in leakingFunction() /home/ccruz/study/c++/lsanitizer/main.cc:6
    #2 0x5647ebcd6284 in main /home/ccruz/study/c++/lsanitizer/main.cc:16
    #3 0x7f8510227082 in __libc_start_main ../csu/libc-start.c:308

Direct leak of 20 byte(s) in 1 object(s) allocated from:
    #0 0x7f8510850787 in operator new[](unsigned long) ../../../../src/libsanitizer/asan/asan_new_delete.cc:107
    #1 0x5647ebcd627b in main /home/ccruz/study/c++/lsanitizer/main.cc:13
    #2 0x7f8510227082 in __libc_start_main ../csu/libc-start.c:308

SUMMARY: AddressSanitizer: 60 byte(s) leaked in 2 allocation(s).

```

