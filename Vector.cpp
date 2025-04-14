#include <stdlib.h>
#include <algorithm>
#include "Vector.h"

using namespace std;
using ValueType = double;

Vector::Vector(const ValueType* rawArray, const size_t size, float coef)
    :_multiplicativeCoef(coef)
    ,_data(new ValueType[size])
    ,_size(size)
    ,_capacity(size){
        copy(rawArray,rawArray+size,_data);
    }