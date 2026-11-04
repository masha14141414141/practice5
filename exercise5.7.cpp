#include <iostream>
#include <cstdlib>
int main()
{
int M;
int N;
int temp;
std::cout << "Введите числитель: ";
std:: cin >> M;
std::cout << " Введите знаменатель: ";
std:: cin >> N;

if(N==0)
{
    std:: cout << "Знаменатель не должен быть равен 0";
    return 0;
}
int sign = 1;
if((M<0 && N>0) || (M>0 && N<0) )
{
    sign = -1;
}
M=abs(M);
N=abs(N);
int originalM=M;
int originalN =N;
while(N!=0)
{
temp = M%N;
M=N;
N= temp;
}
originalM = originalM/M;
originalN=originalN/M;
originalM*=sign;
std::cout << "Результат: " << originalM << "/" << originalN;

}










