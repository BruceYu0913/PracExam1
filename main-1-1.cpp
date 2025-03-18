#include <iostream>

extern double arrayMin(double* array, int size);

int main(){
    double array[] = {1.1,2.5,3.6,0.9,4.7};

    std::cout<<"The min value is:"<<arrayMin(array,5)<<std::endl;

    return 0;
}