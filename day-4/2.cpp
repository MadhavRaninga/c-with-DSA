#include <iostream>

using namespace std;

int main() {
    int language, Choice;


    cout << "Press 1 for English" << endl;
    cout << "Press 2 for Hindi" << endl;
    cout << "Press 3 for Gujarati" << endl;
    cout << "Enter your choice (1 to 3): ";
    cin >> language;
    cout << "-------------------------------" << endl;

    switch (language) {
        case 1: 
            cout << "You selected English." << endl;
            cout << "1. Check Balance" << endl;
            cout << "2. Recharge" << endl;
            cout << "3. End Call" << endl;
            cout << "Enter your choice (1-3): ";
            cin >> Choice;
            cout << "-------------------------------" << endl;

            switch (Choice) {
                case 1:
                    cout << "Checking balance..." << endl;
                    break;
                case 2:
                    cout << "Recharging..." << endl;
                    break;
                case 3:
                    cout << "Ending call..." << endl;
                    break;
                default:
                    cout << "Invalid choice." << endl;
            }
            break;

        case 2:
            cout << "Aapne hindi chuna hein . " << endl;
            cout << "1. Balance tapase" << endl;
            cout << "2. Recharge kare" << endl;
            cout << "3. call ko end kare" << endl;
            cout << "Apna option chune - (1 se 3): ";
            cin >> Choice;
             cout << "-------------------------------" << endl;


            switch (Choice) {
                case 1:
                    cout << "Balance khoj rahe hein. " << endl;
                    break;
                case 2:
                    cout << "Recharge kar rahe hein. " << endl;
                    break;
                case 3:
                    cout << "Call ko end kare.  " << endl;
                    break;
                default:
                    cout << "Amanya vikalp !" << endl;
            }
            break;

        case 3: 
            cout << "Tame Gujarati pasand karyu che . " << endl;
            cout << "1. Balance tapaso. " << endl;
            cout << "2. Recharge karo. " << endl;
            cout << "3. Phon ne Muki dyo. " << endl;
            cout << "Tamaro vikalp umero - (1 thi 3): ";
            cin >> Choice;
            cout << "-------------------------------" << endl;
            
            switch (Choice) {
                case 1:
                    cout << "Balance tapasi rahiya chiye . " << endl;
                    break;
                case 2:
                    cout << "Recharge kari rahiya chiye. " << endl;
                    break;
                case 3:
                    cout << "Phone ne Muki dyo ." << endl;
                    break;
                default:
                    cout << "Amanya vikalp pasand thai gyo che !" << endl;
            }
            break;

        default:
            cout << "Aavi koi bhasa j nthi sorry !" << endl;
    }

    
}