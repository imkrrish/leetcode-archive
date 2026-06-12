class TreeAncestor {
public:
    vector<vector<int>> ancstorTable;
    int rows;
    int cols;

    TreeAncestor(int n, vector<int>& parent) {
        rows = n;
        cols = log2(n) + 1;

        ancstorTable.resize(rows, vector<int>(cols, -1));

        // fill the 0th col first - imediate parent(ancstor)
        for (int node = 0; node < n; node++) {
            ancstorTable[node][0] = parent[node];
        }

        for (int j = 1; j < cols; j++) {
            for (int node = 0; node < n; node++) {
                if (ancstorTable[node][j - 1] != -1) {
                    ancstorTable[node][j] =
                        ancstorTable[ancstorTable[node][j - 1]][j - 1];
                }
            }
        }
    }

    int getKthAncestor(int node, int k) {
        for (int j = 0; j < cols; j++) {
            if (k & (1 << j)) {
                node = ancstorTable[node][j];
                if (node == -1) {
                    return -1;
                }
            }
        }
        return node;
    }
};

/**
 * Your TreeAncestor object will be instantiated and called as such:
 * TreeAncestor* obj = new TreeAncestor(n, parent);
 * int param_1 = obj->getKthAncestor(node,k);
 */