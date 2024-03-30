#pragma once
//#define INTEGER
#define CHAR
//#define DOUBLE
#include <iostream>
#include <random>
using namespace std;


//Integer
#ifdef INTEGER
void fillTheArrayWithRandomIntegerValues(int arr[], int size);
#define INITARRINTEGER fillTheArrayWithRandomIntegerValues
void printArrInteger(int arr[], const int size);
#define SHOWINTEGER printArrInteger
#endif //INTEGER


//Double
#ifdef DOUBLE
void fillTheArrayWithRandomDoubleValues(double arr[], int size);
#define INITARRDOUBLE fillTheArrayWithRandomDoubleValues
void printArrDouble(double arr[], const int size);
#define SHOWDOUBLE printArrDouble
#endif // DOUBLE


//Char
#ifdef CHAR
void fillTheArrayWithRandomCharValues(char arr[], int size);
#define INITARRCHAR fillTheArrayWithRandomCharValues
void printArrChar(char arr[], const int size);
#define SHOWCHAR printArrChar
#endif // CHAR
