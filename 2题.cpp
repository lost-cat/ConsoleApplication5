#include <iostream>
using namespace std;
enum Leap              //定义枚举
{
	leap, notleap
};
// 函数申明
Leap isLeap(int year);
int dayInMonth(int year, int month);
int check(int year, int month, int day);
int theDay(int year, int month, int day);

//主方法
int main() {
	int year, month, day;
	cout << "请输入年月日" << endl;
	cin >> year >> month >> day;
	while (check(year, month, day) != 1)
	{
		cin >> year >> month >> day;
	}
	theDay(year, month, day);
}
//Leap型方法判断该年是否是闰年，并返回leap或notleap
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
// 计算一个月中的天数
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
//判断日期是否合法
int check(int year, int month, int day) {
	Leap f = isLeap(year);
	int days = dayInMonth(year, month);
	if (month < 1 || month>12)
	{
		cout << "你输入的月份不合法" << endl;
		return 0;
	}
	if (day < 0 || day>31)
	{
		cout << "你输入的月份不合法" << endl;
		return 0;
	}
	if (day > days)
	{
		cout << "你输入的日数不对"<<endl;
		return 0;
	}
	return 1;
}

//计算这一天在一年中是第几天
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
	cout << "该日期为一年中的第" << totalDays + day << "天" << endl;
		return 0;
}