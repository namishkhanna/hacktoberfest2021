#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Node
{
public:
    int data;
    vector<Node *> children;

    Node(int data)
    {
        this->data = data;
    }

    ~Node()
    {
        int size = children.size();
        for (int index = 0; index < size; index++)
        {
            delete children[index];
        }
    }
};

Node *takeInput()
{
    int size;

    cin >> size;

    int *input = new int[size];

    for (int index = 0; index < size; index++)
    {
        cin >> input[index];
    }

    Node *root = NULL;

    stack<Node *> nodes;

    for (int index = 0; index < size; index++)
    {
        if (input[index] == -1)
        {
            nodes.pop();
        }

        else
        {
            Node *newNode = new Node(input[index]);

            if (nodes.size() == 0)
            {
                root = newNode;
            }

            else
            {
                nodes.top()->children.push_back(newNode);
            }
            nodes.push(newNode);
        }
    }

    return root;
}
bool areSame(Node* root1 , Node* root2)
{
    for (int i=0 ; i<root2->children.size() ; i++)
    {
        int size = root2->children.size();
        if (root1->children.size()==root2->children.size())
        {
            bool ans=areSame(root1->children[i],root2->children[size - 1 - i]);
            
            if (!ans)
            {
                return false;
            }
        }
        else
        {
            return false;
        }        
        
    }
    return true;
}

int main()
{
    Node* root1 = takeInput();
    Node* root2 = takeInput();
    
    bool ans = areSame(root1,root2); 
    cout<<boolalpha<<ans;
    
}