#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>

using namespace std;

int main()
{
	vector<string>games;
	vector<string>HELP;
	vector<string>::const_iterator iter;

	HELP.push_back("Здравствуйте я zibzik написавший эту программу");
	HELP.push_back("Планирую продолжать её совершенствовать");
	HELP.push_back("в целях самообразования.");
	HELP.push_back("Вы один из немногих кому я показал эту программу");
	HELP.push_back("(на данный момент).");
	HELP.push_back("Суть программы создать список игр которые вам нравятся.");

	HELP.push_back("для вывода списка list");
	HELP.push_back("для рандомизации значений rand");
	HELP.push_back("для сортировки значений sort");
	HELP.push_back("для добавления в список add");
	HELP.push_back("для удаления из списка delete");
	HELP.push_back("для выхода из программы stop");

	bool is_working = true;

	string console_cin , name_game;

	cout << "Здравствуйте , для справки напишите help" << endl;

	while(is_working)
	{
		cout << "Введите вашу команду : ";
		cin >> console_cin;
		cout <<"" << endl;

		if(console_cin == "help")
		{
			for(iter = HELP.begin(); iter != HELP.end() ; ++iter)
			{	
				cout << *iter << endl;
			}
		}
		else if(console_cin == "list")
		{
			for(iter = games.begin(); iter != games.end() ; ++iter)
			{
				cout << *iter << endl;
			}
		}
		else if(console_cin == "add")
		{
			cout << "Введите название игры : ";
			cin >> name_game;
			cout << "" << endl;
			games.push_back(name_game);
		}
		else if(console_cin == "delete")
		{
			cout << "Введите название которое хотите удалить : ";
			cin >>name_game;
			cout << "" << endl;

			for(iter = games.begin() ; iter != games.end() ; ++iter)
			{
				if((*iter) == name_game)
				{
					games.erase(iter);
					cout << "Пункт успешно удалён." << endl;
					break;
				}
				else
				{
					cout << "Такой пункт отсутствует." << endl;
				}
			}
		}
		else if(console_cin == "rand")
		{
			random_shuffle(games.begin() , games.end());
			cout << "Список был успешно рандомизирован." << endl;
		}
		else if(console_cin == "sort")
		{
			sort(games.begin() , games.end());
			cout << "Список был успешно отсортирован." << endl;
		}
		else if(console_cin == "stop")
		{
			cout << "программа завершена корректно." << endl;
			is_working = false;
		}
		else 
		{
			cout << "Команда не найдена , попробуйте снова." << endl;
		}


	}

	return 0;
}