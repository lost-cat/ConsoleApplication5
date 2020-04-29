#include <iostream>
using namespace std;
double temswitch(double a);


int main() {
	while (true)
	{
		cout << "请输入华氏温度"<<endl;
		double F;
		cin >> F;
		double C = temswitch(F);
		cout << "摄氏温度为" << C << "度"<<endl;
	}


}
double temswitch(double a)
{	
	return 5.0*(a-32.0)/9.0;
}
