#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    ifstream in("article.txt");

    if (!in)
    {
        cerr << "Could not open article.txt." << endl;
        return 1;
    }

    int characters = 0;
    int words = 0;
    int lines = 0;

    string line;

    while (getline(in, line))
    {
        lines++;

        characters += line.length();

        if (!in.eof())
        {
            characters++;
        }

        stringstream ss(line);
        string word;

        while (ss >> word)
        {
            words++;
        }
    }

    in.close();

    cout << "Characters: " << characters << endl;
    cout << "Words: " << words << endl;
    cout << "Lines: " << lines << endl;

    return 0;
}