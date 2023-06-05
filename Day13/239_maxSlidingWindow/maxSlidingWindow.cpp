class Solution {
private:
    class MyQueue {
        public:
            deque<int> que;

            void pop(int x){
                if (!que.empty() && x == que.front()){
                    que.pop_front();
                }
            }

            void push(int x){
                while(!que.empty() && x > que.back()){
                    que.pop_back();
                }
                que.push_back(x);
            }

            int front() {
                return que.front();
            }
    };
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        MyQueue que;
        vector<int> result;
        for (int i = 0; i < k; i++){
            que.push(nums[i]);
        }
        result.push_back(que.front());
        for (int i = k; i < nums.size();i++){
            que.pop(nums[i - k]);
            que.push(nums[i]);
            result.push_back(que.front());
        }
        return result;
    }
};