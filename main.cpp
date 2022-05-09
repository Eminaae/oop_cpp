/*/**
Create a class containing a double and a print( ) function that prints
the double. In main( ), create pointers to members for both the data member
and the function in your class. Create an object of your class and a pointer
to that object, and manipulate both class elements via your pointers to members,
using both the object and the pointer to the object.
**/


#include <iostream>
#include <Exercise2.h>
using namespace std;

int main(){

    Exercise2 x(3.14);
    Exercise2 *ptrx = &x;

    double Exercise2::*numPtr = &Exercise2::num;
    void (Exercise2::*methodPtr) () = &Exercise2::print;

    x.print();
    ptrx->*numPtr = 2.45;
    (ptrx->*methodPtr)();
    return 0;
}
