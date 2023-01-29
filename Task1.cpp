#include <iostream>
using namespace std;
int main()
{
	int number;
	int num1=0;
	
	cout <<"How many numbers of fibanconi series you want to print: ";
	cin >>number;
	int num2=1;
    int sum;
    cout << num1<<","<<num2;
	for (int count=3;count <=number;count++)
	{
		sum =num1+num2;
		cout <<" , "<<sum;
		num1 = num2;
		num2 = sum;
		
	
	}

}



