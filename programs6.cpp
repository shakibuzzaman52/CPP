#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
   float num1, num2;
   cout<< "Enter two numbers: ";
   cin>> num1 >> num2; 


   cout<<showpoint;
   cout<<fixed;
   cout<<setprecision(2);

   float sum = num1 + num2;
   cout<<setw(15)<< "Sum:"<< sum <<endl;

   float Biyog = num1 - num2;
   cout<<setw(15)<< "Biyog: "<< Biyog<<endl;

   cout<<noshowpoint;

   float Gun = num1 * num2;
   cout<<setw(15)<< "Gun: "<< Gun<<endl;


   float Vag = (float) num1 / num2;
   cout<<setw(15)<< "Vag: "<< Vag<<endl;

//    int Vagses = num1 % num2;
//    cout<< "Vagses: "<< Vagses<<endl;

    getch();
}