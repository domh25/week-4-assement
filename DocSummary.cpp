#include "DocSummary.h"
void DocSummary::analyseDocument(string full)
{
    istringstream wordStream(full);
    while (wordStream >> word)
    {
        pair<map<string, int>::iterator, bool> returnValue;

        returnValue = wordList.insert(pair<string, int>(word, count));

        if (returnValue.second == false)
        {
            ++returnValue.first->second;
        }
    }
    map<string, int>::iterator itr;
    for (itr = wordList.begin(); itr != wordList.end(); ++itr)
    {
        cout << '\t' << itr->second << '\n';
        cout << '\t' << itr->first;

    }

}