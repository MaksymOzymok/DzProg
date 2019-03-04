#include<iostream>
 
int main()
{
  std::cout<<"Enter money"<<std::endl;
  int a;
  int b;
  int c;
  int d;
  int s;
  float n;
  float n2;
std::cin>>n;
n2 = n  * 100;
a  = n2 / 50;
n2 = n2 - a *50;
b  = n2 / 25;
n2 = n2 - b*25;
c = n2 / 10;
n2 = n2 - c*10;
d = n2 / 5;
n2 = n2 - d * 5;
s = a + b + c + d +n2;
std::cout<<"Kilkist monet = "<<s<<std::endl;
}
