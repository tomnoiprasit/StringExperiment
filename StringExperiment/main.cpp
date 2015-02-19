#include <iostream>
#include <string>
#include <algorithm>
using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::transform;

bool compareCaseInsensitive(string strFirst, string strSecond)
{
	// Convert both strings to upper case by transfrom() before compare.
	transform(strFirst.begin(), strFirst.end(), strFirst.begin(), toupper);
	transform(strSecond.begin(), strSecond.end(), strSecond.begin(), toupper);
	return (strFirst == strSecond) ? true : false;
}

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
		// if(firstString == "exit") break;
		if (compareCaseInsensitive(firstString,"exit")) break;
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
		cout << "Command: ";	
	}

	// You can access each letter in the string via iterator
	string fourthString{"This is a string."};
	for (auto it = fourthString.begin(); it != fourthString.end();)
		cout << *it++ << " ";
	cout << endl;
	// This section is equivalent to the one above.
	for (auto it = fourthString.begin(); it != fourthString.end(); ++it)
		cout << *it << " ";
	cout << endl;
	// If you want to use a while loop.
	string::iterator iter = fourthString.begin();
	while (iter != fourthString.end())
		cout << *iter++ << " ";
	cout << endl;

	system("pause");

	return 0;
}