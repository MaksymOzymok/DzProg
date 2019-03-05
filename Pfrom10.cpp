#include <iostream>


int main()
{
int i;
int k;
int n;
int j;
   for(i=1;i<=10;i++)
	{  k = 0;
	  std::cout<<"Please,Enter the number";
	   std::cin>>n;
	   for(j=1;j<=n;j++)
	   {
		if (n % j==0){ 
		k = k + 1;
		}
 	   }
	 if (k==2)	
		{ std::cout<<"It is prime number = "<<n<<std::endl;
			}else{std::cout<<"It is not Prime number = "<<n<<std::endl;}
	}


}
