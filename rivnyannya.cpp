#include <iostream>
#include<cmath>


int main()
{
int a,b,c;
std::cout<<"Enter A"<<std::endl;
std::cin>>a;
std::cout<<"Enter B"<<std::endl; 
std::cin>>b;
std::cout<<"Enter C"<<std::endl;
std:: cin>>c;
float d ;
          d = b*b - 4*a*c;
if (d>=0){
float x1,x2;
	d = sqrt(d);
	x1 =( -b + d)/(2*a);
	x2 =( -b - d)/(2*a);
		if(x1==x2)
		{
		std::cout<<"One korin"<<x1<<std::endl;
		}else
			{
			std::cout<<"Two korin"<<x1<<" "<<x2<<std::endl;	}}else{
std::cout<<"NOT korin";}	
}
