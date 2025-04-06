#include <iostream>
#include <stdlib.h>
#include "Vector.h"

//using namespace std;

int main(){
    double test[]={1,24235,34,5,7,2};
    double *pa {test};
    Vector vec(pa,128,2.0f);
    int a = vec[0];
    std::cout<< a << std::endl;
    return 0;
}
