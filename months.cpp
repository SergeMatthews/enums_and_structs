#include <iostream>
using std::cin;
using std::cout;
using std::endl;

enum class MONTHS
{
	JANUARY = 1, FEBRUARY, MARCH,
	APRIL, MAY, JUNE,
	JULY, AUGUST, SEPTEMBER,
	OCTOBER, NOVEMBER, DECEMBER
};

int main()
{
	setlocale(LC_ALL, "RU");

	int monthEnter = 0;
	do {
		cout << "Введите номер месяца: ";
		cin >> monthEnter;

		switch (static_cast<MONTHS>(monthEnter))
		{
		case MONTHS::JANUARY: cout << "Январь" << endl; break;
		case MONTHS::FEBRUARY: cout << "Февраль" << endl; break;
		case MONTHS::MARCH: cout << "Март" << endl; break;
		case MONTHS::APRIL: cout << "Апрель" << endl; break;
		case MONTHS::MAY: cout << "Май" << endl; break;
		case MONTHS::JUNE: cout << "Июнь" << endl; break;
		case MONTHS::JULY: cout << "Июль" << endl; break;
		case MONTHS::AUGUST: cout << "Август" << endl; break;
		case MONTHS::SEPTEMBER: cout << "Сентябрь" << endl; break;
		case MONTHS::OCTOBER: cout << "Октябрь" << endl; break;
		case MONTHS::NOVEMBER: cout << "Ноябрь" << endl; break;
		case MONTHS::DECEMBER: cout << "Декабрь" << endl; break;
		default: if (monthEnter) {
				cout << "Неправильный номер!" << endl;
			} break;
		}
	} while (monthEnter);
	cout << "До свидания" << endl;

	return EXIT_SUCCESS;
}


