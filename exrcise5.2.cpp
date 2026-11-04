#include <iostream>
int main()
{
int number;
int countDigit = 0;
std:: cout << " Введите число: ";
std:: cin >> number;
if(number==0) 
{
    countDigit=1;
}
else
{
if(number<0)
{
    number = - number;
}
while(number!=0)
{
int remainder = number % 10;
number/=10;
++countDigit;
}
}
std:: cout << "Цифр в числе: " <<  countDigit;















}