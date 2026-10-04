class Solution {
public:

    bool isAlpha(char c){
        if('a' <= c && c <= 'z' || 'A' <= c && c <= 'Z'){
            return true;
        }
        return false;
    }

    string reverseOnlyLetters(string s) {
        int i = 0;
        int j = s.length()-1;
        while(i<j){
            if(isAlpha(s[i]) && isAlpha(s[j])){
                swap(s[i], s[j]);
                i++;
                j--;
            }
            else if(isAlpha(s[i])){
                j--;
                continue;
            }
            else if(isAlpha(s[j])){
                i++;
                continue;
            }
            else{
                i++;
                j--;
            }
        }

        return s;
    }
};