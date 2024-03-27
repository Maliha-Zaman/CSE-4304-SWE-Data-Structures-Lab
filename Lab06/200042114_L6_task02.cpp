
#include<bits/stdc++.h>

using namespace std;

class BST {

    struct node {
        int val;
        node* left;
        node* right;
    };

    node* root;

    node* bstInsert(int x, node* t)
    {
        if(t == NULL)
        {
            t = new node;
            t->val = x;
            t->left = t->right = NULL;
        }
        else if(x < t->val && (((t->val) - x) > 3))
        {
            t->left = bstInsert(x, t->left);
        }
        else if(x > t->val && ((x-(t->val)) > 3))
        {
            t->right = bstInsert(x, t->right);
        }
        return t;
    }


    void inorder(node* t)
    {
        if(t == NULL)
        {
            return;
        }
        inorder(t->left);
        cout << t->val << " ";
        inorder(t->right);
    }

    int maxDepth(node* t)
    {
        if (t == NULL)
        {
            return 0;
        }
        else
        {

            int lDepth = maxDepth(t->left);
            int rDepth = maxDepth(t->right);


            if (lDepth > rDepth)
            {
                return (lDepth + 1);
            }
            else
            {
                return (rDepth + 1);
            }
        }
    }

    void printLevelOrder(node* t)
    {
        int h = maxDepth(t);
        for (int i = 1; i <= h; i++)
        {
            printCurrentLevel(t, i);
        }
    }

    /* Print nodes at a current level */
    void printCurrentLevel(node* t, int level)
    {
        if (t == NULL)
        {
            return;
        }
        if (level == 1)
        {
            cout << t->val << " ";
        }
        else if (level > 1)
        {
            printCurrentLevel(t->left, level - 1);
            printCurrentLevel(t->right, level - 1);
        }
    }


public:
    BST() {
        root = NULL;
    }

    void bstInsert(int x) {
        root = bstInsert(x, root);
    }

    void display() {
        printLevelOrder(root);
        cout << endl;
    }

};


int main()
{

    BST airport;

    while(true){
        int x;
        cin>>x;
        if(x == -1){
            break;
        }
        airport.bstInsert(x);
    }
    airport.display();
    return 0;
}
