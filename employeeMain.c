#include <string.h> 
#include <stdlib.h> 
#include "employee.h" 
int main(void){ 
    //defined in employeeSearchOne.c 
    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind); 
    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char * nameToFind); 
    PtrToEmployee searchEmployeeBySalary(PtrToConstEmployee ptr, int tableSize, double targetSalary);
    PtrToEmployee searchEmployeeByPhoneNumber(PtrToConstEmployee ptr, int tableSize, char * targetPhoneNumber);

    //defined in employeeTable.c 
    extern Employee EmployeeTable[];
    extern const int EmployeeTableEntries;
    
    PtrToEmployee matchPtr;//Declaration 
    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1045); 
    //Example not found 
    if (matchPtr != NULL) 
    printf("Employee ID 1045 is in record %ld\n", matchPtr - EmployeeTable); 
    else 
    printf("Employee ID is NOT found in the record\n"); 
    
    //Example found 
    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat"); 
    if (matchPtr != NULL) 
    printf("Employee Tony Bobcat is in record %ld\n", matchPtr - EmployeeTable); 
    else 
    printf("Employee Tony Bobcat is NOT found in the record\n"); 

    matchPtr = searchEmployeeByPhoneNumber(EmployeeTable, EmployeeTableEntries, "213-555-1212");
    if (matchPtr != NULL) 
    printf("Employee phone number with 213-555-1212 is in the record %ld\n", matchPtr - EmployeeTable); 
    else 
    printf("Employee phone number with 213-555-1212 is NOT in the record\n"); 


    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 4.50);
    if (matchPtr != NULL) 
    printf("Employee with salary of $4.50 is in record %ld\n", matchPtr - EmployeeTable); 
    else 
    printf("Employee with salary of $4.50 is NOT in record\n"); 



    return EXIT_SUCCESS; 
} 