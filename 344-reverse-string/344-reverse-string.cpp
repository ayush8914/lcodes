#define pb push_back
class Solution {
public:
    void reverseString(vector<char>& s) {
    vector<char> sa(s);
    s.clear();
    for(int i=sa.size()-1;i>=0;i--){s.pb(sa[i]);}
        }
};