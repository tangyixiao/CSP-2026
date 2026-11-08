#include<iostream>
using namespace std;
int A[5000];
int B[5000][3000];
int C[3000];
int D[3000];
int E[5000];
int main()
{
	int n,m,k,v;
	cin>>n>>m;

    for(int i=0;i<n;i++)
    {
		cin>>A[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			for(int l=0;l<k;l++)
			{
				if(C[l]==A[j]){
					k=l;
					break;
				}
			}
			C[k]=A[j];
			k++;
		}
		for(int j=0;j<k;j++)
		{
			B[i][j]=C[j];
		}
		E[i]=k;
		k=0;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<E[i];j++)
		{
			D[B[i][j]]+=1;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<D[i]<<' ';
	}
	return 0;
}
