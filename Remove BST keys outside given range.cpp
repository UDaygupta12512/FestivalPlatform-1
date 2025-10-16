class Solution {
  public:
    Node* removekeys(Node* root, int l, int r) {
        // code here
        if(root){
        
            if(root->data < l)
            {
                return removekeys(root->right, l, r);
            }
            if(root->data > r)
            {
                return removekeys(root->left, l, r);
            }
            
            root->right = removekeys(root->right, l, r);
            root->left = removekeys(root->left, l, r);
            
            return root;
        }
        else
            return NULL;
    }
};
