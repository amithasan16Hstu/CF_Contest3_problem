#include<bits/stdc++.h>
using namespace std;
int main()
{
   double a,b;
   cin>>a>>b;
   double f1=(a/b);
   //cout<<f1<<endl;
   //int f2=a/b;
   cout<<"floor "<<a<<" / "<<b<<" = "<<floor(f1)<<endl;
   cout<<"ceil "<<a<<" / "<<b<<" = "<<ceil(f1)<<endl;
   cout<<"round "<<a<<" / "<<b<<" = "<<round(f1)<<endl;

}