#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>
#include <sstream>
using namespace std;
class DocSummary
{
public:
    string word;
    std::map<string, int> wordList;
    int count = 1;

    void analyseDocument(string full);
};


