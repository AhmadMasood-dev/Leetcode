class Solution {
public:
    bool isCircularSentence(string sentence) {
        vector<string> words;
        string word;
        istringstream stream(sentence);
        
        // Split the sentence into words
        while (stream >> word) {
            words.push_back(word);
        }
        
        int n = words.size();
        
        // Check if each word's last character matches the next word's first character
        for (int i = 0; i < n; ++i) {
            char lastChar = words[i].back();
            char firstCharNextWord = words[(i + 1) % n][0];
            
            if (lastChar != firstCharNextWord) {
                return false;
            }
        }
        
        return true;
    }
};
