class Solution {
public:
    int reverse(int x) {
     string s = to_string(x);
        std::reverse(s.begin(), s.end());
        long k = stol(s);
        if(k > INT_MAX) return 0;
        return x >= 0 ? k : -k ;
        
    }
};