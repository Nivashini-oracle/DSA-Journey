#include <iostream>
#include <vector>
#include <string>
using namespace std;

int mostWordsFound(vector<string>& sentences) {
    int maxWords = 0;

    for (string sentence : sentences) {
        int words = 1;

        for (char ch : sentence) {
            if (ch == ' ') {
                words++;
            }
        }

        maxWords = max(maxWords, words);
    }

    return maxWords;
}

int main() {
    vector<string> sentences = {
        "alice and bob love leetcode",
        "i think so too",
        "this is great thanks very much"
    };

    cout << mostWordsFound(sentences);

    return 0;
}
