class Solution {
  public:
    // Function which returns the  root of the flattened linked list.
    Node* merge(Node* a,Node* b){
        if(!a) return b;
        if(!b) return a;
        
        Node* ans=0;
        if(a->data < b->data){
            ans=a;
            a->bottom=merge(a->bottom,b);
        }
        else{
            ans=b;
            b->bottom=merge(a,b->bottom);
        }
        return ans;
    }
    Node *flatten(Node *root) {
        // Your code here
        if(!root) return NULL;
        return merge(root,flatten(root->next));
    }
};
