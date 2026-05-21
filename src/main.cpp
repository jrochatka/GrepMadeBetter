#include <iostream>
#include <stdio.h>
#include <filesystem>
#include <cstdio>
#include <fstream>
#include "ArgumentParser.hpp"

using namespace std;

int main(int argc, const char* argv[])
{
	ArgumentParser parser;
	Config config = parser.parse(argc, argv);
	
}
