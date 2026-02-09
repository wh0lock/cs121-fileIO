#include <fstream>
#include <iostream>
#include <sstream>

int main() {
	std::ifstream inFile;
	std::stringstream ss;
	std::stringstream converter;
	std::stringstream converter2;
	std::string currentLine;
	int intOne;
	std::string sIntOne;
	int intTwo;
	std::string sIntTwo;
	std::string word;
	int total;

	inFile.open("data.csv");
	while (getline(inFile, currentLine)) {
		ss.clear();
		ss.str("");
		converter.clear();
		converter.str("");
		converter2.clear();
		converter2.str("");

		ss.str(currentLine);

		getline(ss, sIntOne, ',');
		getline(ss, sIntTwo, ',');
		getline(ss, word);

		converter << sIntOne;
		converter >> intOne;

		converter2 << sIntTwo;
		converter2 >> intTwo;

		int total = (intOne + intTwo);

		std::cout << total << word << std::endl;
	} // end while
	return 0;
	inFile.close();
} // end main

