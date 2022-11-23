#include<iostream>
using namespace std;
void Merge(int A[],int p, int q,int r)
{

	int n1,n2,i,j,k;
	n1=q-p+1;
	n2=r-q;
	int L[n1+1],R[n2+1];
	for(i=1;i<=n1;i++)
	{
		L[i]=A[p+i-1];
	}
	for(j=1;j<=n2;j++)
	{
		R[j]=A[q+j];
	}
	L[n1+1]=6477375;
	R[n2+1]=2364666;
	i=1,j=1;
	for(k=p;k<=r;k++)
	{
		if(L[i]<R[j])
		{
			A[k]=L[i];
			i++;
		}
		else
		{
			A[k]=R[j];
			j++;
		}
	}
}
void MergeSort(int a[],int p,int r)
{
    if(p<r)
    {
        int q,s;
        q=(r+2*p)/3;
        s=(2*r+p)/3;
        MergeSort(a,p,q);
        MergeSort(a,q+1,s);
        MergeSort(a,s+1,r);
        Merge(a,p,q,s);
        Merge(a,p,s,r);
    }
}
int main()
{
    int n,a[20],i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    MergeSort(a,1,n);
    for(i=1;i<=n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
