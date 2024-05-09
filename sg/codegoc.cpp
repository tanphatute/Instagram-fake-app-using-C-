#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<windows.h>
#include<string>
#include<vector>
#include<algorithm>

#include <iomanip> // cho string cho rate
using namespace std;

class app
{
	
private:
	string user, email, password, gender, dob, privacy, phone;//còn
	int follower, following, i;
	string user_account;
	
	struct user_str
	{
		string name;
	}z[200];
	bool isRecipientValid(const string& recipientUsername);
	bool checkBlock(const string& username);
public:
	void intro(); // giới thiệu
	void instagram();// app
	void login(); // đăng nhập tk
	void menu();
	void create(); //tạo tk mới
	void search(); // tìm tk
	void update(); //cập nhật tk
	void del();
	void follow(); //theo dõi bất kì tk
	void message();
	void follower_user();
	void following_user();
	void recent_msg();

	void replay_msg();
	void updateMessageFiles(const string& recipientUsername);
	void displayRecentMessagesFrom(const string& recipientUsername);

	void old_msg();
	void block();
	void blocked_user();
	void unblock();
	void rate();
	void app_rating();
};
void app::intro()
{
	cout << "\n\n\n\n\n";
	cout << "\t\t\t=============================";
	cout << "\n\t\t\t=============================";
	cout << "\n\n\t\t\t\tMy best friend";
	cout << "\n\n\n\t\t\t 1.Alah Pak";
	cout << "\n\n\t\t\t 2. Hazrat Muhammad (S.A.W)";
	cout << "\n\n\t\t\t============================";
	cout << "\n\n\t\t\t===========================";
	_getch();
	system("cls");
	cout << "\n\n\n\n\n\n\n";
	cout << "\t\t\t=================================";
	cout << "\n\n\t\t\t    Instagram App PJ";
	cout << "\n\n\t\t\t\tComplete Version";
	cout << "\n\n\t\t\t=============================";
	cout << "\n\t\t\t============================";
	_getch();
	system("cls");
	cout << "\n\n\n";
	cout << "\t\t\t====================================";
	cout << "\n\t\t\t====================================";
	cout << "\n\n\t\t\t    Introduction";
	cout << "\n\n\t\t\t====================================";
	cout << "\n\t\t\t====================================";
	cout << "\n\n\t\t\t Name : Hai Khizar Shaha";
	cout << "\n\t\t\t Class : OOP sang t2";
	cout << "\n\t\t\t Section : chieu t2 ";
	cout << "\n\t\t\t Group : 1";
	cout << "\n\t\t\t Teacher : co Quyng Nhu";
	cout << "\n\t\t\t Institute : HCMUTE";
	cout << "\n\n\t\t\t====================================";
	cout << "\n\t\t\t====================================";
	_getch();
	instagram();
}
void app::instagram()
{
p:
	system("cls");
	int choice;
	cout << "\n\n\t\t\t====================================";
	cout << "\n\n\t\t\t\t     Instagram App";
	cout << "\n\n\t\t\t Follow Friends & Chat With Your friends";
	cout << "\n\n\t\t\t====================================";
	cout << "\n\n\n 1.Create Account";
	cout << "\n 2.Login Account";
	cout << "\n 3.Exit";
	cout << "\n\n Your Choice:  ";
	cin >> choice;
	switch (choice)
	{
	case 1:
		create();
		break;
	case 2:
		login();
		break;
	case 3:
		exit(0);
	default:
		cout << "\n\n\n\t\t\tInvalid Value....Please";
	}
	_getch();
	goto p;
}
void app::create() {
	system("cls");
	fstream file;
	char ch;
	string u, e, g, d, p, pass, ph;
	int fr, fg;
	vector<string> usernames;

	cout << "\n\n\n\t\t\t\tCreate Account";
	cout << "\n\n\n User Name (Without Space) : ";
	cin >> user;
	cout << "\n\n\t\tE-mail : ";
	cin >> email;
	cout << "\n\n Password : ";
	do {
		ch = _getch();
		if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z') {
			pass += ch;
			cout << "*";
		}
	} while (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z');
	cout << "\n\n\t\tPhone No. : ";
	cin >> phone;
	cout << "\n\n Date Of Birth (dd-mm-yyyy) : ";
	cin >> dob;
	cout << "\n\n\tGender : ";
	cin >> gender;
	cout << "\n\n Privacy (Private/Public) : ";
	cin >> privacy;
	follower = 0;
	following = 0;

	file.open("account.txt", ios::in);
	if (file) {
		while (file >> u >> e >> p >> ph >> d >> g >> p >> fr >> fg) {
			usernames.push_back(u);
		}
		file.close();
	}

	if (find(usernames.begin(), usernames.end(), user) != usernames.end()) {
		cout << "\n\n\n\t\t\tThis User Name is Already Taken";
		_getch();
		create();
		return;
	}

	file.open("account.txt", ios::app | ios::out);
	if (file) {
		file << user << " " << email << " " << pass << " " << phone << " " << dob << " " << gender << " " << privacy << " " << follower << " " << following << endl;
		file.close();
		cout << "\n\n\n\t\t\tThank You For Creating an Account";
	}
	else {
		cout << "\n\n\n\t\t\tError: Unable to open file for writing.";
	}
}
void app::login() {
	system("cls");
	fstream file;
	int c = 0;
	char ch;
	string user_e, user_p;

	cout << "\n\n\n\t\t\t\tLogin Account";
	cout << "\n\n\n User Name : ";
	cin >> user_account;
	cout << "\n\n\t\tE-mail : ";
	cin >> user_e;
	cout << "\n\n Password : ";

	do {
		ch = _getch();
		if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z') {
			user_p += ch;
			cout << "*";
		}
	} while (ch != '\r');

	file.open("account.txt", ios::in);

	if (!file)
		cout << "\n\n\n\t\t\tDataBase is Empty...";
	else {
		//while (file >> user >> email >> password >> phone >> dob >> gender >> privacy) {
		  while (file >> user >> email >> password) {
			if (user_account == user && user_e == email && user_p == password) {
				c++;
				break;
			}
		}

		file.close();

		if (c == 1)
			menu();
		else
			cout << "\n\n\n\t\t\tThis User is Invalid...";
	}
}

