class Solution {
public:
    int minimumEffort(vector<vector<int>>& tasks) {
        int n = tasks.size();

        int sum_of_actual = 0;
        int max_of_min_energy = INT_MIN;

        for (int i = 0; i < n; i++) {
            sum_of_actual += tasks[i][0];
            max_of_min_energy = max(max_of_min_energy, tasks[i][1]);
        }

        sort(tasks.begin(), tasks.end(), [](vector<int>& a, vector<int>& b) {
            int diff1 = a[0] - a[1];
            int diff2 = b[0] - b[1];

            return diff1 < diff2;
        });

        int min_energy_req = max(sum_of_actual, max_of_min_energy);
        int extra_energy = 0;

        for (int i = 0; i < n; i++) {
            int actual = tasks[i][0];
            int minimum = tasks[i][1];

            if (minimum > min_energy_req) {
                extra_energy = extra_energy + minimum - min_energy_req;
                min_energy_req += minimum - min_energy_req;
            }

            min_energy_req -= actual;
        }

        return max(sum_of_actual, max_of_min_energy) + extra_energy;
    }
};