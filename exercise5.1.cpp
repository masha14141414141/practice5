#include <iostream>
int main()
{
int hour;
std::string name;
name = "Ку-ку!";
int iterations = 0;
std:: cout << "Введите, который час: ";
std:: cin >> hour;
if(hour<0 && hour>23)
{
    std:: cout << "Некорректное число";
}
else
{
while(iterations<hour)
{
std:: cout << iterations+1 << name << "\n";
++iterations;

}





}











}