class Solution {
public:
    int romanToInt(string s) {
        int c=0,x;
        unordered_map<char,int> m;
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;
        for(int i=0;i<s.length();i++){
            if(i+1<s.length() && m[s[i]]<m[s[i+1]])
            { x=i; c+=m[s[x+1]]-m[s[i]]; i++;}
            else c+=m[s[i]];
        }
        return c;
    }
};
