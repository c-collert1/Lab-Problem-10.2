#include <iostream>
#include <string>
using namespace std;

int count_letters(string str);
int count_words(string str);
bool isALetter(char test);

int main() {

	string userInput;

	cout << "enter a quote to test: ";
	getline(cin, userInput);
	cout << "Letters in the quote: " << count_letters(userInput) << endl;
	cout << "Words in the quote: " << count_words(userInput) << endl;
}

int count_letters(string str) {
	int letterCount = 0;
	for (int i = 0; i < str.length(); i++) {
		if (isALetter(str[i])) {
			letterCount++;
		}
	}
	return letterCount;
}

int count_words(std::string str) {
	int wordCounter = 0;
	bool previousSpace = false;
	const char space = ' ';

	if (str.length() > 0) {
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == space && !previousSpace) {
				previousSpace = true;
			}
			if (str[i] != space && previousSpace) {
				wordCounter++;
				previousSpace = false;
			}
			if (str[i] != space && !previousSpace && i == 0) {
				wordCounter++;
			}
		}
		return wordCounter;
	}
	return 0;
}


bool isALetter(char test) {
	if (test == 'a') {
		return true;
	}
	if (test == 'b') {
		return true;
	}
	if (test == 'c') {
		return true;
	}
	if (test == 'd') {
		return true;
	}
	if (test == 'e') {
		return true;
	}
	if (test == 'f') {
		return true;
	}
	if (test == 'g') {
		return true;
	}
	if (test == 'h') {
		return true;
	}
	if (test == 'i') {
		return true;
	}
	if (test == 'j') {
		return true;
	}
	if (test == 'k') {
		return true;
	}
	if (test == 'l') {
		return true;
	}
	if (test == 'm') {
		return true;
	}
	if (test == 'n') {
		return true;
	}
	if (test == 'o') {
		return true;
	}
	if (test == 'p') {
		return true;
	}
	if (test == 'q') {
		return true;
	}
	if (test == 'r') {
		return true;
	}
	if (test == 's') {
		return true;
	}
	if (test == 't') {
		return true;
	}
	if (test == 'u') {
		return true;
	}
	if (test == 'v') {
		return true;
	}
	if (test == 'w') {
		return true;
	}
	if (test == 'x') {
		return true;
	}
	if (test == 'y') {
		return true;
	}
	if (test == 'z') {
		return true;
	}
	if (test == 'A') {
		return true;
	}
	if (test == 'B') {
		return true;
	}
	if (test == 'C') {
		return true;
	}
	if (test == 'D') {
		return true;
	}
	if (test == 'E') {
		return true;
	}
	if (test == 'F') {
		return true;
	}
	if (test == 'G') {
		return true;
	}
	if (test == 'H') {
		return true;
	}
	if (test == 'I') {
		return true;
	}
	if (test == 'J') {
		return true;
	}
	if (test == 'K') {
		return true;
	}
	if (test == 'L') {
		return true;
	}
	if (test == 'M') {
		return true;
	}
	if (test == 'N') {
		return true;
	}
	if (test == 'O') {
		return true;
	}
	if (test == 'P') {
		return true;
	}
	if (test == 'Q') {
		return true;
	}
	if (test == 'R') {
		return true;
	}
	if (test == 'S') {
		return true;
	}
	if (test == 'T') {
		return true;
	}
	if (test == 'U') {
		return true;
	}
	if (test == 'V') {
		return true;
	}
	if (test == 'W') {
		return true;
	}
	if (test == 'X') {
		return true;
	}
	if (test == 'Y') {
		return true;
	}
	if (test == 'Z') {
		return true;
	}
	return false;
}