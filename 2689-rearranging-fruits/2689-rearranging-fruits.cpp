class Solution {
public:
    long long minCost(vector<int>& basket1, vector<int>& basket2) {
        vector<int> vec = basket1;
        vec.insert(vec.end(), basket2.begin(), basket2.end());
        sort(vec.begin(), vec.end());
        int minFruit = vec[0];

        map<int, int> mp1, mp2, total;
        for (int i : basket1) {
            mp1[i]++;
            total[i]++;
        }
        for (int i : basket2) {
            mp2[i]++;
            total[i]++;
        }

        for (auto [fruit, count] : total) {
            if (count % 2 != 0) return -1; 
        }

        vector<int> excess1, excess2;
        for (auto [fruit, count] : total) {
            int need = count / 2;
            int diff1 = mp1[fruit] - need;
            if (diff1 > 0) {
                excess1.insert(excess1.end(), diff1, fruit);
            } else if (diff1 < 0) {
                excess2.insert(excess2.end(), -diff1, fruit);
            }
        }

        sort(excess1.begin(), excess1.end());        
        sort(excess2.rbegin(), excess2.rend());       

        long long cost = 0;
        for (int i = 0; i < excess1.size(); ++i) {
            int a = excess1[i];
            int b = excess2[i];
            cost += min((long long)min(a, b), 2LL * minFruit);
        }

        return cost;
    }
};
