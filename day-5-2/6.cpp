#include <iostream>

using namespace std;

int main(){
    int user;
    
    cout << "enter the value = ";
    cin >> user;

    for (int i = 1; i <= 10; i++)
    {
        cout << user << " x " << i << " = "  << user * i << endl; 
    }
    
}