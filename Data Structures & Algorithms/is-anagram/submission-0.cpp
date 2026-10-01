class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<char>v(26,0);
        for(auto it:s){
            v[it-'a']++;
        }

        for(auto it:t){
            v[it-'a']--;
           
        }
        for(int i=0;i<v.size();i++){
            if(v[i]!=0) return false;
        }
        return true;
    }
};
