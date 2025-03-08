class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int Min = INT_MAX;
        int count = 0;
        for (int i = 0; i < k; i++) {
            if (blocks[i] == 'W') {
                count++;
            }
        }
        Min = count;
        for (int i = k; i < blocks.size(); i++) {
            if (blocks[i - k] == 'W')
                count--;
            if (blocks[i] == 'W')
                count++;
            Min = min(Min, count);
        }

        return Min;
    }
};