#include <iostream>
using namespace std;
int f(int n, int m);
int main() {
	cout << "请输入m，n的值"<<endl;
	int m, n;
	cin >> m >>n;
	int a = f( m,  n);
	if (a==1)
	{
		cout << m << "与" << n << "互质" << endl;
	}
	else
	{
		cout << m << "与" << n << "不互质" << endl;
	}

}

int f(int n, int m) {
	int t=0;
	if (m<=n)
	{
		t = m;
		m = n;
		n = t;
	}
	while (t!=0)
	{
		t = m % n;
		m = n;
		n = t;
	}
	return m;
}