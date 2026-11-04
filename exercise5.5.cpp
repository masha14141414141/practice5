#include <iostream>
int main()
{
int N;

std:: cout << "Введите номер последовательности: ";
std:: cin >> N;
int A = 1;
int B = 1;

int i = 3;
while (i<=N)
{
int sum = A + B;
A = B;
B = sum;
i++;
}

std:: cout << "Число в последовательности: " << B;







}