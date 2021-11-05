
// valid pair sum geeks for geeks

long long ValidPair(int a[], int n) 
    { 
        sort(a,a+n);
        long long count=0;
        for(long long i=0;i<n;i++){
                int ele=a[i];
                int low=i+1,high=n-1;
                while(low<=high){
                    int mid=low+(high-low)/2;
                    if(ele+a[low]>0){
                        count+=n-low;
                        break;
                    }
                    else if(ele+a[mid]>0){
                       high=mid;
                    }
                    else if(ele+a[mid]<=0){
                        low=mid+1;
                    }
                }
        }
        return count;
    }   


----------------------------------------------------------------------------------x-------------------------------------------------------------------------------
  
  
//   overlapping intervals
  
  vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int l=intervals[0][0],r=intervals[0][1];
        vector<vector<int>> v;
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]<=r){
                r=max(intervals[i][1],r);
            }
            else{
                v.push_back({l,r});
                l=intervals[i][0];
                r=intervals[i][1];
            }
        }
        v.push_back({l,r});
        
        return v;
    }


