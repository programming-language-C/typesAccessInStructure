#include <iostream>
#include <string>
using namespace std;


struct Struct
{
private: // недоступны извне. Досутпен только внутри
	int day = 31;
	int month = 12;
	int year = 2022;
public: // доступны извне
	// используем day, month, year, которые досутпны только внутри структуры
	string time = to_string(day) + "." + to_string(month) + "." + to_string(year);
};

int main()
{
	Struct date;

	// private
	// ошибка, т.к. эти компоненты доступны только в Struct
	// cout << date.hour + "." + date.minute + "." + date.second << endl;

	// public
	// вывели time, которая доступна извне
	cout << date.time << endl;

	return 0;
}
