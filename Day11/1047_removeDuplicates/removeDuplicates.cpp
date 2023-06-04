class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> stk;
        for (int i = 0; i < s.length();i++){
            if (stk.empty() || s[i] != stk.top()){
                stk.push(s[i]);
            }
            else if (s[i] == stk.top()){
                stk.pop();
            }
        }
        string result = "";
        while (!stk.empty()) {
            result += stk.top();
            stk.pop();
        }
        reverse(result.begin(),result.end());
        return result;

    }
};