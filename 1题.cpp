#include <iostream>
using namespace std;
int isPerfect(int a);

int main()
{
	for (int a = 1; a <=10000 ; a++)
	{
		isPerfect(a);
	}



}
int isPerfect(int a) 
{
	int sum=1;
	for ( int i = 2; i<a;  i++)
	{
		if (a%i==0)
		{
			sum = sum + i;
		}
		
		
	}
		if (sum==a)
		{
			cout << a << endl;
		}


return 0;
}