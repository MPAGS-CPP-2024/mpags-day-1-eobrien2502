// mpags-cipher.cpp

#include <iostream>
#include <string>
#include <vector>

int main( int argc, char* argv[]){

    const std::vector<std::string> cmdLineArgs{argv, argv+argc};

    // printing out the command line arguments
    for (std::size_t i{0}; i < cmdLineArgs.size(); i++){
        std::cout << cmdLineArgs[i] << std::endl;

        /*if(cmdLineAgrs[i] == "--help"){
            std::cout << "This C++ program is used to encrypt and decrypt text. \n ./file_name -i input_file -o output_file -c cipher -k key encryp/decrypt" << std::endl;
        }
        else if(cmdLineAgrs[i] == "--h"){
            std::cout << "This C++ program is used to encrypt and decrypt text. \n ./file_name -i input_file -o output_file -c cipher -k key encryp/decrypt" << std::endl;
        
        
        } */
    }

    char in_char{'x'};
    std::string out_str{""};

    // Take each letter from user input and in each case:
    while(std::cin >> in_char)
    {
            
        //- Convert to upper case
        if(std::isalpha(in_char)){
            out_str += std::toupper(in_char);
            continue;
        }

        //- Change numbers to words
        switch(in_char){

            case '0':
                out_str += "ZERO";
                break;
            
            case '1':
                out_str += "ONE";
                break;
            
            case '2':
                out_str += "TWO";
                break;
            
            case '3':
                out_str += "THREE";
                break;

            case '4':
                out_str += "FOUR";
                break;

            case '5':
                out_str += "FIVE";
                break;

            case '6':
                out_str += "SIX";
                break;

            case '7':
                out_str += "SEVEN";
                break;

            case '8':
                out_str += "EIGHT";
                break;

            case '9':
                out_str += "NINE";
                break;
            
            default:
                // Do nothing
                break;
        }

        //- Ignore any other (non-alpha) characters
        //- In each case, add result to a string variable
    }



    // print out the new string
    std::cout << out_str << std::endl;
    
}