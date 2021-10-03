class Solution
{
public:
vector<int> ret;
bool helper(Node *root,int key){
if(!root)
return false;
if(root->data == key)
return true;
bool a = helper(root->left,key);
bool b = helper(root->right,key);
if(a or b)
ret.push_back(root->data);
return a or b;
}
vector<int> Ancestors(struct Node *root, int target)
{

helper(root,target);
return ret;
}
};
