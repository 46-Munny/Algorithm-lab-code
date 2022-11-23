 #include<iostream>
 #include<stdlib.h>
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
int partitionn(student a[100],int p,int r)
{
    student x,tmp;
    int i,j,random;
    random=p+rand()%(r-p);
    swap(a[r],a[random]);
    x=a[r];
    i=p-1;
    for(j=p;j<=r-1;j++)
    {
        if(a[j].cgpa>=x.cgpa)
        {
            i=i+1;
            tmp=a[j];
            a[j]=a[i];
             a[i]= tmp;

        }
    }
    tmp=a[r];
    a[r]=a[i+1];
    a[i+1]=tmp;
    return i+1;
}
void quicksort(student a[100],int p,int r)
{
    int q;
    if(p<r)
    {
      q=partitionn(a,p,r);
      quicksort(a,p,q-1);
      quicksort(a,q+1,r);
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
    quicksort(s,1,n);
     for(i=1;i<=n;i++)
    {
        s[i].getoutput();
    }
    return 0;
}

