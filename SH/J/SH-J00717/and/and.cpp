#include<bits/stdc++.h> 
using namespace std;
//vector<long long> syq[31];
int m,n,arr[200010];
int dfs(int i,int num)
{
	if(num>=m) return 17179869183;
	if(i>=n)
	{
		if(num+n-i>=m) return 17179869183;
		else return arr[i];
	}
	if(num+n-i>=m) return max(dfs(i+1,num),dfs(i+1,num+1)&arr[i]);
	else return dfs(i+1,num+1)&arr[i];
}
int main()
{
	freopen("and.in",r,stdin);
	freopen("and.out",w,stdout);
	/*int n,m; scanf("%d %d",&n,&m); long long ans=0;
	int f=0;
	for(int i=1;i<=n;i++)
	{
		int y; scanf("%d",&y);
		int x=y,k=0,maxk=0;
		while(x)
		{
			k++;
			if(x%2==1) syq[k].push_back(y); 
			x/=2;
			maxk=max(maxk,k);
		}
		for(int j=maxk;j>=1;j--)
		{
			sort(syq[j].begin(),syq[j].end());
		}
		for(int j=maxk;j>=1;j--)
		{
			if(syq[j].size()>=m)
			{
				int f=j;
				break;	
			}
		}
		for(int j=f-1;j>=1;j--)
		{
			if(syq[j].size()>=m)
			{
				int hjl=0;
				for(int k=0;k<=syq[f].size();k++)
				{
					if(lower_bound(syq[j].begin(),syq[j].end(),syq[f][k])!=syq[j].end())
					{
						hjl++;
					}
				}
				if(hjl>m)
				{
					for(int k=0;k<=syq[f].size();k++)
					{
						if(lower_bound(syq[j].begin(),syq[j].end(),syq[f][k])==syq[j].end())
						{
							syq[f][k]=1073741823;
						}
					}
				}
				else if(hjl==m)
				{
					ans=syq[f][0];
					for(int k=0;k<=syq[f].size();k++)
					{
						if(lower_bound(syq[j].begin(),syq[j].end(),syq[f][k])==syq[j].end())
						{
							syq[f][k]=1073741823;
						}
						ans&=syq[f][k];
					}
					printf("%d",ans);
					return 0;
				}
			}
		}
	}
	ans=syq[f][0];
	for(int k=0;k<=syq[f].size();k++)
	{
		ans&=syq[f][k];
	}
	printf("%d",ans);
	*/ 
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>arr[i];
	cout<<dfs(1,0); 
	return 0;
}
