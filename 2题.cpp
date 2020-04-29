#include <iostream>
using namespace std;
enum Leap              //����ö��
{
	leap, notleap
};
// ��������
Leap isLeap(int year);
int dayInMonth(int year, int month);
int check(int year, int month, int day);
int theDay(int year, int month, int day);

//������
int main() {
	int year, month, day;
	cout << "������������" << endl;
	cin >> year >> month >> day;
	while (check(year, month, day) != 1)
	{
		cin >> year >> month >> day;
	}
	theDay(year, month, day);
}
//Leap�ͷ����жϸ����Ƿ������꣬������leap��notleap
Leap isLeap(int year)
{
	if (year % 100 == 0)
	{

		if (year % 400 == 0) {
			return leap;
		}
		else
		{
			return notleap;
		}

	}


	else if (year % 4 == 0) {
		return leap;
	}
	else {
		return notleap;
	}
}
// ����һ�����е�����
int dayInMonth(int year, int month)
{
	Leap f = isLeap(year);
	int days;
	switch (month)
	{
	case 1: case 5:case 3:case 7: case 8:case 10: case 12:
		days = 31;
		break;
	case 2:
		if (f == leap)days = 29;
		else days = 28;
		break;
	default: days = 30;
	}

	return days;
}
//�ж������Ƿ�Ϸ�
int check(int year, int month, int day) {
	Leap f = isLeap(year);
	int days = dayInMonth(year, month);
	if (month < 1 || month>12)
	{
		cout << "��������·ݲ��Ϸ�" << endl;
		return 0;
	}
	if (day < 0 || day>31)
	{
		cout << "��������·ݲ��Ϸ�" << endl;
		return 0;
	}
	if (day > days)
	{
		cout << "���������������"<<endl;
		return 0;
	}
	return 1;
}

//������һ����һ�����ǵڼ���
int theDay(int year, int month, int day)
{
	Leap f = isLeap(year);
	int days;
	int totalDays = 0;
	for (int i = 1; i <= month - 1; i++)
	{
		switch (i)
		{
		case 1: case 5:case 3:case 7: case 8:case 10: case 12:
			days = 31;
			break;
		case 2:
			if (f == leap)days = 29;
			else days = 28;
			break;
		default: days = 30;
			
		}
		totalDays = totalDays + days;
	}
	cout << "������Ϊһ���еĵ�" << totalDays + day << "��" << endl;
		return 0;
}