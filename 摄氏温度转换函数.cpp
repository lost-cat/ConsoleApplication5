#include <iostream>
using namespace std;
double temswitch(double a);


int main() {
	while (true)
	{
		cout << "�����뻪���¶�"<<endl;
		double F;
		cin >> F;
		double C = temswitch(F);
		cout << "�����¶�Ϊ" << C << "��"<<endl;
	}


}
double temswitch(double a)
{	
	return 5.0*(a-32.0)/9.0;
}
