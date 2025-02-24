#include <iostream>

using namespace std;

int main(){
    int user , sum = 0;

    cout << "enter any number = ";
    cin >> user;

    for (int i = 0; i <= user; i++)
    {
        sum += i;
    }
    cout << "Sum = " << sum ;
}