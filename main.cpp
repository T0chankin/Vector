#include <stdlib.h>
#include <iostream>
#include <algorithm>
#include "Vector.h"

using namespace std;

int main(){
    double sp[]={14,924,31,85};
    double *pa {sp};
    Vector nice(pa,size(sp));
    cout<<"all is good "<<pa<<endl;
}
