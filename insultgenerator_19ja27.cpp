#include "insultgenerator_19ja27.h"
#include <iostream>
#include <fstream>
using namespace std;

FileException :: FileException(string messageIn) {
    message = messageIn;
}
string FileException :: what(){
    return message;
}

NumInsultsOutOfBounds :: NumInsultsOutOfBounds(string messageIn) {
    message = messageIn;
}
NumInsultsOutOfBounds :: what(){
    return message;
}

void FileException :: initialize() {
    ifstream insultSources(FILENAME)

    if (insultSources.fail()) {
        throw (FileException("File could not be opened."));
    }

    string insult;

    for (int i=0;i<NUM_ROW;i++) {

        insultSources >> insult;
        insultWords1.push_back(insult);

        insultSources >> insult;
        insultWords2.push_back(insult);

        insultSources >> insult;
        insultWords3.push_back(insult);

    }

}