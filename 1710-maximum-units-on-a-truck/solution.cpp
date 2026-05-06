class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 return a[1] > b[1];
             });

        int result = 0;

        for (auto& boxType : boxTypes) {
            int boxes = boxType[0];
            int unitPerBox = boxType[1];

            int take = min(boxes, truckSize);

            result += take * unitPerBox;
            truckSize -= take;
            if (truckSize == 0)
                break;
        }

        return result;
    }
};