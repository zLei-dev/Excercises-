#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

string id_generator(){
	const int maxvalue = 9371829l;
    const int minvalue = 1926212l;
    srand(time(0));
    long id_generate = rand() % (maxvalue - minvalue + 1) + minvalue;
	string id_sign = "09";
	string finished_id = id_sign + to_string(id_generate);
	return finished_id;
}

int main() {
	cout << "Username : ";
	string username_input;
	getline(cin, username_input);
	cout << "So your username is " << username_input << endl;
	cout << "Password : ";
	string userpass_input;
	getline(cin, userpass_input);
	cout << "So your password is " << userpass_input << endl;
	
	cout << "Log in using the created info." << endl;
	string username_verified;
	string userpass_verified;
	cout << "Username : ";
	getline(cin, username_verified);
	if (username_input == username_verified) {
		cout << "Success. " << endl;
	} else if (username_input != username_verified) {
		cout << "Failed. ";
		return 0;
	}
	cout << "Password : ";
	getline(cin, userpass_verified);
	if (userpass_input == userpass_verified) {
		cout << "Success. " << endl;
	} else if (userpass_input != userpass_verified) {
		cout << "Failed. ";
		return 0;
	} 
    

	string generated_id = id_generator();
	while (true){
    cout << "Logged in Succesfully. " << endl
             << "Welcome, " << username_verified << endl
             << "1. Check No. of Accounts " << endl
			 << "2. Account ID" << endl
			 << "3. Log-out" << endl
			 << "[Input Number]" << endl;
		int user_choice_menu;
		cin >> user_choice_menu;
		if (user_choice_menu == 1)
		{
			cout << "No. of Accounts Created" << endl
			     << "1" << endl
				 << "[Press any key to go back. ]";
			char anyKey;
            cin >> anyKey;
		}
		else if (user_choice_menu == 2) {
			cout << "Username: " << username_verified << endl
			     << "Account ID: " << generated_id << endl
				 << "[Press any key to go back. ]";
			char anyKey;
            cin >> anyKey;
		}
		else if (user_choice_menu == 3) {
			cout << "Sucessfully Logged Out";
			break;
		}
	}
		
	return 0;
}