#include <stdio.h>
#include <stddef.h> 
typedef struct { 
    long number; 
    char *name;
    char *phone;
    double salary;
} Employee, *PtrToEmployee; // This are typedef, give type a new name

typedef const Employee *PtrToConstEmployee;