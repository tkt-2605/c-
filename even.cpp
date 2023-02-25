#include<iostream>
using namespace std;
int main(){
int a,i;
cout<<"enter a integer"<<endl;
cin >> a;
for(i=0;i<=a;i++)
{
  if(i%2==0)
      cout<<i<<endl;
   else
      continue;   
}
return 0;
}