void app::menu()
{
p:
	system("cls");
	int choice;
	cout << "\n\n\n\t\t\tControl Panel";
	cout << "\n\n\n 1.Search Account";
	cout << "\n 2.  Update Account";
	cout << "\n 3.  Delete Account";
	cout << "\n 4.  Follow";
	cout << "\n 5.  Messages";
	cout << "\n 6.  Followers";
	cout << "\n 7.  Following";
	cout << "\n 8.  Recent Messages";
	cout << "\n 9.  Old Messages";
	cout << "\n 10. Block User";
	cout << "\n 11. Blocked User";
	cout << "\n 12. Rate App";
	cout << "\n 13. App Rating";
	cout << "\n 14. Back";
	cout << "\n\n Enter Your Choice : ";
	cin >> choice;
	switch (choice)
	{
	case 1:
		search();
		break;
	case 2:
		update();
		break;
	case 3:
		del();
		break;
	case 4:
		follow();
		break;
	case 5:
		message();
		break;
	case 6:
		follower_user();
		break;
	case 7:
		following_user();
		break;
	case 8:
		recent_msg();
		break;
	case 9:
		old_msg();
		break;
	case 10:
		block();
		break;
	case 11:
		blocked_user();
		break;
	case 12:
		rate();
		break;
	case 13:
		app_rating();
		break;
	case 14:
		instagram();
	default:
		cout << "\n\n Invalid Value.., Please Try Again";
	}
	_getch();
	goto p;
}
bool app::checkBlock(const string& username) {
    fstream file;
    file.open("block.txt", ios::in);
    if (file.is_open()) {
        string user_me, user_block;
        while (file >> user_me >> user_block) {
            if ((username == user_me && user_account == user_block) ||
                (user_account == user_me && username == user_block)) {
                file.close();
                return true; // Người dùng bị chặn
            }
        }
        file.close(); // Đóng tệp tin
    }
    return false; // Người dùng không bị chặn
}
void app::search()
{
	system("cls");
	fstream file, file1;
	int c = 0, check = 0, k = 0;
	string user_search, user_me, user_follow;
	cout << "\n\n\n\t\t\t\tSearch Account";
	cout << "\n\n\n User Name : ";
	cin >> user_search;
	file1.open("block.txt", ios::in);
	if (!file1)
		goto h;
	// Kiểm tra người dùng có bị chặn không
    if (checkBlock(user_search)) {
        cout << "\n\n\n\t\t\t" << user_search << " is blocked or has privated their account.";
        file1.close();
		_getch();
        menu();
        return;
    }
h:
	file1.open("follower.txt", ios::in);
	if (!file1)
		goto p;
	file1 >> user_me >> user_follow;
	while (!file1.eof())
	{
		if (user_account == user_me && user_search == user_follow)
			check++;
		else if (user_search == user_me && user_account == user_follow)
			check++;
		file1 >> user_me >> user_follow;
	}
	file1.close();
p:
	file.open("account.txt", ios::in);
	file >> user >> email >> password >> phone >> dob >> gender >> privacy >> follower >> following; //chac chan con dong 335
	while (!file.eof())
	{
		if (user_search == user && privacy == "Private") {
			cout << "\n\n\n\t\t\t The User: " << user_search << " has privated their account" << endl;
			c++;
		}
		else {
		if (user_search == user && check > 0) // chac chan con dong 338
		{
			system("cls");
			cout << "\n\n\n\t\t\t\tSearch Account";
			cout << "\n\n\n User Name : " << user;
			cout << "\n\n\t\tPhone No. : " << phone;
			cout << "\n\n Date of Birth : " << dob;
			cout << "\n\n\t\tGender : " << gender;
			cout << "\n\n Followers : " << follower;
			cout << "\n\n\t\tFollowing : " << following;
			cout << "\n\n You are currently following this user";
			c++;
			break;
		}
		/*else if (user_search == user) // chac chan con dong 351 //why repeat 
		{
			system("cls");
			cout << "\n\n\n\t\t\t\tSearch Account";
			cout << "\n\n\n User Name : " << user;
			cout << "\n\n\t\tPhone No. : " << phone;
			cout << "\n\n Date of Birth : " << dob;
			cout << "\n\n\t\tGender : " << gender;
			cout << "\n\n Followers : " << follower;
			cout << "\n\n\t\tFollowing : " << following;
			c++;
			break;
		} */
		//else if (user_search == user && check > 0) //again why repeat this should be up
		else if (user_search == user)
		{
			system("cls");
			cout << "\n\n\n\t\t\t\tSearch Account";
			cout << "\n\n\n User Name : " << user;
			cout << "\n\n\t\tPhone No. : " << phone;
			cout << "\n\n Date of Birth : " << dob;
			cout << "\n\n\t\tGender : " << gender;
			cout << "\n\n Followers : " << follower;
			cout << "\n\n\t\tFollowing : " << following;
			cout << "\n\n You are not currently following this user";
			c++;
			break;
		}
		/*else if (user_search == user)
		{
			system("cls");
			cout << "\n\n\n\t\t\t\tSearch Account";
			cout << "\n\n\n User Name : " << user;
			cout << "\n\n\n\t\t\tThis Account is Prvacy...."; // con
			c++;
			break;
		}*/
		}
		file >> user >> email >> password >> phone >> dob >> gender >> privacy >> follower >> following; // co the con
	}
	file.close();
	if (c == 0)
		cout << "\n\n\n\t\t\t User Name Cannot Found...";
}
/*void app::search()
{
	system("cls");
	fstream file, file1;
	int c = 0, check = 0, k = 0;
	string user_search, user_me, user_follow;
	cout << "\n\n\n\t\t\t\tSearch Account";
	cout << "\n\n\n User Name : ";
	cin >> user_search;
	file1.open("block.txt", ios::in);
	if (!file1)
		goto h;
	file1 >> user_me >> user_follow;
	while (!file1.eof())
	{
		if (user_search == user_me && user_account == user_follow)
		{
			cout << "\n\n\n\t\t\t" << user_search << " Block";// co the con 303
			k++;
		}
		else if (user_account == user_me && user_search == user_follow)
		{
			cout << "\n\n\n\t\t\t" << user_account << "You"; // co the con dong 308
			k++;
		}
		file1 >> user_me >> user_follow;
	}
	file1.close();
	if (k > 0)
	{
		_getch();
		menu();
	}
h:
	file1.open("follower.txt", ios::in);
	if (!file1)
		goto p;
	file1 >> user_me >> user_follow;
	while (!file1.eof())
	{
		if (user_account == user_me && user_search == user_follow)
			check++;
		else if (user_search == user_me && user_account == user_follow)
			check++;
		file1 >> user_me >> user_follow;
	}
	file1.close();
p:
	file.open("account.txt", ios::in);
	file >> user >> email >> password >> phone >> dob >> gender >> privacy >> follower >> following; //chac chan con dong 335
	while (!file.eof())
	{
		if (user_search == user) // chac chan con dong 338
		{
			system("cls");
			cout << "\n\n\n\t\t\t\tSearch Account";
			cout << "\n\n\n User Name : " << user;
			cout << "\n\n\t\tPhone No. : " << phone;
			cout << "\n\n Date of Birth : " << dob;
			cout << "\n\n\t\tGender : " << gender;
			cout << "\n\n Followers : " << follower;
			cout << "\n\n\t\tFollowing : " << following;
			c++;
			break;
		}
		else if (user_search == user) // chac chan con dong 351
		{
			system("cls");
			cout << "\n\n\n\t\t\t\tSearch Account";
			cout << "\n\n\n User Name : " << user;
			cout << "\n\n\t\tPhone No. : " << phone;
			cout << "\n\n Date of Birth : " << dob;
			cout << "\n\n\t\tGender : " << gender;
			cout << "\n\n Followers : " << follower;
			cout << "\n\n\t\tFollowing : " << following;
			c++;
			break;
		}
		else if (user_search == user && check > 0)
		{
			system("cls");
			cout << "\n\n\n\t\t\t\tSearch Account";
			cout << "\n\n\n User Name : " << user;
			cout << "\n\n\t\tPhone No. : " << phone;
			cout << "\n\n Date of Birth : " << dob;
			cout << "\n\n\t\tGender : " << gender;
			cout << "\n\n Followers : " << follower;
			cout << "\n\n\t\tFollowing : " << following;
			c++;
			break;
		}
		else if (user_search == user)
		{
			system("cls");
			cout << "\n\n\n\t\t\t\tSearch Account";
			cout << "\n\n\n User Name : " << user;
			cout << "\n\n\n\t\t\tThis Account is Prvacy...."; // con
			c++;
			break;
		}
		file >> user >> email >> password >> phone >> dob >> gender >> privacy >> follower >> following; // co the con
	}
	file.close();
	if (c == 0)
		cout << "\n\n\n\t\t\t User Name Cannot Found...";
}*/
/////////////////////////////------------------------------------------------------------------------------------quocanh

void app::update() {
	system("cls");
	fstream file;
	int c = 0;
	char ch;
	string email_update, pass_update, e, pass, ph, g, d, p, dateOfBirth;
	string tempFileName = "tempAccount.txt";

	cout << "\n\n\n\t\t\t Verify Account";
	cout << "\n\n\n E-mail: ";
	cin >> email_update;
	cout << "\n\n\t\t Password: ";
	do {
		ch = _getch();
		if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z') {
			pass_update += ch;
			cout << "*";
		}
	} while (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z');

	file.open("account.txt", ios::in);
	fstream tempFile(tempFileName, ios::out);

	while (file >> user >> email >> password >> phone >> dob >> gender >> privacy >> follower >> following) {
		if (email == email_update && password == pass_update) {
			system("cls");
			cout << "\n\n\n\t\t\t\tUpdate Account";
			cout << "\n\n\n E-mail: ";
			cin >> e;
			cout << "\n\n\n Password: ";
			do {
				ch = _getch();
				if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z') {
					pass += ch;
					cout << "*";
				}
			} while (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z');
			cout << "\n\n Phone No. : ";
			cin >> ph;
			cout << "\n\n Date of Birth: ";
			cin >> dateOfBirth;
			cout << "\n\n Gender : ";
			cin >> g;
			cout << "\n\n\t\tPrivacy (Private/Public) : ";
			cin >> p;
			tempFile << user << " " << e << " " << pass << " " << ph << " " << dateOfBirth << " " << g << " " << p << " " << follower << " " << following << endl;
			c++;
		}
		else {
			tempFile << user << " " << email << " " << password << " " << phone << " " << dob << " " << gender << " " << privacy << " " << follower << " " << following << endl;
		}
	}

	file.close();
	tempFile.close();

	if (c == 0) {
		cout << "\n\n\n\t\t\tE-mail & password is Wrong...";
	}
	else {
		remove("account.txt");
		rename(tempFileName.c_str(), "account.txt");
		cout << "\n\n\n\t\t\tAccount Updated Successfully";
	}
}

