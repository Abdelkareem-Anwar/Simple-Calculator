#include <iostream>

using namespace std;


int main()
{
    cout << "\t\t\t *** Welcome To Our Calculator *** \t\t\t\n";
    CalculatorStart:
    double dNum1=0;
    double dNum2=0;
    double dResult=0;
    int iChoice=0;
    cout << "Please Enter 2 Numbers\n";
    cin >> dNum1 >> dNum2;
    if (cin.fail())
    {
       cout << "Your Enter Was Wrong\n";
       cin.clear();
       cin.ignore(1000,'\n');
       goto CalculatorStart;
    }
    MenuStarting:
    cout << "Please Enter Your Operation\n";
    cout << "1 for + , 2 for - , 3 for * , 4 for / \n";
    cin >> iChoice;
    if (cin.fail())
    {
       cout << "You Choose a Different Number\n";
       cin.clear();
       cin.ignore(1000,'\n');
       goto MenuStarting;
    }
    switch(iChoice)
    {
        case 1 : dResult = dNum1+dNum2;
                    break;
        case 2 : dResult = dNum1-dNum2;
                    break;
        case 3 : dResult = dNum1*dNum2;
                    break;
        case 4 :
            if (dNum2==0)
            {
                cout << "You can't divisable by 0";
                cin.clear();
                cin.ignore(1000,'\n');
                goto CalculatorStart;
            }
            dResult = dNum1/dNum2;
                    break;
        default:
            cout << "You Enter an invalid number.";
                goto MenuStarting;
                break;
    }
    cout << "Your Result = " << dResult;


    return 0;
}

