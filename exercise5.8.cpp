#include <iostream>
int main()
{
int min = 0 ;
int max = 63;
int mid;
std::string answer;
while (min<=max)
{
 mid = ((min+max)/2);
std:: cout << "Ваше число " << mid << "?" << "\n";
std::cin >> answer;
if(answer=="Да")
{
    std:: cout << "Число угадано!" << mid;
    break;

}

if(answer=="Нет")
{
std::cout<<"Больше?";
std::cin >> answer;
if(answer=="Да")
{
    min=mid+1;
}
if(answer=="Нет")
{
    max=mid-1;
}

}


}






}