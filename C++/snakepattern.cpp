#include<iostream>
#include<vector>
using namespace std;
vector<int> snakePattern(int matrix[][3],int n,int m)
    {  
       vector<int> snake;
       int strtrow=0;
       int endrow=n-1;
       int strtcol=0;
       int endcol=m-1;
      // cout<<strtrow<<" "<<endrow<<" ";
       //cout<<strtcol<<" "<<endcol<<" ";
       while(strtrow<=endrow ){
           for(int col=strtcol;col<=endcol;col++){
               snake.push_back(matrix[strtrow][col]);
           }
           strtrow++;
           if(strtrow>endrow)
           break;
           for(int col=endcol;col>=strtcol;col--){
               snake.push_back(matrix[strtrow][col]);
           }
           strtrow++;
       }
       return snake;
    }

int main(){
    int matrix[4][3]={
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10,11,12}
    };
    vector<int> vect= snakePattern(matrix,4,3);
    for(int i=0;i<vect.size();i++){
        cout<<vect[i]<<" ";
    }
}