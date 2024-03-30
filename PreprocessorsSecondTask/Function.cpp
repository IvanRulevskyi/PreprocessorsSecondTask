#include "Function.hpp"


#ifdef INTEGER
void fillTheArrayWithRandomIntegerValues(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 10;
    }
}
void printArrInteger(int arr[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<< arr[i]<<" ";
    }
}
#endif //INTEGER



#ifdef DOUBLE
void fillTheArrayWithRandomDoubleValues(double arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = static_cast<double>(std::rand()) / RAND_MAX * 10.0;
    }
}

void printArrDouble(double arr[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<< arr[i]<<" ";
    }
}
#endif // DOUBLE


#ifdef CHAR
void fillTheArrayWithRandomCharValues(char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = 'A' + (rand() % 26);
    }
}
void printArrChar(char arr[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<< arr[i]<<" ";
    }
}
#endif // CHAR
