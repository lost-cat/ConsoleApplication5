#include <iostream>
using namespace std;
int fb(int n);
int main() {
	cout << "������n��ֵ" << endl;
	int n;
	cin >> n;
	int m = fb(n);
	cout << "��n������" <<m;
}

int fb(int n) {
	int f1 = 1;
	int f2 = 1;
	int t=0;
	for (int i = 2; i <n; i++)
	{
		t = f2;
		f2 = f1 + f2;
		f1 = t;
	}
	return f2;
	
	


}