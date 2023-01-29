#include <iostream>
using namespace std;
int frequencychecker(int number,int digit);
int main()
{
	int number,digit,result;
	cout <<"Enter number : ";
	cin >>number;
	cout <<"ENter digit: ";
	cin >>digit;
	result = frequencychecker(number,digit);
	cout <<result;
}
int frequencychecker(int number,int digit)
{
  int c = 0;   
    while (number != 0) 
	{
           
    
        if (number % 10 == digit)
       {
		  c++;
       }
        number = number / 10;
    
    }
     
    return c;
 }
 	
 


