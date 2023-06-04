class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        for (int i = 0; i < tokens.size();i++){
            if (tokens[i].compare("+") == 0){
                int second = stk.top();
                stk.pop();
                int first = stk.top();
                stk.pop();
                stk.push(first + second);
            }
            else if (tokens[i].compare("-") == 0){
                int second = stk.top();
                stk.pop();
                int first = stk.top();
                stk.pop();
                stk.push(first - second);
            }
            else if (tokens[i].compare("*") == 0){
                int second = stk.top();
                stk.pop();
                int first = stk.top();
                stk.pop();
                stk.push(first * second);
            }
            else if (tokens[i].compare("/") == 0){
                int second = stk.top();
                stk.pop();
                int first = stk.top();
                stk.pop();
                stk.push(first / second);
            }
            else {
                stk.push(stoi(tokens[i]));
            }
        }
        return stk.top();
    }
};