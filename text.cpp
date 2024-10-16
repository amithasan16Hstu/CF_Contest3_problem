#include<bits/stdc++.h>
using namespace std;

class ECE{
private:
int sid;
public:
~ECE()
{
   cout<<"Relase Resource"<<endl;
}
ECE(){sid=2202199;}
ECE(int id){sid=id;}
int getID(){return sid;}
};

int main()
{
   ECE student1, student2(2202100);
   cout<<student1.getID()<<endl;
   cout<<student2.getID()<<endl;
}