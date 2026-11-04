#include <iostream>
int main()
{
int X;
int P;
int Y;
std::cout << "Введите размер вклада: ";
std:: cin >> X;
std::cout << "Введите процентную ставку: ";
std:: cin >> P;
std::cout << "Введите желаемую сумму: ";
std:: cin >> Y;
int year =0;
while(X<Y)
{
X= X + (P*X/100);
year++;
}
std::cout <<  "Придётся подождать: " << year << " лет." ;














}