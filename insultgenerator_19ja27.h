#include <vector>
#include <string>
#define FILENAME "InsultsSource.txt"
#define NUM_ROWS 50


class InsultGenerator {
    private:
    vector<string> insultWords1, insultWords2, insultWords3;



    public:
    void initialize();
    string talkToMe();
    vector<string> generate(int numOfInsults);
    void generateAndSave(string fileName, int numOfInsults);
}

class FileException {
    FileException(string message);
    private:
    string message;

    public:
    string what();

}

class NumInsultsOutOfBounds{
    NumInsultsOutOfBounds(string message);
    private:
    string message;

    public:
    string what();

}

