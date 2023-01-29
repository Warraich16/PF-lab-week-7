#include <iostream>
using namespace std;
float calculateMoney(int age, int machineprice, int toyPrice);
int main()
{

    int age,machineprice,toyPrice,remaining,totalMoney;

    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter the price of maching machine: ";
    cin >> machineprice;
    cout << "Enter the price of toy: ";
    cin >> toyPrice;

    totalMoney = calculateMoney(age, machineprice, toyPrice);

    if (totalMoney >= machineprice)
    {
        remaining = totalMoney - machineprice;
        cout << "YES!! you can buy the machine and you have left with" << remaining << " $ REMAINING";
    }
    else
    {
      remaining = machineprice - totalMoney;
        cout << "SORRY!! you cannot buy the machine and you need " << remaining << " $ ";
    }
}

float calculateMoney(int age, int machinePrice, int toyPrice)
{
    int savedMoney = 9;
    int oddnumber, evennumber,totalmoney,saving,totalsavedmoney;
    
    if (age % 2 == 0)
    {
        oddnumber = age / 2;
        evennumber = age / 2;
        toyPrice = oddnumber * toyPrice;
        
        int result=0;
        
        while(result<evennumber)
		{
            saving=saving+savedMoney;
            totalsavedmoney=totalsavedmoney+savedMoney;
            savedMoney=savedMoney+10;
            result++;
        }
        totalmoney = saving + toyPrice;
    }
    else
    {
        oddnumber = (age+1)/ 2;
        evennumber = age/2;
        toyPrice = oddnumber * toyPrice;
        int result=0;
        
            while(result<=evennumber)
			{
            saving=saving+savedMoney;
            totalsavedmoney=totalsavedmoney+savedMoney;
            savedMoney=savedMoney+10;
            result;
        }
        totalmoney = saving + toyPrice;
    }
    return totalmoney;
}
