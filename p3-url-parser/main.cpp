//
//  main.cpp
//  p3-url-parser
//
//  Created by Jake Short on 2/2/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    std::cout << "Please enter a URL: ";
    std::string input;
    std::cin >> input;
    
    // Find the index of the first "/" of the "//" substring
    int slashSlashIndex = (int)input.find("//");
    std::string scheme = input.substr(0, slashSlashIndex);
    
    // Set input to remaining string starting with the "//"
    input = input.substr(slashSlashIndex + 2, input.length());
    
    // Find the beginning of the path
    int pathBeginIndex = (int)input.find("/");
    std::string authority = "//" + input.substr(0, pathBeginIndex);
    
    // Set the input equal to the rest of the string (the path)
    // and initialize path variable that is equal to the input
    input = input.substr(pathBeginIndex, input.length());
    std::string path = input;

    // Print everything out
    std::cout << scheme << std::endl;
    
    std::cout << authority << std::endl;
    
    std::cout << path << std::endl;
    
    return 0;
}
