#include<iostream>
using namespace std;
int main()
{
  int n,i,j,a[100],c=1;
  cout<<"\nEnter the no of element:";
    cin>>n;
    cout<<"\nEnter array elements:";
    for(i=1;i<=n;i++)
    {
       cin>>a[i];
    }
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=n;j++)
       {
           if(i!=j)
           {
              if(a[i]==a[j])
              {
                  c++;
              }
           }
       }
   }
   if(c==1)
    cout<<"All the array elements are unique";
   else
    cout<<"All the array elements are not unique";
    return 0;
}
