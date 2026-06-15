#include <iostream>
#include <vector>
using namespace std;

string abbrivation(const string &word)
{
    string result = word.front() + to_string(word.length() - 2) + word.back();
    return result;
}

int main()
{
    int n = 0;
    cin >> n;
    vector<string> words(n);

    for (int i = 0; i < n; i++)
    {
        cin >> words[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (words[i].length() > 10)
        {
            // Todo return abrivation
            string abbr = abbrivation(words[i]);
            words[i] = abbr;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << words[i] << endl;
    }
}