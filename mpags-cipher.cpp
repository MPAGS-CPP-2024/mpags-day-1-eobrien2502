// mpags-cipher.cpp

#include <iostream>
#include <string>
#include <vector>

int main( int argc, char* argv[]){

    const std::vector<std::string> cmdLineArgs{argv, argv+argc};

    // Creating a boolean variable to tell us when help us requested.
    bool helpRequested{false};

    // Creating a boolean variable to tell me when the version is requested.
    bool versionRequested{false};

    // Creating a boolean to check if the input file was given and initialising the input file variable
    bool input_fileGiven{false};
    std::string input_file{""};

    // Creating a boolean to check if the output file was given and initialising the output file variable
    bool output_fileGiven{false};
    std::string output_file{""};

    // Looking through the command line arguments, excluding the first one.
    for (std::size_t i{1}; i < cmdLineArgs.size(); i++){

        //std::cout <<  " The argument being considered now is " << cmdLineArgs[i] << std::endl;
        //std::cout <<  "The argument index is " << i << std::endl;

        //Looking for whether help is requested
        if((cmdLineArgs[i] == "--help") || (cmdLineArgs[i] == "-h") ){

            helpRequested = true;

        }

        // Looking for whether the version is requested
        if(cmdLineArgs[i] == "--version" ){

            versionRequested = true;

        }


        // Looking for whether the option -i has been used as an argument
        if(cmdLineArgs[i] == "-i" ){
            
            // Need to look to see if this was the last argument specified
            // If it was, need to return an error message.
            if (i == (cmdLineArgs.size() - 1)){
                std::cout << "An input file must be specified in the -i option after '-i'." << std::endl;
                break;
            }
            else{
                // If it wasn't, proceed as normal.

                // Take the next argument as the input file
                input_fileGiven = true;
                //std::cout << input_fileGiven << std::endl;
                input_file = cmdLineArgs[i+1];
                //std::cout << "The file identified as an input file is " << input_file << std::endl;

            }

            
        }
        



        // Looking for whether the option -o has been used as an argument
        if(cmdLineArgs[i] == "-o" ){

            // Need to look to see if this was the last argument specified
            // If it was, need to return an error message.
            if (i == (cmdLineArgs.size() - 1)){
                std::cout << "An output file must be specified in the -o option after '-o'." << std::endl;
                break;
            }
            else{
                // If it wasn't, proceed as normal.
            
                // Take the next argument as the output file
                output_fileGiven = true;
                output_file = cmdLineArgs[i+1];
                //std::cout << "The file identified as an output file is " << output_file << std::endl;
            }
           
        }
        

        
        
    }


    

    // When help is requested
    if (helpRequested) {
        // Print help message
        std::cout
        << " \n"
        << " mpags-cipher [-h/--help]\n" 
        << " Encrypt and decrypt alphanumeric text using classical ciphers\n"
        << " Avaliable options:\n"
        << " -h | --help            Print this help message and exit\n"
        << " --version              Print the version number and exit\n"
        << " -i <input_file>        Specify the input file\n"
        << " -o <output_file>       Specify the output file\n"
        << " -c <cipher>            Specify the type of classical cipher:\n"
        << "                                type1\n"
        << "                                type2\n"
        << "                                type3\n"
        << " -k <key>               Specify the key\n"
        << " encrypt/decrypt        Specify if the message is for encryption or decryption\n"
        << std::endl;

    
    }

    // When version is requested
    if (versionRequested) {
        // Print the version
        std::cout
        << " \n"
        << " version: v0.1.0\n" 
        << std::endl;

        
    }

    // The input file 
    if (input_fileGiven) {

        // At the moment, this will just be a print statement
        std::cout << "The input file to the program is " << input_file << " ." << std::endl;
        
    }
    else{
        std::cout << "The input file must be specified. Use -h / --help for more information." << std::endl;
         

    }

    // The output file
    if (output_fileGiven) {

        // At the moment, this will just be a print statement
        std::cout << "The output file to the program is " << output_file << " ." << std::endl;
        
    }
    else{

        std::cout << "The output file must be specified. Use -h / --help for more information." << std::endl;
         

    }

    // I'm keeping the user input part of my code for now.

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

// I'm happy with submitting this as my attempt at the homework. 
// The only problem that i know that still exists with my code is that, for instance, if typed
// ./mpags-cipher -i -o my_output_file 
// I know that my code would list -o as the input file and this is incorrect. 
// I'm not sure how to get it to recognise that -o isn't a file.
// I'm not sure i can do that at this stage because I'm not checking anything about the form of the argument that comes after -i or -o.
//
// I also kept the code for the user input from the terminal just because it worked and it doesn;t affect the other part of the code.
// I'd be greatful for your feedback and suggestions on how to improve my work and solve the problems I've stated.