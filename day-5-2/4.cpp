#include <iostream>

using namespace std;

int main(){

    int user , a = 0 , b = 1 , c;
    cout << "enter any value = ";
    cin >> user;

    for (int i = 0; i < user; i++)
    {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    
}