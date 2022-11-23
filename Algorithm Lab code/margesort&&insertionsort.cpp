#include<iostream>
using namespace std;
class student
{
public:
    int id;
    string name;
    int credit;
    float cgpa;
    void getinput()
    {
        cin>>id>>name>>credit>>cgpa;
    }
    void getoutput()
    {
        cout<<"\t\t"<<id;
        cout<<"\t\t"<<name;
        cout<<"\t\t"<<credit;
        cout<<"\t\t"<<cgpa;
        cout<<"\n";
    }
};
void mergee(student a[],int p,int q,int r)
{
    int n1,n2,i,j,k;
    student l[100];
    student R[100];
    n1=q-p+1;
    n2=r-q;
    for(i=1;i<=n1;i++)
    {
        l[i]=a[p+i-1];
    }
    for(j=1;j<=n2;j++)
    {
        R[j]=a[q+j];
    }
    l[n1+1].credit=-12345;
    R[n2+1].credit=-12345;
    i=1;
    j=1;
    for(k=p;k<=r;k++)
    {
        if(l[i].credit==R[j].credit)
        {
            if(l[i].cgpa>R[j].cgpa)
            {

            a[k]=l[i];
            i++;
            }
          else
           {
            a[k]=R[j];
            j++;
           }
        }

        else if(l[i].credit>R[j].credit)
        {

            a[k]=l[i];
            i++;
        }
        else
        {
            a[k]=R[j];
            j++;
        }
    }

}
void mergesort(student a[],int p,int r)
{
    int q;
    if(p<r)
    {
        q=(p+r)/2;
        mergesort(a,p,q);
        mergesort(a,q+1,r);
        mergee(a,p,q,r);

    }
}
void insertionsort(student a[],int n)
{
    int i,j;
    student key;
    for(j=2;j<=n;j++)
    {
        key=a[j];
        i=j-1;
        while(i>0&&a[i].credit<=key.credit)
        {
            if(a[i].credit==key.credit)
            {
                if(a[i].cgpa<key.cgpa)
                {
                    a[i+1]=a[i];
                }
            }
            a[i+1]=a[i];
            i=i-1;
        }
        a[i+1]=key;
    }
}
int main()
{
  student s[100];
  int n,i,choice;

  cout<<"\nEnter the no of student:";
    cin>>n;
    cout<<"\nStudent information\n";
    for(i=1;i<=n;i++)
    {
        s[i].getinput();
    }
    cout<<"\nPress 1 for insertion sort";
    cout<<"\nPress 2 for merge sort";
    cout<<"\nPress 3 for exit";

    while(1)
    {
        cout<<"\nEnter your choice:";
        cin>>choice;

    if(choice==1)
    {
        insertionsort(s,n);
    }
    else if(choice==2)
    {
    mergesort(s,1,n);
    }
    else if(choice==3)
    {
        break;
    }
    cout<<"\nSorted list\n";
     for(i=1;i<=n;i++)
    {
        s[i].getoutput();
    }
  }
    return 0;
}
