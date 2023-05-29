class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> s_map(26,0);
        vector<int> t_map(26,0);

        for (int i = 0; i < s.length();i++){
            s_map[s[i] - 'a']++;
        }
        for (int i = 0; i < t.length();i++){
            t_map[t[i] - 'a']++;
        }
        for (int i = 0; i < s_map.size();i++){
            if (s_map[i]!= t_map[i])
                return false;
        }
        return true;
    }
};