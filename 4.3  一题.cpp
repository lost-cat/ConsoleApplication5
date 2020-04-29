#include <iostream>
using namespace std;
int f(int n);

int main() {
	int n;
	cout << "ÇëÊäÈënµÄÖµ";
	cin >> n;
	int c=0;
		for (n ;n>=0; n--)
		{
		 c+=f(n);
			 if (c==10)
			{
				 break;
			}
		}
		
	


}

int f(int n) {
	if (n%13==0 || n%17==0)
	{
		cout << n << endl;
		return 1;
	}
	else
	{
		return 0;
	}


}