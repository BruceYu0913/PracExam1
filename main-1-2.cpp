#include <iostream>

extern void modifyArray(double* array, int size, double value);

int main(){
    double array[] = {1.1,2.5,3.6,0.9,4.7};
    double addValue = 1.9;

    modifyArray(array,5,addValue);
    std::cout<<"The array after adding new value is:"<<std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout<<array[i]<<" ";
    }
    
    return 0;
}