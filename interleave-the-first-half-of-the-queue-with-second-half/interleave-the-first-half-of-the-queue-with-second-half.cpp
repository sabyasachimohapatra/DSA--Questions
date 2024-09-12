class Solution{
public:
    vector<int> rearrangeQueue(queue<int> &q1){
        vector<int> ans;
        queue<int> q2;
        int n = q1.size();
        int half = n/2;
        
        while(half--){
            int element = q1.front();
            q1.pop();
            q2.push(element);
            
        }
        
        int size = q2.size();
        while(size--){
            ans.push_back(q2.front());
            q2.pop();
            ans.push_back(q1.front());
            q1.pop();
        }
        return ans;
    }
};
