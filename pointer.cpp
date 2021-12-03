#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
main()
{
int ilham;
int *raka; //pointer ke variabel
int **amir; //pointer pada pointer
ilham=80;
cout <<"nilai ilham                      = "<<ilham<<endl;
//penugasa alamat memory//
raka=&ilham;
amir=&raka;
cout<<"nilai raka hasil Mengkases Ilham = ";
cout<<*raka<<endl;
cout<<"nilai amir hasil mengakses ilham = ";
cout<<**amir<<endl;
getch();
}
