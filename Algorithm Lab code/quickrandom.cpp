#include <cstdlib>
#include<iostream>
using namespace std;
class student
{
public:
    int id;
    string name;
    float cgpa;
    string phno;
    void getinput()
    {
        cin>>id>>name>>cgpa>>phno;
    }
    void getoutput()
    {
        cout<<"\t\t"<<id;
        cout<<"\t\t"<<name;
        cout<<"\t\t"<<cgpa;
        cout<<"\t\t"<<phno;
        cout<<"\n";
    }
};
int partition3(student a[],int p,int r)
{
    student x;
    student temp;
    int random;
    random = p + rand() % (r - p);
    swap(a[random],a[r]);
    int i,j;
    x=a[r];
    i=p-1;
    for(j=p;j<=r-1;j++)
    {
        if(a[j].cgpa<=x.cgpa)
        {
            i=i+1;
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }

    }
    temp=a[r];
    a[r]=a[i+1];
    a[i+1]=temp;
    return i+1;

}
void quicksortrandom(student a[],int p,int r)
{
    int q;
    if(p<r)
    {
        q=partition3(a,p,r);
       quicksortrandom(a,p,q-1);
       quicksortrandom(a,q+1,r);
    }
}
int main()
{
  student s[100];
  int n,i;
  cout<<"\nEnter the no of student:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        s[i].getinput();
    }
    quicksortrandom(s,1,n);
     for(i=1;i<=n;i++)
    {
        s[i].getoutput();
    }
    return 0;
}
