class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        // copy linked list in vector
        vector<int>arr;
        ListNode*temp=head;
        int n=0;
        while(temp){
            arr.push_back(temp->val);
            temp=temp->next;
            n++;
        }
        // paste Next Greater Element in stack
        vector<int>ans(n);
        stack<int>st;
        ans[n-1]=0;
        st.push(arr[n-1]);
        for(int i=n-2; i>=0; i--){
            while(st.size()>0 && st.top()<=arr[i]){
                st.pop();
            }
            if(st.size()==0) ans[i]=0;
            else ans[i]=st.top();
            st.push(arr[i]);
        }
        return ans;
    }
};
