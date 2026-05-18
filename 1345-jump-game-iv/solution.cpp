class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();

        if (n == 1) {
            return 0;
        }

        if (arr[0] == arr[n - 1]) {
            return 1;
        }

        unordered_map<int, vector<int>> mp;

        for (int i = 0; i < n; i++) {
            mp[arr[i]].push_back(i);
        }

        vector<int> visited(n, false);
        queue<int> q;

        q.push(0);
        visited[0] = true;
        int steps = 0;

        while (!q.empty()) {
            int size = q.size();

            for (int i = 0; i < size; i++) {
                int curr = q.front();
                q.pop();

                if (curr == n - 1) {
                    return steps;
                }

                // left
                if (curr - 1 >= 0 && !visited[curr - 1]) {
                    visited[curr-1] = true;
                    q.push(curr - 1);
                }

                // right
                if (curr + 1 < n && !visited[curr + 1]) {
                    visited[curr + 1] = true;
                    q.push(curr + 1);
                }

                // for same value
                for (int idx : mp[arr[curr]]) {
                    if (!visited[idx]) {
                        visited[idx] = true;
                        q.push(idx);
                    }
                }

                mp[arr[curr]].clear();
            }
            steps++;
        }

        return -1;
    }
};