/*void app::update() {
	system("cls");
	fstream file;
	int c = 0;
	char ch;
	string email_update, pass_update, e, pass, ph, g, d, p;
	string tempFileName = "tempAccount.txt";

	cout << "\n\n\n\t\t\t Verify Account";
	cout << "\n\n\n E-mail: ";
	cin >> email_update;
	cout << "\n\n\t\t Password: ";
	do {
		ch = _getch();
		if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z') {
			pass_update += ch;
			cout << "*";
		}
	} while (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z');

	file.open("account.txt", ios::in);
	fstream tempFile(tempFileName, ios::out);

	while (file >> user >> email >> password >> phone >> dob >> gender >> privacy >> follower >> following) {
		if (email == email_update && password == pass_update) {
			system("cls");
			cout << "\n\n\n\t\t\t\tUpdate Account";
			cout << "\n\n\n E-mail: ";
			cin >> e;
			cout << "\n\n\n Password: ";
			do {
				ch = _getch();
				if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z') {
					pass += ch;
					cout << "*";
				}
			} while (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z');
			cout << "\n\n Phone No. : ";
			cin >> ph;
			cout << "\n\n Gender : ";
			cin >> g;
			cout << "\n\n\t\tPrivacy (Private/Public) : ";
			cin >> p;
			tempFile << user << " " << e << " " << pass << " " << ph << " " << dob << " " << g << " " << p << " " << follower << " " << following << endl;
			c++;
		}
		else {
			tempFile << user << " " << e << " " << pass << " " << ph << " " << dob << " " << g << " " << p << " " << follower << " " << following << endl;
		}
	}

	file.close();
	tempFile.close();

	if (c == 0) {
		cout << "\n\n\n\t\t\tE-mail & password is Wrong...";
	}
	else {
		remove("account.txt");
		rename(tempFileName.c_str(), "account.txt");
		cout << "\n\n\n\t\t\tAccount Updated Successfully";
	}
}*/
void app::del() {
	system("cls");
	fstream file, tempFile;
	int c = 0;
	char ch;
	string email_del, pass_del;

	cout << "\n\n\n\t\t\t\tDelete Account: ";
	cout << "\n\n\n E-mail: ";
	cin >> email_del;
	cout << "\n\n\t\t Password : ";
	do {
		ch = _getch();
		if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z') {
			pass_del += ch;
			cout << "*";
		}
	} while (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z');

	file.open("account.txt", ios::in);
	tempFile.open("tempAccount.txt", ios::out); // Temporary file to store modified account data

	while (file >> user >> email >> password >> phone >> dob >> gender >> privacy >> follower >> following) {
		if (user_account == user && email_del == email && pass_del == password) {
			cout << "\n\n\n\t\t\tDelete Account Successful!!!!";
			c++;
		}
		else {
			tempFile << user << " " << email << " " << password << " " << phone << " " << dob << " " << gender << " " << privacy << " " << follower << " " << following << endl;
		}
	}

	file.close();
	tempFile.close();

	if (c == 0) {
		cout << "\n\n\n\t\t\tE-mail or Password is Wrong...";
	}
	else {
		remove("account.txt");
		rename("tempAccount.txt", "account.txt");
		_getch();
		instagram();
	}
}

/*void app::del() {
	system("cls");
	fstream file, tempFile;
	int c = 0;
	char ch;
	string email_del, pass_del;

	cout << "\n\n\n\t\t\t\tDelete Account: ";
	cout << "\n\n\n E-mail: ";
	cin >> email_del;
	cout << "\n\n\t\t Password : ";
	do {
		ch = _getch();
		if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z') {
			pass_del += ch;
			cout << "*";
		}
	} while (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z');

	file.open("account.txt", ios::in);
	tempFile.open("tempAccount.txt", ios::out); // Temporary file to store modified account data

	while (file >> user >> email >> password >> phone >> dob >> gender >> privacy >> follower >> following) {
		if (user_account == user && email_del == email && pass_del == password) {
			cout << "\n\n\n\t\t\tDelete Account Successful!!!!";
			c++;
		}
		else {
			tempFile << user << " " << email << " " << password << " " << phone << " " << dob << " " << gender << " " << privacy << " " << follower << " " << following << endl;
		}
	}

	file.close();
	tempFile.close();

	if (c == 0) {
		cout << "\n\n\n\t\t\tE-mail or Password is Wrong...";
	}
	else {
		remove("account.txt");
		rename("tempAccount.txt", "account.txt");
		_getch();
		instagram();
	}
}*/
void app::follow() {
	system("cls");
	fstream file, file1;
	int a = 0, b = 0;
	string user_follow, u, f;
	cout << "\n\n\n\t\t\tFollowing people";
	cout << "\n\n\n Follow User Name : ";
	cin >> user_follow;
///// check block
	if (checkBlock(user_follow)) {
        cout << "\n\n\n\t\t\t" << user_follow << " is blocked or has privated their account.";
        file1.close();
		_getch();
        menu();
        return;
    }
	if (user_follow == user_account) {
		cout << "\n\n\n\t\t\tYou can't follow yourself";
		return;
	}

	file.open("account.txt", ios::in);
	while (file >> user >> email >> password >> phone >> dob >> gender >> privacy >> follower >> following) {
		if (user_follow == user) {
			a++;
			break; // No need to continue searching
		}
	}
	file.close();

	file.open("follower.txt", ios::in);
	while (file >> u >> f) {
		if (user_account == u && user_follow == f) {
			b++;
			break; // No need to continue searching
		}
	}
	file.close();

	if (a == 1 && b == 0) {
		file.open("account.txt", ios::in);
		file1.open("tempAccount.txt", ios::out); // Temporary file to store modified account data
		while (file >> user >> email >> password >> phone >> dob >> gender >> privacy >> follower >> following) {
			if (user_account == user) {
				following++;
			}
			else if (user_follow == user) {
				follower++;
			}
			file1 << user << " " << email << " " << password << " " << phone << " " << dob << " " << gender << " " << privacy << " " << follower << " " << following << endl;
		}
		file.close();
		file1.close();
		remove("account.txt");
		rename("tempAccount.txt", "account.txt");

		file.open("follower.txt", ios::app);
		file << user_account << " " << user_follow << "\n";
		file.close();

		cout << "\n\n\n\t\t\tYou followed " << user_follow;
	}
	else if (b == 1) {
		cout << "\n\n\n\t\t\tYou are already following " << user_follow;
	}
	else {
		cout << "\n\n\n\t\t\tInvalid user: " << user_follow;
	}
}

