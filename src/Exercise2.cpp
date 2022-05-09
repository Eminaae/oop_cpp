#include "Exercise2.h"
#include <iostream>
using namespace std;

Exercise2::Exercise2(){
    num = 0;
}

Exercise2::Exercise2(double number){
    num = number;
}
void Exercise2::print(){
    cout << "Number = " << num << endl;
}



