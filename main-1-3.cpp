#include <iostream>

extern double*duplicateArray(double* array, int size);

int main(){
    double array[] = {1.1,2.5,3.6,0.9,4.7};
    double* newArray;

    newArray = duplicateArray(array,5);

    std::cout<<"The new array is:"<<std::endl;

    for (int i = 0; i < 5; i++)
    {
        std::cout<<newArray[i]<<" ";
    }
    
    return 0;;
}