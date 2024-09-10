class Solution
{
    public:
    queue<int> rev(queue<int> q)
    {
        // add code here.
         stack<int> s;
        
        // Push all elements of queue to stack
        while (!q.empty()) {
            s.push(q.front());
            q.pop();
        }
        
        // Push all elements from stack back to queue
        while (!s.empty()) {
            q.push(s.top());
            s.pop();
        }
        
        return q;
    }
};
