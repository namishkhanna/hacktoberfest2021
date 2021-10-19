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
int diameter = 0;
int dia(Node *root)
{
    int size = root ->children.size();
    int h1 = 0 , h2 = 0;
    for(int idx = 0 ; idx < size ; idx++)
    {
        int currHeight = dia(root ->children[idx]);
        if(currHeight > h1)
        {
            h2 = h1;
            h1 = currHeight;
        }
        else if(currHeight > h2)
        {
            h2 = currHeight;
        }
    }
    if(h1 + h2  > diameter)
    {
       diameter = h1 + h2 ;
    }
    return h1 + 1;
}

int main()
{
    Node * root = takeInput();
    dia(root);
    cout<<diameter;
}