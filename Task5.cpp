#include <iostream>
using namespace std;
int printtable(int number);

int main()
{
	int result;
	int number;
	cout <<"Enter number: ";
	cin >>number;
	result = printtable(number);
	cout <<result;
}
int printtable(int number)
{

	for (int i=1;i<=10;i=i+1)
	{
	
      cout <<number <<"*"<<i<<"="<<number*i<<endl;
      
    }
    return number;
    
}
