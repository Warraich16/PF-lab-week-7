#include <iostream>
using namespace std;
int calculateGCD(int number1, int number2);
int calculateLCM(int number1, int number2, int gcd);
int main()
{
    int number1, number2, gcd,lcm;
    cout << "Enter first number: ";
    cin >> number1;

    cout << "Enter second number: ";
    cin >> number2;

    gcd = calculateGCD(number1, number2);
    lcm = calculateLCM(number1,number2,gcd);
    cout <<"GCD of the given two numbers is:"<<gcd<<endl;
    cout <<"LCM of the given two numbers is: "<<lcm;
}

int calculateGCD(int number1, int number2)
{
    int hcf,i ;
    

    for (int i = 1; i<=number1 || i<=number2;i++)
	{
        if( number1 % i ==0 && number2 % i==0)
		{
            hcf = i;
        }
    }
        return hcf;
}

int calculateLCM(int number1, int number2,int gcd)
{
   float lcm= ((number1*number2)/gcd);
   return lcm;
}
