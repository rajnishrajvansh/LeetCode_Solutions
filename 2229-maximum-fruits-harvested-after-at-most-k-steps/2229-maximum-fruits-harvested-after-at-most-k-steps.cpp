class Solution {
public:
    int maxTotalFruits(vector<vector<int>>& fruits, int startPos, int k) {
        int n = fruits.size();

        vector<int> pos(n), amt(n);
        for (int i = 0; i < n; ++i) {
            pos[i] = fruits[i][0];
            amt[i] = fruits[i][1];
        }
        vector<int> prefix(n + 1, 0);
        for (int i = 0; i < n; ++i) {
            prefix[i + 1] = prefix[i] + amt[i];
        }

        int maxFruits = 0;
        int left = 0;

        for (int right = 0; right < n; ++right) {

            int leftPos = pos[left];
            int rightPos = pos[right];

            int distLeftFirst = abs(startPos - leftPos) + (rightPos - leftPos);
            int distRightFirst = abs(startPos - rightPos) + (rightPos - leftPos);
            int minSteps = min(distLeftFirst, distRightFirst);

           while (left <= right && right < n) {
    if (left >= n) break;  

    int leftPos = pos[left];
    int rightPos = pos[right];

    int distLeftFirst = abs(startPos - leftPos) + (rightPos - leftPos);
    int distRightFirst = abs(startPos - rightPos) + (rightPos - leftPos);
    int minSteps = min(distLeftFirst, distRightFirst);

    if (minSteps > k) {
        ++left;
    } else {
        int fruitsCollected = prefix[right + 1] - prefix[left];
        maxFruits = max(maxFruits, fruitsCollected);
        break;  
    }
}


            if (left <= right) {
                int fruitsCollected = prefix[right + 1] - prefix[left];
                maxFruits = max(maxFruits, fruitsCollected);
            }
        }

        return maxFruits;
    }
};
