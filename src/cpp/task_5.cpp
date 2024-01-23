/*
 * Author:Muhammad Xayrullayev
 * Date:23.01.2024
 * Name:Muhammad Xayrullayev
 */

#include <iostream>
#include <unordered_map>

using namespace std;

class Problem5 {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char, char> substitutionTable = generateSubstitutionTable(key);
        string decodedMessage;

        for (char ch : message) {
            if (ch == ' ') {
                decodedMessage += ' '; 
            } else {
                decodedMessage += substitutionTable[ch];
            }
        }

        return decodedMessage;
    }

private:
    unordered_map<char, char> generateSubstitutionTable(const string& key) {
        unordered_map<char, char> table;
        string alphabet = "abcdefghijklmnopqrstuvwxyz";

        int keyIndex = 0;
        for (char ch : alphabet) {
            auto it = key.find(ch);
            if (it != string::npos) {
                table[ch] = alphabet[keyIndex++];
            }
        }

        return table;
    }
};

