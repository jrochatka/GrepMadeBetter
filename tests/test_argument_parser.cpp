#include "ArgumentParser.hpp"
#include <cassert>
#include <iostream>
#include <stdexcept>

void test_parse_valid_arguments()
{
    ArgumentParser parser;
    
    const char* argv[] ={"gmb", "hello", "file.txt", "-n"};
    Config config = parser.parse(4, argv);

    assert(config.pattern == "hello");
    assert(config.filepath == "file.txt");
    assert(config.case_sensitive == false);
}


int main()
{
    test_parse_valid_arguments();
    test_parse_too_few_arguments();
    
    
    std::cout << "All tests passed\n";
}