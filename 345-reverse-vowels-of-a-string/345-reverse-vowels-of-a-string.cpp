class Solution {
public:
    string reverseVowels(string s) {
        string sa="";
        for(int j=0;j<s.size();j++){
            if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'u'|| s[j] == 'o'||s[j] == 'A' || s[j] == 'E' || s[j] == 'I' || s[j] == 'U'|| s[j] == 'O'){
                sa+=s[j];
            }
        }
        
        string s1="";
        for(int i=sa.size()-1;i>=0;i--){
            s1+=sa[i]; 
        }
        int k=0;
        for(int j=0;j<s.size();j++){
             if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'u'|| s[j] == 'o' ||s[j] == 'A' || s[j] == 'E' || s[j] == 'I' || s[j] == 'U'|| s[j] == 'O'){
                 s[j] = s1[k++];
             }
        }
        return s;
    }
};