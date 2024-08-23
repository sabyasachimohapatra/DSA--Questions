class Solution{
public:
        void insertAtBottom(stack<int> &s, int element) {
            if (s.empty()) {
                s.push(element);
                return;
            }
            
            int top = s.top();
            s.pop();
            
            insertAtBottom(s, element);
            
            s.push(top);
        }
       
    void Reverse(stack<int> &s){
    if (s.empty()) {
        return;
    }
    
    int top = s.top();
    s.pop();
    Reverse(s);
    insertAtBottom(s, top);
    }
};
