#include "Config.hpp"
#include "ArgumentParser.hpp"
#include <string>
#include <stdexcept>
#include <iostream>

Config ArgumentParser::parse(int argc, const char** argv){
    Config config;

    if( argc == 1){
        showHelp();
        std::exit(0);
    }
    if(argc < 3){
        std::cerr << "Error: too few arguments\n\n";
        showHelp();
        std::exit(1);
    
    }else{ 
        config.pattern = argv[1];
        config.filepath = argv[2];
    }

    for (int i = 3; i < argc; i++) {
    std::string arg = argv[i];

        if (arg == "-n") {
            config.case_sensitive = false;
        }
    }
    
    return config;
}

void ArgumentParser::showHelp(){
    std::cout << "This is a GMB tool, short for GrepMAdeBetter. "<< std::endl;
    std::cout << "To search for pharse (or pattern) in a file simply write:\n"<< std::endl;
    std::cout <<"gmb <pattern> <namefile with extension>\n"<< std::endl;
}