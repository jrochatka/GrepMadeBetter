#include "Config.hpp"
#include "ArgumentParser.hpp"
#include <string>
#include <stdexcept>

Config ArgumentParser::parse(int argc, char** argv){
    Config config;

    if(argc < 3){
        
        throw std::runtime_error("Error: to few arguments");
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

