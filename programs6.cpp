#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
   int num1, num2;
   cout<< "Enter two numbers: ";
   cin>> num1 >> num2; 

   int sum = num1 + num2;
   cout<< "Sum:"<< sum <<endl;

   int Biyog = num1 - num2;
   cout<< "Biyog: "<< Biyog<<endl;

   int Gun = num1 * num2;
   cout<< "Gun: "<< Gun<<endl;

   float Vag = num1 / num2;
   cout<< "Vag: "<< Vag<<endl;

   int Vagses = num1 % num2;
   cout<< "Vagses: "<< Vagses<<endl;

    getch();
}