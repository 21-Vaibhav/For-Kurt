class Solution
{
    public:
    void sort012(int a[], int n)
    {
      int p,q,r;
      int count0=0;
      int count1=0;
      int count2=0;
      
      for(int i=0;i<n;i++)
      {
          if(a[i]==0)
          count0++;
         
          if(a[i]==1)
          count1++;
          
          if(a[i]==2)
          count2++;
          
          
      }
      
       p=count0;
       q=count0+count1;
       r=count0+count1+count2;
      
     for(int i=0;i<p;i++)
     a[i]=0;
     
     for(int i=p;i<q;i++)
     a[i]=1;
     
     for(int i=q;i<r;i++)
     a[i]=2;
     
     
     
    }


    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

