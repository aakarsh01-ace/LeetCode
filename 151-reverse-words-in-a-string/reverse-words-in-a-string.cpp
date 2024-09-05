class Solution {
public:
    string reverseWords(string s) {
        while(s.front()==' '){
            s.erase(0,1);
        }while(s.back()==' '){
            s.pop_back();
        }

        vector<string> words;
        stringstream ss(s);
        string word;
        while(ss >> word){
            words.push_back(word);
        }

        reverse(words.begin(), words.end());
        string reverse_string;
        for(int i=0; i<words.size(); i++){
            reverse_string += words[i];
            if(i < words.size()-1){
                reverse_string += ' ';
            }
        }
        return reverse_string;
    }
};