#include <iostream>

using namespace std;

int main(){

    int user;

    cout << "enter any number = ";
    cin >> user;

    while (user >= 1)
    {
      if (user % 2 != 0)
      {
        cout << user <<" " ;
      }
        user--;
    }
    
}