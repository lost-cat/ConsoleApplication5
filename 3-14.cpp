#include <iostream>
using namespace std;
double p(double n, double x);



int main()
{
	while (true)
	{
		cout << "请输入n和x的值" << endl;
		double n, x;
		cin >> n >> x;
		cout << p(n, x)<<endl;
	}
}
double p(double n, double x)
{
	if (n==0)
	{
		return 1;
	}
	else if (n==1)
	{
		return x;
	}
	else
	{
		return ((2 * n - 1) * x * p(n - 1, x) - (n - 1) * p(n - 2, x)) / n;
	}
}
