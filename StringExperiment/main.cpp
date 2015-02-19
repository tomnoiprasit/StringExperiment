#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
using std::cin;

int main() {
	string firstString; // default initialization
	string secondString {"This is a string."};

	string thirdString(10, '#');
	
	cout << firstString << endl;
	cout << secondString << endl;
	cout << thirdString << endl;

	//cin >> firstString >> secondString;
	cout << firstString << endl;
	cout << secondString << endl;
	cout << "Command: ";
	while (std::getline(cin, firstString)) {
		if (firstString == "exit") break;
		if (!firstString.empty()) {
			//cout << firstString << endl;
			for (auto c : firstString) {
				//cout << c << " ";
				c = toupper(c);
				cout << c;
			}
			cout << endl;
			cout << "Length: " << firstString.size() << endl;
		}
		cout << endl;
		cout << firstString[0] << endl;
		cout << "Command: ";	}

	return 0;
}