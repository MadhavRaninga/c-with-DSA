#include <iostream>

using namespace std;

int main(){
    int a , b;

    cout << "enter first number = ";
    cin >> a;

    cout << "enter second number = ";
    cin >> b;

    while (a <= b)
    {
        if (a % 4 == 0)
        {
            cout << a << " ";
        }
        a++;
    }
    
}