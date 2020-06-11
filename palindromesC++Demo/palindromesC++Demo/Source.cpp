#include <iostream>
#include <iomanip>
#include <string>
//Sounds
#include <Windows.h>
#include <MMSystem.h>
//Randoms 
#include <random>
#include <cstdlib>
#include <ctime>
//Dynamic Arrays
#include <vector>
// Sleep Function
#include <time.h>

using namespace std;
bool TestPalindrome(string);

int main() {

	string word;
	cout << "Check if a word is a palindrome!" << endl;
	cin >> word;
	bool isPalin = TestPalindrome(word);
	if (isPalin)
		cout << word << " is a palindrome!" << endl;
	else if (isPalin == false)
		cout << word << " is not a palindrome." << endl;


	system("PAUSE");
	return 0;
}
bool TestPalindrome(string test) {
	if (test.length() <= 1)
		return true;
	else if (test[0] == test[test.length() - 1])
		return true && TestPalindrome(test.substr(1, test.length() - 2));
	else
		return false;
}
