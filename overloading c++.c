// function overloading
// we can have function overloading ....multiple function can have the same name with the different parameter
// if two function does the same work its better to overload it in one

#include <iostream>
using namespace std;

int plusFuncDouble (int x, int y){ //declare two variable
    return  x, y;

}

double plusFunc (double x, double y){ // declare two variable and return the same value
return x+y;
}

int main(){
    int myNum1 = plusFunc (3,8); // plus function (to add the no)
    double myNum2 = plusFunc(3.14,7.76);    // assign the value
    cout<< "int :" << myNum1 <<"\n";         // output with the new line
    cout << "double: " << myNum2 << "\n";
    return 0;
}

