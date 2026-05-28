// Last updated: 29/05/2026, 00:04:56
class Solution {
public:
    long long kSum(vector<int>& nums, int k) {
        long long max_sum = 0;
        for (int x : nums) {
            if (x > 0) {
                max_sum += x;
            }
        }

        vector<long long> abs_nums;
        for (int x : nums) {
            abs_nums.push_back(abs(x));
        }
        sort(abs_nums.begin(), abs_nums.end());

        priority_queue<pair<long long, int>> pq;
        pq.push({max_sum - abs_nums[0], 0});

        long long ans = max_sum;
        for (int i = 1; i < k; i++) {
            auto [curr_sum, idx] = pq.top();
            pq.pop();
            ans = curr_sum;

            if (idx + 1 < abs_nums.size()) {
                pq.push({curr_sum - abs_nums[idx + 1], idx + 1});
                pq.push({curr_sum + abs_nums[idx] - abs_nums[idx + 1], idx + 1});
            }
        }

        return ans;
    }
};