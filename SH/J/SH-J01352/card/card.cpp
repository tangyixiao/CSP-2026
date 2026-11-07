#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5,M=3e5+5;
int n,m;
int a[N],flag[M],ans[N];
int model[N];
int find(int x,int l)
{
	for(int i=1; i<=l; i++)
	{
		if(model[i]==x)
		return i;
	}
	return 0;
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	memset(flag,0,sizeof(flag));
	for(int i=1; i<=n; i++)
	{
		cin >> a[i];
	}
//	for(int i=1; i<=n; i++)
//	{
//		cout << a[i];
//	}
	for(int i=1; i<=n; i++)
	{
		int sum=0;
		memset(flag,0,sizeof(flag));
		memset(model,0,sizeof(model));
		for(int j=i; j<=n; j++)
		{
			if(!flag[a[j]])
			{
				sum++;
				model[sum]=a[j];
				flag[a[j]]++;
//				cout << endl;
//				cout << "flag:";
//				for(int k=1; k<=n; k++)
//				{
//					cout << flag[k] << " ";
//				}
			}
			else
			{
				int ii=find(a[j],sum);
//				cout << "find:" << ii;
				int now=sum;
				for(int k=ii; k<=now; k++)
				{
					model[k]=0;
					sum--;
				}
				sum++;
				model[sum]=a[j];
			}
//			cout << "sum:" << sum;
//			cout << endl;
//			for(int k=1; k<=sum; k++)
//			{
//				cout << model[k] << " ";
//			}
//			cout << endl;
		}
		for(int i=1; i<=sum; i++)
		{
			ans[model[i]]++;
		}
//		cout << "end" << endl;
	}
	for(int i=1; i<=m; i++)
	{
		cout << ans[i] << " ";
	}
    return 0;
}
//BABULABIBO
