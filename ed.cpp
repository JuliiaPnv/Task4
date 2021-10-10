#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	int day1, month1, year1, day2, month2, year2;
	setlocale(LC_ALL, "Rus");
	cout << "Today:"<<endl;
	cout << "day = ";
	cin >> day1;
	cout << "month = ";
	cin >> month1;
	cout << "year = ";
	cin >> year1;
	cout << "Date of Birth:"<<endl;
	cout << "day = ";
	cin >> day2;
	cout << "month = ";
	cin >> month2;
	cout << "year = ";
	cin >> year2;
	tm date1 = { 0, 0, 0, day2, month2, year2 - 1900 };
	tm date2 = { 0, 0, 0, day1, month1, year1 - 1900 };

	time_t dateOfBirth = mktime(&date1);
	time_t dateNow = mktime(&date2);

	cout << (int)(difftime(dateNow, dateOfBirth) / (60 * 60 * 24));
}