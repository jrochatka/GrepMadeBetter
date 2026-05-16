#include <iostream>
#include <stdio.h>
#include <filesystem>
#include <cstdio>
#include <fstream>

namespace fs =std::filesystem;
using namespace std;
int counter = 0;

int main(int argc, char* argv[])
{
	ifstream file(argv[1]);
	string keyword = argv[2];
	string word;

	if (file) {
		while (file >> word) {
			if (word == keyword) {
				counter++;
			}
		}
	}

	cout << "Words counted" << counter << "\n";

}
