class Solution {
public:
    bool isValid(string s) {
        stack<char> char_stack;
        char_stack.push(s[0]);
        for (int i = 1; i < s.length();i++){
            if (s[i] == '(' || s[i] == '{' || s[i] == '['){
                char_stack.push(s[i]);
            }
            else {
                if (char_stack.empty()) 
                    return false;
                else {                
                    char cur = char_stack.top();
                    if ((cur == '(' && s[i] == ')') || (cur == '{' && s[i] == '}') || (cur == '[' && s[i] == ']')) {
                        char_stack.pop();
                        }
                    else 
                        return false;
                }
            }
        }
        return char_stack.empty();
    }
};