/*void app::follow()
{
	system("cls");
	fstream file, file1;
	int a = 0, b = 0;
	string user_follow, u, f;
	cout << "\n\n\n\t\t\tFollowing people";
	cout << "\n\n\n Follow User Nmae : ";
	cin >> user_follow;
	if (user_follow == user_account)
	{
		cout << "\n\n\n\t\t\t" << user_account << "Can't follow user";
	}
	else
	{
		file.open("account.txt", ios::in);
		file >> user >> email >> password >> phone >> dob >> gender >> privacy >> follower >> following;
		while (!file.eof())
		{
			if (user_follow == user)
			{
				a++;
			}
			file >> user >> email >> password >> phone >> dob >> gender >> privacy >> follower >> following;
		}
		file.close();
		file.open("follower.txt", ios::in);
		if (!file)
			goto p;
		file >> u >> f;
		while (!file.eof())
		{
			if (user_account == u && user_follow == f)
				b++;
			file >> u >> f;
		}
		file.close();
	p:
		if (a == 1 && b == 0)
		{
			file.open("account.txt", ios::in);
			file1.open("account1.txt", ios::app | ios::out);
			file >> user >> email >> password >> phone >> dob >> gender >> privacy >> follower >> following;
			while (!file.eof())
			{
				if (user_account == user)
				{
					following++;
					file1 << user << " " << email << " " << password << " " << phone << " " << gender << " " << privacy << " " << follower << " " << following << endl;
				}
				else if (user_follow == user)
				{
					follower++;
					file1 << user << " " << email << " " << password << " " << phone << " " << gender << " " << privacy << " " << follower << " " << following << endl;
				}
			}
			file.close();
			file1.close();
			remove("account.txt");
			rename("account1.txt", "account.txt");
			file.open("follower.txt", ios::app | ios::out);
			file << user_account << " " << user_follow << "\n";
			file.close();
			cout << "\n\n\n\t\t\t " << user_account << "Follow" << user_follow;
		}
		else if (b == 1)
			cout << "\n\n\n\t\t\t " << user_account << " Already Followed";
		else
			cout << "\n\n\n\t\t\t " << user_follow << " is Invalid User";
	}
}*/
/*void app::message() {
    system("cls");
    fstream file;
    int a = 0, k = 0;
    SYSTEMTIME x;
    string user_msg, msg, user_me, user_block;

    cout << "\n\n\n\t\t\tMessages";
    cout << "\n\n\n User Name : ";
    cin >> user_msg;

    if (user_msg == user_account) {
        cout << "\n\n\n\t\t\tYou can't send messages to yourself";
        _getch();
        menu();
        return; // Exit the function if user attempts to send a message to themselves
    }

    // Check if the user is blocked or has blocked the recipient
    file.open("block.txt", ios::in);
    if (file.is_open()) {
        while (file >> user_me >> user_block) {
            if (user_msg == user_me && user_account == user_block) {
                cout << "\n\n\n\t\t\t" << user_msg << " is blocked";
                k++;
                break; // Exit the loop if the recipient is blocked by the sender
            } else if (user_account == user_me && user_msg == user_block) {
                cout << "\n\n\n\t\t\tYou have already blocked " << user_msg;
                k++;
                break; // Exit the loop if the recipient has been blocked by the sender
            }
        }
        file.close();

        if (k > 0) {
            _getch();
            menu();
            return; // Exit the function if there's a block
        }
    }

    // Prompt user to enter the message
    cout << "\n\n\t\t Message : ";
    cin.ignore(); // Clear input buffer
    getline(cin, msg);

    // Open message file to append the message
    file.open("message.txt", ios::app);
    if (file.is_open()) {
        GetSystemTime(&x);
        file << user_account << " " << user_msg << " " << msg << " " << x.wDay << "/" << x.wMonth << "/" << x.wYear << " " << x.wHour << ":" << x.wMinute << endl;
        file.close();
        cout << "\n\n\n\t\t\tMessage sent successfully";
    } else {
        cout << "\n\n\n\t\t\tError: Unable to open message file";
    }
}*/
/*void app::message()
{
	system("cls");
	fstream file;
	int a = 0, k = 0;
	SYSTEMTIME x;
	string user_msg, msg, user_me, user_block;
	cout << "\n\n\n\t\t\tMessages";
	cout << "\n\n\n User Name : ";
	cin >> user_msg;
	if (user_msg == user_account)
	{
		cout << "\n\n\n\t\t\t" << user_account << " You can't send messages";
		_getch();
		menu();
	}
	file.open("block.txt", ios::in);
	if (!file)
		goto p;
	file >> user_me >> user_block;
	while (!file.eof())
	{
		if (user_msg == user_me && user_account == user_block)//ko nhin ro
		{
			cout << "\n\n\n\t\t\t" << user_msg << "Blocked";
			k++;
		}
		else if (user_account == user_me && user_msg == user_block)
		{
			cout << "\n\n\n\t\t\t" << user_account << "You already block this user";
			k++;
		}
		file >> user_me >> user_block;
	}
	file.close();
	if (k > 0)
	{
		_getch();
		menu();
	}
p:
	file.open("account.txt", ios::in);
	file >> user >> email >> password >> phone >> dob >> gender >> privacy >> follower >> following;
	while (!file.eof())
	{
		if (user_msg == user)
		{
			a++;
		}
		file >> user >> email >> password >> phone >> dob >> gender >> privacy >> follower >> following;
	}
	file.close();
	if (a == 1)
	{
		cout << "\n\n\t\t Message : ";
		cin.ignore();
		getline(cin, msg);
		file.open("message.txt", ios::app | ios::out);
		GetSystemTime(&x);
		file << user << " " << email << " " << password << " " << phone << " " << gender << " " << privacy << " " << follower << " " << following << endl;
		file.close();
	}
	else
		cout << "\n\n\n\t\t\t" << user_msg << "is Invalid User";
}*/
void app::message() {
  // Clear the console (assuming system("cls") does this)
  system("cls");

  // Variables for storing user input and message details
  string recipientUsername, message;
  SYSTEMTIME currentTime;

  // File stream for message handling
  fstream messageFile;

  // Display title and prompt user for recipient username
  cout << "\n\n\n\t\t\tMessages";
  cout << "\n\n\n User Name: ";
  cin.ignore();
  getline(cin, recipientUsername);
  /*///// check block
	if (checkBlock(recipientUsername)) {
        cout << "\n\n\n\t\t\t" << recipientUsername << " is blocked or has privated their account.";
        messageFile.close();
		_getch();
        menu();
        return;
    }*/
  // Prevent sending messages to yourself
  if (recipientUsername == user_account) {
    cout << "\n\n\n\t\t\tYou cannot send messages to yourself.";
    _getch(); // Wait for a key press
    menu();
    return;
  }

  // Check for blocking in "block.txt" (if the file exists)
  messageFile.open("block.txt", ios::in);
  if (messageFile.is_open()) {
	string user_me, user_block;
    while (messageFile >> user_me >> user_block) {
      // Check if recipient has blocked you or you've blocked them
      if ((recipientUsername == user_me && user_account == user_block) ||
          (user_account == user_me && recipientUsername == user_block)) {
        // Inform user about blocking and exit the function
        cout << "\n\n\n";
        if (recipientUsername == user_me) {
          cout << "\t\t\t" << recipientUsername << " is blocked.";
        } else {
          cout << "\t\t\tYou have already blocked " << recipientUsername << ".";
        }
        _getch();
        messageFile.close();
        menu();
        return;
      }
    }
    messageFile.close(); // Close the file after checking
  }

  // Prompt user to enter the message
  cout << "\n\n\t\t Message: ";
  cin.ignore(); // Clear any remaining characters in the input buffer
  getline(cin, message);

  // Open "message.txt" for appending the message
  messageFile.open("message.txt", ios::app);
  if (messageFile.is_open()) {
    // Get current system time
    GetSystemTime(&currentTime);

    // Format and append message details to the file
    messageFile << user_account << " " << recipientUsername << " " << message << " "
               << currentTime.wDay << "/" << currentTime.wMonth << "/" << currentTime.wYear << " "
               << currentTime.wHour << ":" << currentTime.wMinute << endl;

    messageFile.close();
    cout << "\n\n\n\t\t\tMessage sent successfully.";
  } else {
    cout << "\n\n\n\t\t\tError: Unable to open message file.";
  }
}
void app::follower_user() {
	system("cls");
	fstream file;
	int followerCount = 0;
	string follower, following;

	cout << "\n\n\n\t\t\tFollowers";
	file.open("follower.txt", ios::in);

	if (!file) {
		cout << "\n\n\n Database is Empty or not found...";
	}
	else {
		cout << "\n\n";
		while (file >> follower >> following) {
			if (following == user_account) {
				cout << "\n " << follower;
				followerCount++;
			}
		}
		file.close();

		if (followerCount == 0) {
			cout << "\n You don't have any followers";
		}
	}
}
/*void app::follower_user()
{
	system("cls");
	fstream file;
	int a = 0;
	string user_fr, user_fg;
	cout << "\n\n\n\t\t\tFollowers User";
	file.open("follower.txt", ios::in);
	if (!file)
		cout << "\n\n\n Database is Empty...";
	else
	{
		cout << "\n\n";
		file >> user_fr >> user_fg;
		while (!file.eof())
		{
			if (user_fg == user_account)
			{
				cout << "\n\n " << user_fr;
				a++;
			}
			file >> user_fr >> user_fg;
		}
		file.close();
		if (a == 0)
			cout << "\n Your Followers => 0";
	}
}*/
////////////////////////////////////////////--------------------------------------------------------------------yến
/*void app::following_user() {
	system("cls");
	fstream file,file1;
	int a=0,b=0;
	char choice;
	string user_fr, user_fg, user_n;
	cout << "\n\n\n\t\t\t\tFollowing User";
	file.open("follower.txt",ios::in);
	if(!file)
	cout << "\n\n\n Data Base is Empty...";
	else
	{ //681
		cout<<"\n\n";
		file>>user_fr>>user_fg;
		while(!file.eof())
		{
	//709 if (user_fr == user_account && user_fg == user_n)
	b++;
	else
	file1<<user_fr<<" "<<user_fg<<"\n";
	file>>user_fr>>user_fg;
	}
	file.close();
	file1.close();
	remove("follower.txt");
	rename("follower1.txt","follower.txt");
	if (b!=0)
	{
		file.open("account.txt",ios::in);
		file1.open("account1.txt",ios::app);
		file>>user>>email>>password>>phone>>dob>>gender>>privacy;
		while(!file.eof())
		{
			if(user==user_n)
			{
				follower--;
				file1<<user<<" "<<email<<"\n";
			}
			else if (user == user_account)
			{
				following--;
				file1<<user<<" "<<email<<"\n";
			}
			else
			{
				file1<<user<<" "<<email<<"\n";
			}
			file>>user>>email>>password>>phone>>dob>>gender>>privacy;
		}
		file.close();
		file1.close();
		remove("account.txt");
		rename("account1.txt","account.txt");
		cout<<"\n\n\n\t\t\t"<<user_account<<" ";
	}
	else
	cout<<"\n\n\n\t\t\t"<<user_account<<" ";
	}
}*/
/*void app::following_user() {
	system("cls");
	fstream file, file1;
	int b = 0;
	string user_fr, user_fg, user_n;

	cout << "\n\n\n\t\t\tFollowing User";
	file.open("follower.txt", ios::in);
	file1.open("follower1.txt", ios::app);

	if (!file || !file1) {
		cout << "\n\n\n Database is Empty or Error in file handling...";
	}
	else {
		cout << "\n\n";
		while (file >> user_fr >> user_fg) {
			if (user_fr == user_account && user_fg == user_n) {
				b++;
			}
			else {
				file1 << user_fr << " " << user_fg << "\n";
			}
		}
		file.close();
		file1.close();

		if (b != 0) {
			file.open("account.txt", ios::in);
			file1.open("account1.txt", ios::app);

			if (!file || !file1) {
				cout << "\n\n\n Error in file handling...";
			}
			else {
				file >> user >> email >> password >> phone >> dob >> gender >> privacy;
				while (!file.eof()) {
					if (user == user_n) {
						follower--;
						file1 << user << " " << email << "\n";
					}
					else if (user == user_account) {
						following--;
						file1 << user << " " << email << "\n";
					}
					else {
						file1 << user << " " << email << "\n";
					}
					file >> user >> email >> password >> phone >> dob >> gender >> privacy;
				}
				file.close();
				file1.close();
				remove("account.txt");
				rename("account1.txt", "account.txt");
				cout << "\n\n\n\t\t\t" << user_account << " ";
			}
		}
		else {
			cout << "\n\n\n\t\t\t" << user_account << " ";
		}
	}
}*/
void app::following_user() {
	system("cls");
	fstream file, file1;
	int b = 0;
	string user_fr, user_fg, user_n;
	char choice;

	file.open("follower.txt", ios::in);
	file1.open("follower1.txt", ios::app);

	cout << "\n\n\n\t\t\tFollowing User";

	bool isFollowing = false;
	while (file >> user_fr >> user_fg) {
		if (user_fr == user_account) {
			cout << "\n\n You are currently following: " << user_fg;
		}
		else
			cout << "\n\n You are currently not following any user";
	}

	cout << "\n\n Do you want to unfollow anyone? (y/n): ";
	cin >> choice;

	if (choice == 'Y' || choice == 'y') {
		cout << "\n\n Enter User Name to Unfollow: ";
		cin >> user_n;
		file.clear(); // Clear error flags
		file.seekg(0, ios::beg); // Reset file pointer to the beginning

		while (file >> user_fr >> user_fg) {
			if (user_fr == user_account && user_fg == user_n) {
				b++;
			}
			else {
				file1 << user_fr << " " << user_fg << "\n";
			}
		}
		file.close();
		file1.close();

		remove("follower.txt");
		rename("follower1.txt", "follower.txt");
		if (b != 0) {
			file.open("account.txt", ios::in);
			file1.open("account1.txt", ios::app);

			while (file >> user >> email >> password >> phone >> dob >> gender >> privacy >> follower >> following) {
				if (user == user_n) {
					follower--;
				}
				else if (user == user_account) {
					following--;
				}
				file1 << user << " " << email << " " << password << " " << phone << " " << dob << " " << gender << " " << privacy << " " << follower << " " << following << "\n";
			}
			file.close();
			file1.close();

			remove("account.txt");
			rename("account1.txt", "account.txt");

			cout << "\n\n\n\t\t\t" << user_account << " has unfollowed " << user_n;
		}
		else {
			cout << "\n\n\n\t\t\t" << user_account << " was not following " << user_n;
		}
	}
}
void app::recent_msg() {
	system("cls");
	int a = 0;char choice;
    // File stream for reading messages
    fstream messageFile;

    // Open "message.txt" for reading
    messageFile.open("message.txt", ios::in);
    if (!messageFile) {
        cout << "\n\n\n Database is Empty...";
    } else {
        cout << "\n\n\n\t\t\t\tRecent Messages\n\n";

        string sender, recipient, message, date, time;

        // Read each line of the file
        while (messageFile >> sender >> recipient >> message >> date >> time) {
            // Check if the recipient is the current user
            if (recipient == user_account) {
				a++;
                // Display the message
                cout << "From: " << sender << endl;
                cout << "Message: " << message << endl;
                cout << "Date: " << date << endl; 
				cout <<" Time: " << time << endl;
				
            }
        }
		cout << "Have" << a << "Message";
			if (a != 0) {
				
				cout << "\n\n Do You Want to Add a Reply? (Y/N): ";
				cin >> choice;
			if (choice == 'Y' || choice == 'y')
			{
				replay_msg();
			}
			}
			else {cout<< "No Message";}

        messageFile.close(); // Close the file
    }

    // Wait for a key press before returning to menu
    cout << "\n\nPress any key to return to the menu...";
    _getch();
    menu();}		
	/*ystem("cls");
	fstream file, file1;
	int a = 0, b = 0;
	string user_n, user_a, user_b, msg_date, msg_time, msg;

	cout << "\n\n\n\t\t\t\tRecent Messages";
	file1.open("message.txt", ios::in);

	if (!file1) {
		cout << "\n\n\n Database is Empty...";
	}
	else {
		file1.close();
		cout << "\n\n";

		file.open("account.txt", ios::in);
		while (file >> user >> email >> password >> phone >> dob >> gender >> privacy) {
			file1.open("message.txt", ios::in);
			while (file1 >> user_a >> user_b >> msg >> msg_date >> msg_time) {
				//getline(file1, msg);
				if (user == user_a && user_b == user_account) {
					user_n = user_a;
					a++;
				}
			}
			file1.close();
			// Increment the counter for the number of recent messages
			b += a;
		}
		file.close();

		if (b == 0) {
			cout << "\n No Recent Messages...";
		}
		else {
			_getch();
			replay_msg();
		}
	}*/

