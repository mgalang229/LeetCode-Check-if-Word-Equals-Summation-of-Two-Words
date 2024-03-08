class Solution {
    string cnv(string word) {
        string temp = "";
        for (char& c : word) {
            temp += char('0' + (c - 'a'));
        }
        return temp;
    }
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int first = stoi(cnv(firstWord));
        int second = stoi(cnv(secondWord));
        int target = stoi(cnv(targetWord));
        return first + second == target;
    }
};
