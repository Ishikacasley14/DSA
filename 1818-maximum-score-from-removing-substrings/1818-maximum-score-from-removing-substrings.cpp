class Solution {
public:
    int remove(string& s, char first, char second, int points) {
        string temp = "";
        int score = 0;
        for (char ch : s) {
            if (!temp.empty() && temp.back() == first && ch == second) {
                temp.pop_back();
                score += points;
            } else {
                temp.push_back(ch);
            }
        }
        s = temp;
        return score;
    }
    int maximumGain(string s, int x, int y) {
        int totalScore = 0;
        if (x >= y) {
            totalScore += remove(s, 'a', 'b', x); // remove ab
            totalScore += remove(s, 'b', 'a', y); // then remove ba
        } else {
            totalScore += remove(s, 'b', 'a', y); // remove ba
            totalScore += remove(s, 'a', 'b', x); // then remove ab
        }
        return totalScore;
    }
};