#include "WordCountPair.h"
string WordCountPair::PassFile()
{
    string filename = "input.txt";
    ifstream myFile(filename);
    if (myFile.is_open())
    {
        while (getline(myFile, line))
        {
            full += line;
            numberOfSentances += 1;
            for (int i = 0; i < line.size(); i++)
            {
                if (line[i] == ' ')
                {
                    numberOfWords++;
                }
            }
        }
        myFile.close();
        cout << "sentances is: " << numberOfSentances-3 << "\n";
        cout << "words is: " << numberOfWords + numberOfSentances;

        for (int i = 0; i < full.size(); i++)
        {
            if (full[i] == ',' || full[i] == '.')
            {
                full[i] = ' ';
            }
        }
    }
    return full;

}