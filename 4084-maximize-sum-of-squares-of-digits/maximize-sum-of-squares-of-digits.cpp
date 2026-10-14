class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum > num*9) //no such integer exists
            return "";

        int nines = sum/9; //no. of 9's to put
        int remain = sum%9; //remaining number

        string result(nines,'9'); //size->nines, value-> '9'

        if(remain>0){ //if there is any remaining
            result.push_back(remain + '0'); //+'0' to convert int to string 
        }

        result.append(num-result.length(),'0'); //adding zeroes at last until digit size = num
        return result; 
    }
};