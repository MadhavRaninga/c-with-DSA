#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 20;
   


    cout << a << endl ;
    cout << b << endl ;

    cout << "---------------------------------------------"<< endl ;

    a = a + b ; //30
    b = a - b ;//10
    a = a - b ; //20

    cout << a << endl ;
    cout << b << endl ;

}