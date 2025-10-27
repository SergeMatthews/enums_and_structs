#include <iostream>
#include <string>
#include <windows.h>
using std::cin;
using std::cout;
using std::endl;

struct account{
	int accountNmuber = 0;
	std::string name;
	double balance = 0.0;
};

void BalanceChange(account& userAccount, const double newBalance);
void AccountShow(const account& userAccount);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	account user1Account;
	cout << "Введите номер счёта: ";
	cin >> user1Account.accountNmuber;
	cout << "Введите имя владельца: ";
	cin >> user1Account.name;
	cout << "Введите баланс: ";
	cin >> user1Account.balance;

	cout << "Введите новый баланс: ";
	double newBalance = 0.0;
	cin >> newBalance;
	BalanceChange(user1Account, newBalance);
	AccountShow(user1Account);

	SetConsoleCP(866);
	SetConsoleOutputCP(866);

	return EXIT_SUCCESS;
}

void BalanceChange(account& userAccount, const double newBalance)
{
	userAccount.balance = newBalance;
}

void AccountShow(const account& userAccount)
{
	cout << "Ваш счёт: " << userAccount.name << ", "\
				<< userAccount.accountNmuber << ", " << userAccount.balance << endl;

}