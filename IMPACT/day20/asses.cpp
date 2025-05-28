// word ladder
#include <bits/stdc++.h>
using namespace std;

int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
    unordered_set<string> wordSet(wordList.begin(), wordList.end());
    if (wordSet.find(endWord) == wordSet.end()) return 0;

    queue<pair<string, int>> q;
    q.push({beginWord, 1});

    while (!q.empty()) {
        auto [word, length] = q.front(); q.pop();
        if (word == endWord) return length;
        for (int i = 0; i < (int)word.size(); i++) {
            char originalChar = word[i];
            for (char c = 'a'; c <= 'z'; c++) {
                if (c == originalChar) continue;
                word[i] = c;
                if (wordSet.find(word) != wordSet.end()) {
                    q.push({word, length + 1});
                    wordSet.erase(word);  // mark as visited
                }
            }
            word[i] = originalChar;
        }
    }
    return 0;
}

int main() {
    string beginWord, endWord;
    int n;
    cin >> n;
    cin >> beginWord;
    cin >> endWord;
    vector<string> wordList(n);
    cout << "Enter dictionary words:\n";
    for (int i = 0; i < n; i++) {
        cin >> wordList[i];
    }
    int result = ladderLength(beginWord, endWord, wordList);
    if (result == 0)
        cout << "No transformation sequence possible.\n";
    else
        cout << "Length of shortest transformation sequence: " << result << "\n";
    return 0;
}
