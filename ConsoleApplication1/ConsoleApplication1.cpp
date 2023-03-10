
#include <iostream>
#include<string>
using namespace std;


struct stInformation {
	string firstName;
	string lastName;
	string phone;
	int age;
};

void readInformation(stInformation &data) {
	cout << "Enter your first name \n";
	cin >> data.firstName;

	cout << "Enter your last name \n";
	cin >> data.lastName;

	cout << "Enter your age \n";
	cin >> data.age;

	cout << "Enter your phone number \n";
	cin >> data.phone;

};


void  printInformation(stInformation data)
{
	cout << " **********************************\n\n";
	cout << " First Name : " << data.firstName << endl;
	cout << " last Name  : " << data.lastName << endl;
	cout << " Age        : " << data.age << endl;
	cout << " Phone No   : " << data.phone << endl;
	cout << " **********************************\n\n";


};



int main()
{

	stInformation person1;
	readInformation(person1);
	printInformation(person1);




	return 0;
}

