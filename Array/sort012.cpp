lass Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        //  0 00 l-1   l 111 m-1  m 21210  h+1    2222  n-1
       int low=0;
       int mid=0;
       int high=n-1;
       while(mid<=high){
           if(a[mid]==0){
               swap(a[low],a[mid]);
               low++;
               mid++;
               
           }
           else if(a[mid]==1){
               mid++;
           }
           else{
               swap(a[mid],a[high]);
               high--;
           }
       }
        
    }
    
};
