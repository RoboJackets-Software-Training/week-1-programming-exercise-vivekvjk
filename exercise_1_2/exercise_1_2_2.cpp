#include <iostream>

int main()
{
    // Part 2: Palindrome Check

    // Input string from command-line
    std::string str;
    std::cout << "Enter String:" << std::endl;
    std::cin >> str;

    // Palindrome Check
    // WRITE YOUR PALINDROME CHECK HERE
    bool isPal = true;
    for (int i = 0; i < str.length()/2; i++){
    	if (str[i] != str[str.length() - 1- i]){
    		isPal = false;
    		break;
    	}
    }
    if (isPal){
    	std::cout << str << " is a palindrome" << std::endl;
    }
    else{
    	std::cout << str << " is NOT a palindrome" << std::endl;
    }
    return 0;
}
