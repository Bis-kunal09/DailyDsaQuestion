// { Driver Code Starts
//Initial Template for C++

// C++ program to check if n is sparse or not
#include<iostream>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
     bool isSparse(int n)
    {
            if(n==0) return 1;
            // Your code
            // while(n!=0)
            
            // bool falg=true;
            // if condtion me dhek rhe hai ki h=agar last bit set hai to jab n ko change kare se n>>1 means now second last bit become last bit wo bhi set na ho : hai to return false 
            //we have to check only set bit therofore har baar n ko //change (n>>1)
            while(n!=0)
            {
           if( n&1==1)
           {
               n=n>>1;
               if(n&1==1)
               {
                   return false;
               }
               
           }
    n=n>>1;
       
    }
    return true;
    }
};

// { Driver Code Starts.

// Driver Code
int main()
{
    int t,n;
    
    //testcases
    cin>>t;
    while(t--)
    {
        //initializing n
        cin>>n;
        
        //printing 1 if isSparse() returns true
        //else 0
        Solution ob;
        if(ob.isSparse(n)){
            cout << "1" << endl;
        }
        else cout << "0" << endl;
        
    }
    return 0;
}
  // } Driver Code Ends