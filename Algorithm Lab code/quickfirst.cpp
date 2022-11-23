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
int partitionn(student a[],int p,int r)
{
    student x;
    student temp;
    int i,j;
    x=a[p];
    i=p+1;
    for(j=p+1;j<=r;j++)
    {
        if(a[j].cgpa<=x.cgpa)
        {
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
            i++;
        }

    }
    temp=a[i-1];
    a[i-1]=a[p];
    a[p]=temp;
    return i;

}
void quicksortfirst(student a[],int p,int r)
{
    int q;
    if(p<r)
    {
        q=partitionn(a,p,r);
       quicksortfirst(a,p,q-1);
       quicksortfirst(a,q+1,r);
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
    quicksortfirst(s,1,n);
     for(i=1;i<=n;i++)
    {
        s[i].getoutput();
    }
    return 0;
}

