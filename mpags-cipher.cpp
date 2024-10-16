// mpags-cipher.cpp

#include <iostream>
#include <string>
#include <vector>

int main( int argc, char* argv[]){

    const std::vector<std::string> cmdLineArgs{argv, argv+argc};

    // Creating a boolean variable to tell us when help us requested.
    bool helpRequested{false};

    // Looking through the command line arguments, excluding the first one for signs that help is requested.
    for (std::size_t i{1}; i < cmdLineArgs.size(); i++){
        //std::cout << cmdLineArgs[i] << std::endl;


        if((cmdLineArgs[i] == "--help") || (cmdLineArgs[i] == "-h") ){

            helpRequested = true;

            //std::cout << "This C++ program is used to encrypt and decrypt text. \n ./file_name -i input_file -o output_file -c cipher -k key encryp/decrypt" << std::endl;
        }
        
        
    }

    // When help is requested
    if (helpRequested) {
        // Print help message
        std::cout
        << " mpags-cipher [-h/--help]\n" 
        << " Encrypt and decrypt alphanumeric text using classical ciphers\n"
        << " Avaliable options:\n"
        << " -h | --help        Print this help message and exit\n"
        << std::endl;

        return 0;
    }


    // Initialising variables
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
        
    }



    // print out the new string
    std::cout << out_str << std::endl;
    
}