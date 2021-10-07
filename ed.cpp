#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	int day, month, year;
	setlocale(LC_ALL, "Rus");
	cout << "введите число = ";
	cin >> day;
	cout << "введите мес€ц = ";
	cin >> month;
	cout << "введите год = ";
	cin >> year;
	tm date1 = { 0, 0, 0, day, month, year - 1900 };
	tm date2 = { 0, 0, 0, 7, 10, 121 };

	time_t dateOfBirth = mktime(&date1);
	time_t dateNow = mktime(&date2);

	cout << (int)(difftime(dateNow, dateOfBirth) / (60 * 60 * 24));
}