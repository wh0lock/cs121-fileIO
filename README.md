# cs121-fileIO
## Week 6
### Program should read each line from a file and output them accordingly
```
#include <fstream>
#include <iostream>
#include <sstream>

int main(){
    std::ifstream inFile; # this is the file pointer 
    std::stringstream ss; # this is the string stream
    std::stringstream converter; # does exactly what you think it does
    std::string currentLine; # line we are on
    int intOne;
    std::string sIntOne;
    int intTwo;
    std::string sIntTwo;
    std::string word;
    int total;

    inFile.open("data.csv");
    for each line in the file,
        for each data element in the line, 
            clear the string streams
            load variables into string stream ss
            read int one as a string using comma as delimiter
            read int two as a string using comma as delimiter
            read text, newline is delimiter
            send sIntOne to converter stream
            send sIntTwo to converter stream
            send contents of converter stream back to integer (intOne and intTwo)
            
            int total = intOne + intTwo;

            std::cout << word * total << " " << std::endl;
        } // end for
    } // end for
    return 0;
    inFile.close();
} // end main
```
