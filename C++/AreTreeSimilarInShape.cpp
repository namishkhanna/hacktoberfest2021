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
bool similar(Node *root1 , Node *root2)
{
    if(root1->children.size() == root2->children.size())
    {
        for(int idx = 0 ; idx < root1 -> children.size() ; idx ++)
        {   
            bool ans =  similar(root1->children[idx] , root2->children[idx]);     
            if(!ans)
            {
                return false;
            }
        }
 
    }
    else
    {
        return false;
    }
    return true;
   
   
}
int main()
{
    Node *root1 = takeInput();
    Node *root2 = takeInput();
    
    bool ans = similar(root1 , root2);    cout<<boolalpha<<ans;
    
}