#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <sstream>
using namespace std;

class WordCountPair
{
public:
    int numberOfWords = 0;
    int numberOfSentances = 0;
    string line;
    string full;

    string PassFile();


};

