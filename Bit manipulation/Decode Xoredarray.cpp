class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> res = {first};
        for (int& a: encoded)
            res.push_back(first ^= a);
        return res;
    }
};
