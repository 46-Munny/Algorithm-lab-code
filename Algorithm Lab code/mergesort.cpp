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
        cout<<"\t"<<id;
        cout<<"\t"<<name;
        cout<<"\t"<<credit;
        cout<<"\t"<<cgpa;
        cout<<endl;
    }
    };
    void merge1(student a[],int p,int q,int r)
    {
        student l[100],rr[100];
        int n1,n2;
        n1=q-p+1;
        n2=r-q;
        int i,j,k;
        for(i=1;i<=n1;i++)
        {
            l[i]=a[p+i-1];
        }
        for(i=1;i<=n2;i++)
        {
            rr[i]=a[q+i];
        }
        l[n1+1].credit=-123456;
        rr[n2+1].credit=-123456;
        i=1;
        j=1;
        for(k=p;k<=r;k++)
        {
            if(l[i].credit==rr[j].credit)
            {
                if(l[i].cgpa>rr[j].cgpa)
                {
               a[k]=l[i];
               i++;
                }

            else
             {
               a[k]=rr[j];
               j++;
            }
            }
            else if(l[i].credit>rr[j].credit)
            {
               a[k]=l[i];
               i++;
            }
            else
             {
               a[k]=rr[j];
               j++;
            }
        }
    }
 void  mergesort(student a[],int p,int r)
 {
     int q;
     if(p<r)
     {
         q=(p+r)/2;
         mergesort(a,p,q);
         mergesort(a,q+1,r);
         merge1(a,p,q,r);
     }
 }
int main()
{
    student s[50];
    int n,i;
    cout<<"\nEnter no of student:";
    cin>>n;
    cout<<"\nEnter information about student\n";
    for(i=1;i<=n;i++)
    {
        s[i].getinput();
    }
    mergesort(s,1,n);
    for(i=1;i<=n;i++)
    {
        s[i].getoutput();
    }
}
