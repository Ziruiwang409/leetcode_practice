class Solution {
public:
    bool isValid(string s) {
        if (s.size() % 2 != 0) return false; // 如果s的长度为奇数，一定不符合要求
        stack<char> str_stack;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') 
                str_stack.push(')');
            else if (s[i] == '{') 
                str_stack.push('}');
            else if (s[i] == '[') 
                str_stack.push(']');
            else if (str_stack.empty() || str_stack.top() != s[i]) 
                return false;
            else 
                str_stack.pop(); // st.top() 与 s[i]相等，栈弹出元素
        }

        return str_stack.empty();
    }
};