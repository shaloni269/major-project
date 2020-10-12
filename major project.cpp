#include <iostream>

using namespace std;

int main()
{
    int pinnum=0;
    int amount=50000;
    int deposit=0;
    int withdraw=0;
    int num;
cout << "enter your pin code \n";
cin >> pinnum;
if (pinnum==3423)
{

    cout << "******welcome to the bank******\n";
    cout << "press 1. to check balance\n";
    cout << "press 2. to deposit money\n";
    cout << "press 3. to withdraw money\n ";
    cout << "press 4. to exit\n";
    cout <<"      ********    ";
    cout <<"\n";
    cout << "enter:\n";
    cin >> num;
    if (num==1)
    {
        cout << "current balance is\n" << amount;

    }
    else if (num==2)
    {
        cout <<"enter amount to deposit\n";
        cin >> deposit;
        amount=amount+deposit;
        cout << "now balance is \n" << amount;

    }
    else if (num==3)
    {
        cout << "enter the amount to withdraw\n";
        cin >> withdraw;
        if (withdraw>amount)
        {
            cout <<"insufficent amount";

        }
        else
            amount=amount-withdraw;
        cout << "now balance is\n" << amount;

    }
    else if (num==4)
    {
        cout << "THANK YOU !!!";
    }
    else
    {
        cout << "press valid number\n";
    }


}
else
    cout << "invalid pin code";

    return 0;
}
