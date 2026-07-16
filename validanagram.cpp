#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
            return false;

        unordered_map<char, int> mp;

        for (char c : s)
            mp[c]++;

        for (char c : t) {
            mp[c]--;
            if (mp[c] < 0)
                return false;
        }

        return true;
    }
};

int main() {
    Solution obj;

    string s = "anagram";
    string t = "nagaram";

    if (obj.isAnagram(s, t))
        cout << "True";
    else
        cout << "False";

    return 0;
}