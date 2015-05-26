#include <iostream>

void vowelFinder(std::string);

int main(){
	char text[500];
	std::cin.getline(text, sizeof(text));
	vowelFinder(text);
	system("PAUSE");
	return 0;
}

void vowelFinder(std::string text){
	int vowelCounter[6] = { 0, 0, 0, 0, 0, 0 };
	int characterCounter = 0;
	char lcVowels[5] = { 'a', 'e', 'i', 'o', 'u' };
	char ucVowels[5] = { 'A', 'E', 'I', 'O', 'U' };

	for each(const char a in text){
		for (int i = 0; i <= 4; i++){
			if (a == lcVowels[i] || a == ucVowels[i]){ vowelCounter[i]++; }
		}
		characterCounter++;
	}

	for (int i = 0; i <= 4; i++){
		vowelCounter[5] = vowelCounter[5] + vowelCounter[i];
	}

	std::cout << "\nTotal Vowels: " << vowelCounter[5] << "\nTotal Charcters: " << characterCounter << "\n\nA's: " << vowelCounter[0] << "\nE's: " 
		<< vowelCounter[1] << "\nI's: " << vowelCounter[2] << "\nO's: " << vowelCounter[3] << "\nU's: " << vowelCounter[4] << std::endl;
}