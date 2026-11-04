#include <iostream>
int main ()
{
std::string name;
int duty;
int partDuty;
int remainder;
std:: cout << "Введите имя должника: ";
std:: cin >> name;
std:: cout << "Введите сумму долга: ";
std:: cin >> duty;
if(duty<0)
{
    std::cout << "Некорректные данные";
}
else
{
while(duty>0)
{
std::cout << name<< ",требуется погасить долг, введите сумму для погашения: ";
std:: cin >> partDuty;
if(partDuty>=duty)
{
remainder = partDuty - duty;
duty = 0;
}
else
{
duty = duty - partDuty;
std:: cout << duty << " такая сумма осталась" << "\n";
}
}
std:: cout << "Вы полностью погасили долг! ";
if(remainder>0)
{
    std:: cout << "Остаток после полного погашения долга - " << remainder;
}





}
















}