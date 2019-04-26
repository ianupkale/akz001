//Headers and Utility functions
#ifndef ANKA_HEADERS_H
#define ANKA_HEADERS_H

#include<iostream>
#define akeBegin main

void log(const std::string msg);
void log(char* msg);
void log(char msg);
//Function like macro
#define PRINT cout
#define Log(msg) (std::cout<<msg<<std::endl)

//Declarations of external functions will be called in akeBegin
int anka_basics_Main();
int anka_ptrRef_Main();
int anka_classStruct();
int anka_Rough_Main();



//OOPS Concepts
//Data Structures
//Algorithms
//STL
//Geometry/CAD Concepts

#endif // ANKA_HEADERS_H