/*
void app::recent_msg()
{
	system("cls");
	fstream file,file1;
	int a=0,b=0;
	string user_n, user_a, user_b, msg_date, msg_time, msg;
	cout<<"\n\n\n\t\t\t\tRecent Messages";
	file1.open("message.txt",ios::in);
	if (!file1)
	cout<<"\n\n\n Data Base is Empty...";
	else
	if(!file1)
	cout<<"\n\n\n Data Base is Empty...";
	else
	{
		file1.close();
		i=0;
		cout<<"\n\n";
		file.open("account.txt",ios::in);
		file>>user>>email>>password>>phone>>dob>>gender>>privacy;
		while (!file.eof())
		{
			file1.open("message.txt",ios::in);
			file1>>user_a>>user_b>>msg_date>>msg_time;
			file1.ognore();
			getline(file1,msg);
			while(!file.eof())
			{
				if(user==user_a&&user_b==user_account)
				{
					user_n=user_a;
					a++;
				}
				file1>>user_a>>user_b>>msg_date>>msg_time;
				file1.ignore();
				//786
				//798
				file>>user>>email>>password>>phone>>dob>>gender>>privacy;
			}
			file.close();
			if(b==0)
			cout<<"\n No Recent Messages...";
			else
			{
				_getch();
				replay_msg();
			}
		}
	}
}
*/
void app::updateMessageFiles(const string& recipientUsername) {
    // Mở tệp tin nhắn của người nhận để cập nhật
    fstream file;
    file.open("message.txt", ios::app | ios::out);

    if (file.is_open()) {
        // Thực hiện bất kỳ cập nhật nào cần thiết, ví dụ:
        // Cập nhật cấu trúc của tệp tin nhắn, xóa tin nhắn cũ, thêm tin nhắn mới, vv.
        // Đảm bảo cập nhật được thực hiện đúng cách để lưu tin nhắn mới vào tệp của người nhận.
        
        // Đóng tệp tin
        file.close();
    } else {
        cout << "Error: Unable to open message file for updating.";
    }
}

