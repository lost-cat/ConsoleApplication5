#include <iostream>
using namespace std;
int f(int n, int m);
int main() {
	cout << "������m��n��ֵ"<<endl;
	int m, n;
	cin >> m >>n;
	int a = f( m,  n);
	if (a==1)
	{
		cout << m << "��" << n << "����" << endl;
	}
	else
	{
		cout << m << "��" << n << "������" << endl;
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