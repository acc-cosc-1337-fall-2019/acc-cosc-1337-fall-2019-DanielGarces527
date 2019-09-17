#include<string>

using std::string;
//Write void function protype named prompt_user with no parameters
void prompt_user();

string menu(int menu_option);
//Write void function protype named run_menu with no parameters
void run_menu();
{
	auto choice = 1;

	do
	{
		cout << "Enter menu option";
		cin >> choice;

		while(choice < 1 choice > 4)

			cout << "Enter menu option";
			cin >> choice;

		cout << menu(choice);

	} while (choice =='y'|| choice=='Y');
}

