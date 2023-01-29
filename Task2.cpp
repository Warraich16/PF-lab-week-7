#include <iostream>
using namespace std;
int totaldigits(int number);
int main()
{
	int number,counter;
	cout<< "ENter number: ";
	cin >>number;
	counter = totaldigits(number);
	cout <<counter;
}
int totaldigits(int number)
{
	
 int counter=0;
 while (number > 0)
 {
 	number = number/10;
 	counter = counter +1;
 }
 return counter;
	
}
