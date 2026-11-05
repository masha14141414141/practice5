#include <iostream>
int main()
{
int numberTicket;
int sum1=0;
int sum2=0;
int count=0;
int temp;
std:: cout << " Введите номер билета: ";
std::cin >> numberTicket;

temp= numberTicket;
while(temp>0)
{
count++;
temp/=10;
}
if(count%2!=0)
{
std:: cout << "Количество чисел должно быть четным";
return 0;
}
if(numberTicket <= 0)
{
    std::cout << "Номер билета должен быть положительным!";
    return 0;
}
int i =0;
while(i<count/2)
{
int one_digit = numberTicket%10;
numberTicket/=10;
sum1+=one_digit;
i++;
}


i=0;
while(i<count/2)
{
int two_digit = numberTicket%10;
numberTicket/=10;
sum2+=two_digit;
i++;
}

if (sum1==sum2)
{

    std::cout << "Билет счастливый! ";
}
else
{
std::cout << "Повезёт в следующий раз! ";

}
















}