void app::displayRecentMessagesFrom(const string& recipientUsername) {
    // Mở tệp tin nhắn của người nhận để đọc
    fstream file;
    file.open("message.txt", ios::in);

    if (file.is_open()) {
        cout << "\n\nRecent Messages from " << recipientUsername << ":\n\n";

        string sender, message, date, time;

        // Đọc  dòng của tệp tin nhắn và hiển thị thông tin
		
        while (file >> sender >> message >> date >> time) {
            if (sender == recipientUsername){cout << "Sender: " << sender << endl;
            cout << "Message: " << message << endl;
            cout << "Date: " << date << " Time: " << time << endl << endl;}
        }

        // Đóng tệp tin
        file.close();
    } else {
        cout << "Error: Unable to open message file for reading.";
    }
}
bool app::isRecipientValid(const string& recipientUsername) {
    // Thực hiện logic kiểm tra xem người nhận có hợp lệ không
    // Ví dụ: kiểm tra xem người nhận có tồn tại trong danh sách người dùng không

    // return true nếu người nhận hợp lệ, false nếu không hợp lệ
    return true; // Hoặc false, tùy thuộc vào logic kiểm tra của bạn
}

void app::replay_msg() {
    system("cls");
    fstream file;
    SYSTEMTIME x;
    string recipientUsername, replyMessage;

    cout << "\n\n\n\t\t\t\tReply Message";
    cout << "\n\n\n User Name: ";
    cin >> recipientUsername;

    // Check if the recipient is trying to reply to themselves
    if (recipientUsername == user_account) {
        cout << "\n\n\n\t\t\tYou cannot reply to yourself.";
        _getch(); // Wait for a key press
        menu();
        return;
    }

    // Check if the recipient is valid
    if (!isRecipientValid(recipientUsername)) {
        cout << "\n\n\n User Name is Invalid...";
        _getch(); // Wait for a key press
        menu();
        return;
    }

    // Display recent messages from the specified user
    displayRecentMessagesFrom(recipientUsername);

    cout << "\n\n\t\tMessage: ";
    cin.ignore(); // Clear any remaining characters in the input buffer
    getline(cin, replyMessage);

    // Open "message.txt" for appending the reply
    file.open("message.txt", ios::app | ios::out);
    if (file.is_open()) {
        // Get current system time
        GetSystemTime(&x);

        // Format and append reply message details to the file
        file << user_account << " " << recipientUsername << " " << replyMessage << " "
             << x.wDay << "/" << x.wMonth << "/" << x.wYear << " "
             << x.wHour << ":" << x.wMinute << endl;
        file.close();
        cout << "\n\n\n\t\t\tReply sent successfully.";
    } else {
        cout << "\n\n\n\t\t\tError: Unable to open message file.";
    }

    // Update message files
    updateMessageFiles(recipientUsername);
}

/*void app::replay_msg() {
	system("cls");
	fstream file, file1, file2;
	SYSTEMTIME x;
	int a = 0, check = 0;
	char choice;
	string user_n, user_a, user_b, msg_date, msg_time, msg, msg_rep;

	cout << "\n\n\n\t\t\t\tReply Message";
	cout << "\n\n\n User Name: ";
	cin >> user_n;
	//check = 1;
	file.open("account.txt", ios::in);
	while (file >> user >> email >> password >> phone >> dob >> gender >> privacy) {
		for (int loop = 0; loop < i; loop++) {
			if (user_n == user)
				check++;
		}
	}
	file.close();
	if (check == 0) {
		cout << "\n\n\n\t\t" << user_account << " You Can't Reply";
	}
	else {
		file.open("account.txt", ios::in);
		while (file >> user >> email >> password >> phone >> dob >> gender >> privacy) {
			if (user == user_n)
				a++;
		}
		file.close();

		if (a == 0) {
			cout << "\n\n\n User Name is Invalid...";
		}
		else {
			system("cls");
			cout << "\n\n\n\t\t\t\tReply Messages\n";
			file.open("message.txt", ios::in);
			while (file >> user_a >> user_b >> msg_date >> msg_time) {
				getline(file, msg);
				if (user_a == user_n && user_b == user_account) {
					cout << "\n\n " << msg_date << " " << msg_time;
					cout << "\n " << msg;
				}
			}
			file.close();

			cout << "\n\n Do You Want to Add a Reply? (Y/N): ";
			cin >> choice;

			if (choice == 'Y' || choice == 'y') {
				cout << "\n\n\t\tMessage: ";
				cin.ignore();
				getline(cin, msg_rep);
				file.open("message.txt", ios::app | ios::out);
				GetSystemTime(&x);
				file << user_account << " " << user_n << " " << msg_rep << " " << x.wDay << "/" << x.wMonth << "/" << x.wYear << " " << x.wHour << ":" << x.wMinute << endl;
				//file << user_account << " " << user_n << " " << x.wDay << " " << x.wMonth << " " << x.wYear << " " << x.wHour << " " << x.wMinute << endl;
				//file << msg_rep << endl;
				file.close();
			}

			file.open("message.txt", ios::in);
			file1.open("message1.txt", ios::app | ios::out);
			file2.open("oldmsg.txt", ios::app | ios::out);

			while (file >> user_a >> user_b >> msg_date >> msg_time) {
				getline(file, msg);
				if (user_a == user_n && user_b == user_account)
					file2 << user_a << " " << user_b << " " << msg_date << " " << msg_time << " " << msg << endl;
				else
					file1 << user_a << " " << user_b << " " << msg_date << " " << msg_time << " " << msg << endl;
			}

			file.close();
			file1.close();
			file2.close();

			remove("message.txt");
			rename("message1.txt", "message.txt");
		}
	}
}*/

