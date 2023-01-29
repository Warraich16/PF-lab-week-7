#include <iostream>
using namespace std;
void printPercentage(int number);
int main()
{

    int number;
    cout << "Enter number you want to check: ";
    cin >> number;

    printPercentage(number);
}

void printPercentage(int number)
{
    float p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;
    int p1C = 0, p2C = 0, p3C = 0, p4C = 0, p5C = 0;
    int num = 0;
    for (int i= 1; i <= number; i++)
    {
        cout << "ENTER NUMBER "<<i<<" : ";
        cin >> num;

        if (num < 200)
        {
            p1C++;
        }
        else if (num >= 200 && num <= 399)
        {
            p2C++;
        }
        else if (num >= 400 && num <= 599)
        {
            p3C++;
        }
        else if (num >= 600 && num <= 799)
        {
            p4C++;
        }
        else
        {
            p5C++;
        }
    }
    
    p1=p1C * 100 / number;
    p2=p2C * 100 / number;
    p3=p3C * 100 / number;
    p4=p4C * 100 / number;
    p5=p5C * 100 / number;
    
    
    
    cout <<"Percengtage of numbers less then 200 is: "<< p1 << " %" << endl;
    cout <<"Percengtage of numbers less then 199 & LESS THAN 400: "<<p2 << " %" << endl;
    cout <<"Percengtage of numbers less then 399 & LESS THAN 600: "<<p3 << " %" << endl;
    cout <<" Percengtage of numbers less then599 & LESS THAN 800: "<<p4 << " %" << endl;
    cout <<"Percengtage of numbers less then 799: "<<p5 << " %" << endl;
}
