class Solution {
public:
    bool isValidSerialization(string preorder) {
        int n=1;
        int i=0;
        
        
        while(i<preorder.length()){
            int l=1;
            string s="";
            while((l+i)<preorder.length() && preorder[l+i]!=','){
                l++;
            }
            s=preorder.substr(i,l);
            if(s!="#"){
                n+=2;
            }
            
           n--;
           i+=l+1;
           if(n<=0 && i<preorder.length()){
              return false;
           }
        }
        
        if(n==0)
            return true;
        
        return false;
    }
};
