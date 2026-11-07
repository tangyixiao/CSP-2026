#include<bits/stdc++.h>
using namespace std;

int a[100005],num[100005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int mi=0;
	while(mi<n)
	{
		
		int left=mi,right=left+1;
		while(right<n)
		{
			//if(right==n-1&&left!=right-1)
			//{
		///		left+=1;
			//}
			if(a[left]==a[right])
			{
				left=right;
				right+=1;
			}
			else{
				right+=1;
			}
		}
		for(int i=left;i<right;i++)
		{
			num[a[i]]+=1;
		//	cout<<a[i]<<"number"<<num[a[i]]<<" ";
		}
		//cout<<endl;
		mi+=1;
		
	}
	for(int i=1;i<=n-1;i++)
	{
		cout<<num[i]<<" ";
	}
	return 0;
}
