#include <string>
#include <iostream>

using namespace std;

int solution(string words)
{
    int count{ 1 };
    int len = words.length();

    for (int i = 0; i < len; i++) {
        if (words[i] == ' ') {
            count += 1;
        }
    }

    if (words[0] == ' ') {
        count -= 1;
    }

    if (words[len - 1] == ' ') {
        count -= 1;
    }

    return count;
}

int main()
{
    string words;

    getline(cin, words);
    int count = solution(words);
    cout << count;

    return 0;
}