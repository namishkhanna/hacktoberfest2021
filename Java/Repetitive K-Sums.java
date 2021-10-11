import java.io.*;
import java.util.*;
public class Solution {
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner x=new Scanner(System.in);        
        Long seq=x.nextLong();
        
        for(long m=0;m<seq;m++) {
            long n=x.nextLong();
            long k=x.nextLong();
            
            ArrayList<Long> kSums = new ArrayList<Long>();
            long lst1=1;
            if(n-1>=k) {
                for(long i=n+k-1;i>n-1;i--){
                    lst1*=i;}
                for(long i=k;i>1;i--){
                    lst1/=i;}
            } else {
                for(long i=n+k-1;i>k;i--){
                    lst1*=i;}
                for(long i=n-1;i>1;i--){
                    lst1/=i;}
            }
            
            for(long i=0;i<lst1;i++){
                kSums.add(x.nextLong());
            }
            
            kSums.sort(null);
            
            ArrayList<Long> lst2=new ArrayList<Long>();
            
            lst2.add(kSums.get(0)/k);
            
            if(n>2){
                for(int i=1;i<kSums.size();i++) {
                    if (kSums.get(i) != kSums.get(0)) {
                        lst2.add(kSums.get(i) - ((kSums.get(0)/k)*(k-1)));
                        break;}
                }
            }
            
            ArrayList<Long> lst3=new ArrayList<Long>();
            getKSum(lst2, k, 0, 0, lst3);
            while (lst3.size()!=lst1) {
                ArrayList<Long> list4 = (ArrayList<Long>) kSums.clone();
                for(long i : list4) {
                    if (!lst3.remove((Long) i)) {
                        lst2.add(i - lst2.get(0) * (k - 1));
                        lst3.clear();
                        getKSum(lst2, k, 0, 0, lst3);
                        break;}
                }
                
                
            }
            
            lst2.sort(null);
            for(long i : lst2) {
                System.out.print(i + " ");}
            System.out.println();
        }
        x.close();
    }
    
    private static void getKSum(ArrayList<Long> l, long k, int i, long s, ArrayList<Long> r){
        for(; i<l.size();i++) {
            if (k==1) {
                r.add(s + l.get(i));}
            else{
                getKSum(l,k-1,i,s+l.get(i), r);}}
    }
}
