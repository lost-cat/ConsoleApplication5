#include <iostream>
#include <cmath>
using namespace std;
int isPrime(int a);

int main() 
{
	
	int a;
	
	while (true)
	{cout << "������һ����" << endl;
	cin >> a;
		isPrime(a);
	}
	

}

int isPrime(int a)
{
	int k = sqrt(a);
	int i = 0;
	for ( i = 2; i <=k; i++)
	{
		if (a % i == 0) {
			break;
		}
	}
	if (i>=k+1)
	{
		cout << a << "��һ������"<<endl;
	}
	else
	{
		cout << a<< "����һ������"<<endl;
	}
	return 0;
}