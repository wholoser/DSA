class Solution {
public:
    int reverseDegree(string s) {
        int prodSum = 0;
        for(int i = 0; i< s.size(); i++){
            int revIdx = 'z' - s[i] + 1; //+1 as a != 0 but is 1 as org alphabet
            int prod = (i+1) * revIdx; //position in string starts from 1 in Ques.
            prodSum += prod;
        }

        return prodSum;
         
    }
};