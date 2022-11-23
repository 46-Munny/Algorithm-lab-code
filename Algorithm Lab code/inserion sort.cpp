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
void insertionsort(student s[50],int n)

{
int i,j,keyc,idd;
string nam;
float cg;
for(j=1;j<n;j++)
{
    keyc=s[j].credit;
    nam=s[j].name;
    idd=s[j].id;
    cg=s[j].cgpa;
    i=j-1;
    while(i>=0&&s[i].credit<=keyc)

    {
        if(s[i].credit==keyc)
        {
            if(s[i].cgpa<cg)
            {
        s[i+1].id=s[i].id;
        s[i+1].name=s[i].name;
        s[i+1].credit=s[i].credit;
        s[i+1].cgpa=s[i].cgpa;
        }
        }
        s[i+1].id=s[i].id;
        s[i+1].name=s[i].name;
        s[i+1].credit=s[i].credit;
        s[i+1].cgpa=s[i].cgpa;
        i=i-1;

    }

        s[i+1].credit=keyc;
        s[i+1].name=nam;
        s[i+1].id=idd;
        s[i+1].cgpa=cg;

}
}
int main()
{
    student s[50];
    int n,i;
    cout<<"\nEnter no of student:";
    cin>>n;
    cout<<"\nEnter information about student\n";
    for(i=0;i<n;i++)
    {
        s[i].getinput();
    }
    insertionsort(s,n);
    for(i=0;i<n;i++)
    {
        s[i].getoutput();
    }
}
