#include <iostream>
using namespace std;

int h,q,k,j,m,year;
    string day;

string searchDay(int q, int m, int year){
    if (m == 1)
    {
        m=13;
       year-=1;
    }else if (m==2)
    {
        m=14;
       year-=1;
    }
    
    k = year % 100;
    j = year /100;
    
    cout<<k<<j<<" ";
    h = (q+(13*(m+1)/5)+k+(k/4)+(j/4)-(2*j)) % 7;
    cout<<" h = "<<h<<endl;
    switch (h)
    {
    case 0:
        day = "saturday";
        break;
    case 1:
        day = "sunday";
        break;
    case 2:
        day = "monday";
        break;
    case 3:
        day = "tuesday";
        break;
    case 4:
        day = "wednesday";
        break;
    case 5:
        day = "thursday";
        break;
    case 6:
        day = "friday";
        break;
    default:
        break;
    }
    
    return day;
}

int main(){

    // rumus
    cout<<"date : ";cin>>q;
    cout<<"month :";cin>>m;
    cout<<"year :";cin>>year;
    cout<<endl;
    cout<<q<<"/"<<m<<"/"<<year<<"  =  "<<searchDay(q,m,year);
    cout<<endl;
}