class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(), asteroids.end());

        for (int& m : asteroids) {
            if (m > mass) {
                return false;
            } else if (mass >= 1e5) {
                return true;
            } else {
                mass += m;
            }
        }

        return true;
    }
};