class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        if(n <= 1) return n;
        int up = 0, down = 0, result = n, peak = 0;
        for(int i = 0; i < n - 1; i++) {
            if (ratings[i] < ratings[i + 1]) {
                up++;
                down = 0;
                peak = up;
                result += up;
            } else if (ratings[i] == ratings[i + 1]) {
                up = 0;
                down = 0;
                peak = 0;
            } else {
                down++;
                up = 0;
                result += peak >= down ? down - 1 : down;
            }
        }
        return result;
    }
};
