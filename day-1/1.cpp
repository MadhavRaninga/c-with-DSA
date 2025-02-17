#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 20;
    int c ;


    cout << a << endl ;
    cout << b << endl ;

    cout << "---------------------------------------------"<< endl ;

    c = a;
    a = b;
    b = c;

    cout << a << endl ;
    cout << b << endl ;

}