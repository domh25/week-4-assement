
#include <iostream>
#include <fstream>
#include <string>
#include "WordCountPair.h"
#include "DocSummary.h"

int main()
{
    string full;
    WordCountPair word_count_pair;
    DocSummary doc1;
    full = word_count_pair.PassFile();
    doc1.analyseDocument(full);


}
