#include <iostream>
#include <string>


using namespace std;

int charcnt(char* ptr, char c);
int repeat(char* ptr);

int main() {
	string sentence;
	char character;
	cout << "Enter a string: ";
		getline(cin, sentence);
		cout << "Enter a character: ";
		cin.get(character);
		char sen[80];
		
		const char* source = sentence.c_str();
		char* cstring = new char[sentence.length()-1];
		for (int i = 0; i < sentence.length(); i++) {
			cstring[i] = sentence[i];
		}

		cout << "The character '" << character << "' appears " << charcnt(cstring, character) << " times in the string." << endl;
		cout << "There are " << repeat(cstring) << " repeated characters in the string." << endl;
		cout << "The reverse string is: ";

		for (int i = sentence.length()-1; i >= 0; i--) {
			cout << sentence[i];
		}

}

int charcnt(char* ptr, char c) {
	int counter = 0;
	while (*ptr != '\0') {
		if (*ptr == c) counter++;
		ptr++;
	}
	return counter;
}

int repeat(char* ptr) {
	int repeater = 0;
	while (*ptr != '\0') {
		if (*ptr == *(ptr+1)){
			repeater++;
		}
		ptr++;
	}
	return repeater-2;
}