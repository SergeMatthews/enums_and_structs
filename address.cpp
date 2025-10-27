#include <iostream>
#include <string>
#include <windows.h>
using std::cin;
using std::cout;
using std::endl;

struct address {
	std::string city;
	std::string street;
	std::string house;
	int appartment = 0;
	int index = 0;
};

void AddressShow(const address& exAddress);

int main()
{
	setlocale(LC_ALL, "RU");

	address example1{ "Омск", "пр-т Мира", "18а", 43, 644012 };
	address example2{ "Москва", "Алтуфьевская", "37", 124, 600414 };
	
	AddressShow(example1);
	AddressShow(example2);

	return EXIT_SUCCESS;
}

void AddressShow(const address& exAddress)
{
	cout << "Город: " << exAddress.city << endl;
	cout << "Улица: " << exAddress.street << endl;
	cout << "Номер дома: " << exAddress.house << endl;
	cout << "Номер квартиры: " << exAddress.appartment << endl;
	cout << "Индекс: " << exAddress.index << endl;
	cout << endl;
}