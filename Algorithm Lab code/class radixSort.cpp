#include<iostream>
using namespace std;
class student
{
public:
    int id;
    string name;
    int credit;
    float cg;

void input()
{
    cin>>id>>name>>credit>>cg;
}
void output()
{
    cout<<"\t\t"<<id;
     cout<<"\t\t"<<name;
     cout<<"\t\t"<<credit;
      cout<<"\t\t"<<cg;
      cout<<endl;
}
};
void countsort(student a[100],int n,int pos)
{
    int i,j;
    int c[10]={0};
    student b[100];



    cout<<endl;
    for(i=0;i<n;i++)
    {
      c[(a[i].id/pos)%10] =c[(a[i].id/pos)%10]+1;

    }
    /* for(i=0;i<=maxk;i++)
    {

        cout<<"c[]2:"<<c[i]<<" ";
    }*/

     for(i=1;i<=10;i++)
    {
       c[i]=c[i]+c[i-1];

    }

     for(j=n-1;j>=0;j--)
    {
       b[c[(a[j].id/pos)%10]-1]=a[j];
       c[(a[j].id/pos)%10]--;

    }
      for(j=0;j<n;j++)
    {
       a[j]=b[j];
    }


}
void radixsort(student a[100],int n)
{
    int i,j,maxx=0,pos;
    for(i=0;i<n;i++)
    {
        if(a[i].id>maxx)
        {
            maxx=a[i].id;
        }
    }
    for(pos=1;maxx/pos>0;pos=pos*10)
    {
        countsort(a,n,pos);
    }

}
int main()
{

    student s[100];
    int i,j,n;
    cout<<"\nEnter no of students:";
    cin>>n;
    cout<<"\nEnter student information:";
    for(i=0;i<n;i++)
    {
        s[i].input();
    }

    radixsort(s,n);
     for(i=0;i<n;i++)
    {
        s[i].output();
    }


}

