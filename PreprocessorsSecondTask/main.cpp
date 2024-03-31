#include "Function.hpp"

int main() 
{

#ifdef INTEGER
    const int SIZE = 10;
    int arr[SIZE];
    INITARRINTEGER(arr,SIZE);
    SHOWINTEGER(arr,SIZE);
#endif //INTEGER

    
#ifdef DOUBLE
    const int SIZE = 10;
    double arr[SIZE];
    INITARRDOUBLE(arr,SIZE);
    SHOWDOUBLE(arr, SIZE);
#endif // DOUBLE
    
#ifdef CHAR
    const int SIZE = 10;
    char arr[SIZE];
    INITARRCHAR(arr,SIZE);
    SHOWCHAR(arr, SIZE);
#endif // CHAR
}

//new code office