/*
void app::replay_msg()
{
	system("cls");
	fstream file, file1, file2;
	SYSTEMTIME x;
	int a = 0, check = 0;
	char choice;
	string user_n, user_a, user_b, msg_date, msg_time, msg, msg_rep;
	cout << "\n\n\n\t\t\t\tReplay Message";
	cout << "\n\n\n User Name: ";
	cin >> user_n;
	for (int loop = 0; loop < i; loop++)
	{
		if (user_n == z[loop].name)
			check++;
	}
	if (check == 0)
		cout << "\n\n\n\t\t" << user_account << " You Can't Replay";
	else
	{
		file.open("account.txt", ios::in);
		file >> user >> email >> password >> password >> phone >> dob >> gender >> privacy;
		while (!file.eof())
		{
			if (user == user_n)
				a++;
			file >> user >> email >> password >> password >> phone >> dob >> gender >> privacy;
		}
		file.close();
		if (a == 0)
			cout << "\n\n\n User Name is Invalid...";
		else
		{
			system("cls");
			cout << "\n\n\n\t\t\t\tReplay Messages\n";
			file.open("message.txt", ios::in);
			file >> user_a >> user_b >> msg_date >> msg_time;
			file.ignore();
			getline(file, msg);
			while (!file.eof())
			{
				if (user_a == user_n && user_b == user_account)
				{
					cout << "\n\n " << msg_date << " " << msg_time;
					cout << "\n " << msg;
				}
				file >> user_a >> user_b >> msg_date >> msg_time;
				file.ignore();
				getline(file, msg);
			}
			file.close();
			cout << "\n\n Do You Add Replay (Y/N): ";
			cin >> choice;
			if (choice == 'Y' || choice == 'y')
			{
				cout << "\n\n\t\tMessage: ";
				cin.ignore();
				getline(cin, msg_rep);
				file.open("message.txt", ios::app | ios::out);
				GetSystemTime(&x);
				file << user_account << " " << user_n << " " << x.wDay;
				file.close();
			}
			file.open("message.txt", ios::in);
			file1.open("message1.txt", ios::app | ios::out);
			file2.open("oldmsg.txt", ios::app | ios::out);
			file >> user_a >> user_b >> msg_date >> msg_time;
			file.ignore();
			getline(file, msg);
			while (!file.eof())
			{
				if (user_a == user_n && user_b == user_account)
					file2 << user_a << " " << user_b << " " << msg_date << " " << msg_time;
				else
					file1 << user_a << " " << user_b << " " << msg_date << " " << msg_time;
				file >> user_a >> user_b >> msg_date >> msg_time;
				file.ignore();
				getline(file, msg);
			}
			file.close();
			file1.close();
			file2.close();
			remove("message.txt");
			rename("message1.txt", "message.txt");
		}
	}
}
*/
/*void app::old_msg() {////////////////////////////////////////chatgpt
  // Clear the console (assuming system("cls") does this)
  system("cls");

  // Variables for storing user input and message details
  string recipientUsername;
  int messageCount = 0;
  SYSTEMTIME messageTime;

  // File streams for account and message data
  fstream accountFile, messageFile;

  // Display title and prompt user for recipient username
  cout << "\n\n\n\t\t\t\tOld Messages";
  cout << "\n\n\n User Name: ";
  cin >> recipientUsername;

  // Check if the user exists (using account.txt)
  accountFile.open("account.txt", ios::in);
  if (accountFile.is_open()) {
    bool userFound = false;
    while (accountFile >> user >> email >> password >> phone >> dob >> gender >> privacy) {
      if (user == recipientUsername) {
        userFound = true;
        break;
      }
    }
    accountFile.close();

    if (!userFound) {
      cout << "\n\n\n User Name is Invalid...";
      return;
    }
  } else {
    cout << "\n\n\n Error: Unable to open account file.";
    return;
  }

  // Open "oldmsg.txt" for reading messages
  messageFile.open("oldmsg.txt", ios::in);
  if (messageFile.is_open()) {
    cout << "\n\n\n\t\t\t\tOld Messages\n";
    while (messageFile >> user >> email >> messageTime.wDay >> "/" >> messageTime.wMonth >> "/" >> messageTime.wYear >> messageTime.wHour >> ":" >> messageTime.wMinute) {
      // Ignore the rest of the line (sender and potentially extra data)
      messageFile.ignore(numeric_limits<streamsize>::max(), '\n');
      getline(messageFile, msg); // Read the actual message

      if (user == recipientUsername && email == user_account) {
        cout << "\n\n  " << messageTime.wDay << "/" << messageTime.wMonth << "/" << messageTime.wYear << " " << messageTime.wHour << ":" << messageTime.wMinute;
        cout << "\n  " << msg;
        messageCount++;
      }
    }
    messageFile.close();

    if (messageCount == 0) {
      cout << "\n\n\n " << recipientUsername << " No Old Messages...";
    }
  } else {
    cout << "\n\n\n Error: Unable to open message file.";
  }
}*/
void app::old_msg()
{
	system("cls");

    // File stream for reading messages
    fstream messageFile;

    // Open "message.txt" for reading
    messageFile.open("message.txt", ios::in);
    if (messageFile.is_open()) {
        string sender, recipient, message, date, time;

        // Read each line of the file
        while (messageFile >> sender >> recipient >> message >> date >> time) {
            // Check if the sender is the current user
            if (sender == user_account) {
                // Display the message
                cout << "\nSender: " << sender;
                cout << "\nRecipient: " << recipient;
                cout << "\nMessage: " << message;
                cout << "\nDate: " << date;
                cout << "\nTime: " << time << endl;
            }
        }

        messageFile.close(); // Close the file
    } else {
        cout << "\nError: Unable to open message file." << endl;
    }
	/*system("cls");
	fstream file;
	int a = 0, b = 0;
	string user_n, user_a, user_b, msg_date, msg_time, msg;
	cout << "\n\n\n\t\t\t\tOld Messages";
	cout << "\n\n\n User Name: ";
	cin >> user_n;
	file.open("account.txt", ios::in);
	file >> user >> email >> password >> phone >> dob >> gender >> privacy;
	while (!file.eof())
	{
		if (user == user_n)
			a++;
		file >> user >> email >> password >> phone >> dob >> gender >> privacy;
	}
	file.close();
	if (a == 0)
		cout << "\n\n\n User Name is Invalid...";
	else
	{
		file.open("oldmsg.txt", ios::in);
		if (!file)
			cout << "\n\n\n Data Base is Empty...";
		else
		{
			system("cls");
			cout << "\n\n\n\t\t\t\tOld Messages\n";
			file >> user_a >> user_b >> msg_date >> msg_time;
			file.ignore();
			getline(file, msg);
			while (!file.eof())
			{
				if (user_a == user_n && user_b == user_account)
				{
					cout << "\n\n " << msg_date << " " << msg_time;
					cout << "\n " << msg;
					b++;
				}
				file >> user_a >> user_b >> msg_date >> msg_time;
				file.ignore();
				getline(file, msg);
			}
			file.close();
			if (b == 0)
				cout << "\n\n\n " << user_n << "No Old Messages...";
		}
	}*/
}
///////////////////--------------------------------------------------------------------------phát
void app::block() {
	system("cls"); // Clear the console
	fstream file, blockFile;
	string username;
	bool userExist = false;
	cout << "\n\n\n\t\t\t\tBlock User";
	cout << "\n\n\n User Name to Block: ";
	cin >> username;
	file.open("account.txt", ios::in);
	if (!file)
	{
		cout << "cannot read account.txt" << endl;
	}
	while (file >> user)
	{
		if (user == username){
			cout << "This user exist\n";
			userExist = true;
			break;
		}
	}
	if (!userExist)
		cout << "This user doesn't exist" << endl;
	// Check if the user is trying to block themselves
	if (username == user_account) {
		cout << "\n\n\n\t\t\tYou cannot block yourself.\n";
		return;
	}
	file.close();
	// Check if user to block is already blocked
	blockFile.open("block.txt", ios::app);
	if (!blockFile) {
		cout << "\n\n\n\t\t\tError: Could not open block.txt for reading.\n";
		return;
	}
	string userToBlock;
	while (blockFile >> user >> userToBlock) {
		if (user_account == user && username == userToBlock) {
			cout << "\n\n\n\t\t\t" << username << " is already blocked.\n";
			blockFile.close();
			return;
		}
	}
	blockFile.close();

	// Block the user by adding them to block.txt
	blockFile.open("block.txt", ios::app);
	if (!blockFile) {
		cout << "\n\n\n\t\t\tError: Could not open block.txt for writing.\n";
		return;
	}
	blockFile <<user_account <<" "<< username << endl;
	blockFile.close();

	cout << "\n\n\n\t\t\t" << username << " has been blocked successfully.\n";
}

