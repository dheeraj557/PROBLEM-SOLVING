class Solution {
public:
    Node* connect(Node* root) {
        if (!root)
            return root;
        queue<Node*> q;
        q.push(root);
        while (!q.empty()) {
            int size = q.size();
            Node* last = NULL;
            for (int i = 0; i < size; i++) {
                Node* cus = q.front();
                q.pop();
                if (cus->left)
                    q.push(cus->left);
                if (cus->right)
                    q.push(cus->right);
                if (last)
                    last->next = cus;
                last = cus;
            }
        }
        return root;
    }
};