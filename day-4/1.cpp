#include <iostream>

using namespace std;

int main(){

    cout << "Plus (+)" << endl;
    cout << "Minus (-)" << endl;
    cout << "Multiplication (*)" << endl;
    cout << "Division (/)" << endl;
    cout << "Mode (%)" << endl;
    
    cout << "------------------------------------------" << endl ;
    char user;
    
    cout << "enter any sign = ";
    cin >> user;
    int a , b;

    cout << "enter first value = ";
    cin >> a;

    cout << "enter second value = ";
    cin >> b;
    cout << "------------------------------------------" << endl ;
    switch (user)
    {
    case '+':
        cout << a << " + " << b << " = " << a + b;
        break;
    
    case '-':
        cout << a << " - " << b << " = " << a - b;
        break;
    
    case '*':
        cout << a << " x " << b << " = " << a * b;
        break;
    
    case '/':
        cout << a << " / " << b << " = " << float (a) / (b) ;
        break;
    case '%':
        cout << a << " / " << b << " = " << (a % b);
        break;
    
    default:
    cout << "Invalid value !"; 
        break;
    }
} 