void app::blocked_user() {
    system("cls");
	char choice;
    fstream file;
    int found = 0;
    string blockedUser;

    cout << "\n\n\n\t\t\t\tBlocked Users";

    file.open("block.txt", ios::in);
    if (!file) {
        cout << "\n\n\n Database is Empty...\n";
        file.close();
        return;
    }

    cout << "\n";
    while (file >> user >> blockedUser) {

        if (user == user_account) { // Check if current user has blocked anyone
            cout << "\n\n " << blockedUser << " is in block" << endl;
            found++;
        }
    }
    file.close();
	if (found !=0){
	cout << "\n\n Do You Want to unlock all? (Y/N): ";
			cin >> choice;
			if (choice == 'Y' || choice == 'y')
			{
				unblock();
			}}
    if (found == 0) {
        cout << "\n\n\n " << user_account << " You haven't blocked anyone yet.\n";
    }
}
void app::unblock() {
    system("cls"); // Clear the console

    fstream blockFile, tempFile;
    string blockedUser;
    int found = 0;

    // Open the block.txt file to read
    blockFile.open("block.txt", ios::in);
    if (!blockFile) {
        cout << "\n\n\n\t\t\tError: Could not open block.txt\n";
        blockFile.close();
        return;
    }

    // Open a temporary file for writing
    tempFile.open("temp.txt", ios::out);
    if (!tempFile) {
        cout << "\n\n\n\t\t\tError: Could not create temporary file\n";
        blockFile.close();
        return;
    }

    // Read block.txt line by line
    while (blockFile >> user >> blockedUser) {
        // Check if the blocked user matches the current user
        if (user == user_account) {
            // Do not write this line to the temporary file
            found++;
        } else {
            // Write the line to the temporary file
            tempFile << user << " " << blockedUser << endl;
        }
    }

    // Close both files
    blockFile.close();
    tempFile.close();

    // Remove the original block.txt file
    if (remove("block.txt") != 0) {
        cout << "\n\n\n\t\t\tError: Could not remove block.txt\n";
        return;
    }

    // Rename the temporary file to block.txt
    if (rename("temp.txt", "block.txt") != 0) {
        cout << "\n\n\n\t\t\tError: Could not rename temporary file\n";
        return;
    }

    // Check if any block records were found for the current user
    if (found == 0) {
        cout << "\n\n\n\t\t\tYou haven't blocked anyone yet.\n";
    } else {
        cout << "\n\n\n\t\t\tAll blocks for your account have been removed.\n";
    }
}

/*void app::block()
{
	system("cls");
	fstream file;
	int a = 0, check = 0, b = 0;
	string user_n, user_me, user_follow;
	cout << "\n\n\n\t\t\t\tBlock User";
	cout << "\n\n\n User Name : ";
	cin >> user_n;
	file.open("account.txt");
	file >> user >> email >> password >> phone >> dob >> gender;
	while (!file.eof())
	{
		if (user == user_n)
			a++;
		file >> user >> email >> password >> phone >> dob >> gender;
	}
	file.close();
	if (a == 0)
		cout << "\n\n\n\n\t\t\tUser Name is Invalid...";
	else
	{
		file.open("follower.txt", ios::in);
		if (!file)
			cout << "\n\n\n\t\t\tData Base is Empty...";
		else
		{

			file >> user_me >> user_follow;

			while (!file.eof())
			{
				if (user_account == user_me && user_n == user_follow)
					check++;
				else if (user_n == user_me && user_account == user_follow)
					check++;
				file >> user_me >> user_follow;
			}
			file.close();
			if (check == 0)
				cout << "\n\n\n\t\t\t" << user_account << "You cant";
			else
			{
				file.open("block.txt", ios::in);
				if (!file)
					goto p;
				file >> user_me >> user_follow;
				while (!file.eof())
				{
					if (user_account == user_me && user_n == user_follow)
						b++;
					file >> user_me >> user_follow;

				}
				file.close();
				if (b > 0)
					cout << "\n\n\n\t\t\t" << user_account << "hihi";
			p:
				if (b == 0)
				{
					file.open("block.txt", ios::app | ios::out);
					file << user_account << " " << user_n << "\n";
					file.close();
					cout << "\n\n\n\t\t\t" << user_account << "hehe";

				}
			}

		}

	}
}

void app::blocked_user()
{
	system("cls");
	fstream file, file1;
	int a = 0, b = 0;
	char choice;
	string user_me, user_block, user_n;
	cout << "\n\n\n\t\t\t\tBlocked User";
	file.open("block.txt", ios::in);
	if (!file)
		cout << "\n\n\n Database is Empty...";
	else
	{
		cout << "\n";
		file >> user_me >> user_block;
		while (!file.eof())
		{
			if (user_account == user_me)
			{
				cout << "\n\n " << user_block;
				a++;
			}
			file >> user_me >> user_block;
		}
		file.close();
		if (a == 0)
			cout << "\n\n\n " << user_account << "You cant block....";
		else
		{
			cout << "\n\n\n Do you remove any user from ....";
			cin >> choice;
			if (choice == 'Y' || choice == 'y')
			{
				cout << "\n\n\t\t User Name : ";
				cin >> user_n;
				file.open("block.txt, ios::in");
				file1.open("block1.txt", ios::app | ios::in | ios::out);
				file >> user_me >> user_block;
				while (!file.eof())
				{
					if (user_account == user_me && user_block == user_n)
						b++;
					else
						file1 << user_me << " " << user_block << "dededeee";
					file >> user_me >> user_block;
				}
				file.close();
				file1.close();
				remove("block.txt");
				rename("block1.txt", "block.txt");
				if (b == 0)
					cout << "\n\n\n\t\t\t" << user_account << " leuleu";
				else
					cout << "\n\n\n\t\t" << user_account << "Su...";
			}
		}
	}
}*/
/*void app::rate()
{
	system("cls");
	fstream file;
	string msg;
	SYSTEMTIME x;
	cout << "\n\n\n\t\t\t\tRate App";
	cout << "\n\n\n Coment : ";
	cin.ignore();
	getline(cin, msg);
	file.open("rate.txt", ios::app | ios::out);
	GetSystemTime(&x);
	file << user_account << " " << x.wDay << "/" << x.wMonth << "/" << x.wYear;
	file.close();
	cout << "\n\n\n\t\t Thank you so much" << user_account; ///chua ro cho nay

}*/
string formatNumber(int num) { // của rate app
    stringstream ss;
    ss << setw(2) << setfill('0') << num;
    return ss.str();
}
void app::rate() {
    system("cls"); // Assuming this is for clearing the console

    fstream file;
    string msg;
    SYSTEMTIME x; // Structure for storing date and time

    cout << "\n\n\n\t\t\t\tRate App";
    cout << "\n\n\n Coment : ";
    cin.ignore(); // Clear leftover characters from previous input
    getline(cin, msg);

    file.open("rate.txt", ios::app | ios::out); // Open in append and write mode

    GetSystemTime(&x);

    // Format the date in YYYY-MM-DD format for consistent storage
   string formattedDate = to_string(x.wYear) + "-" +
                           formatNumber(x.wMonth) + "-" +
                           formatNumber(x.wDay);

    file << user_account << " " << formattedDate << " " << msg << endl; // Write data with newline
    file.close();

    cout << "\n\n\n\t\t Thank you so much " << user_account << endl;
}
void app::app_rating()
{
	system("cls");
	fstream file;
	string rate_user, rate_date, rate_time, rate_msg;
	cout << "\n\n\n\t\t\t\tApp Rating";
	file.open("rate.txt", ios::in);
	 if (!file) {
        cout << "\n\n Data Base is Empty...";
    } else {
        cout << "\n";
        while (getline(file, rate_user, ' ')) { // Read username separated by space
            getline(file, rate_date, ' ');   // Read date separated by space
            getline(file, rate_msg, '\n'); // Read message until newline
            cout << "\n\n " << rate_user << "\t" << rate_date << "\t" << rate_msg; // Display data with tabs
        }
        file.close();
    }
}
	/*if (!file)
		cout << "\n\n Data Base is Empty...";
	else
	{
		cout << "\n";
		file >> rate_user >> rate_date >> rate_time;
		file.ignore();
		getline(file, rate_msg);
		while (!file.eof())
		{
			cout << "\n\n " << rate_user << "\t" << rate_date << rate_time;//dong nay chua ro
			cout << "\n " << rate_msg;
			file >> rate_user >> rate_date >> rate_time;
			file.ignore();
			getline(file, rate_msg);

		}
		file.close();
	}

}*/
int main()
{
	app a;
	a.intro();
}
