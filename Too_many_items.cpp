#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      int n;
      cin>>n;
      int k=n/10;
      if(n%10!=0)
      k=k+1;

      cout<<k<<endl;
   }
}