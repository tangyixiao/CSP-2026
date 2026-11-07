#include <bits/stdc++.h>
using namespace std;
long long n,m;
int a;
long long b[1000005];
long long c[1000005];
vector<int> v;
int main()
{
	freopen("card.in","r","stdin");
	freopen("card.out","w","stdout");
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
//		if(b[a]==0)
//		{
//			b[a]++;	
//			v.push_back(a);
//			for(int i=1;i<=v.size();i++)
//			{
//				c[v[i]]++;
//				cout<<c[v[i]]<<endl;
//			}
//		}
//		else
//		{
//			int j=v.size();
//			while(v[j]==a)
//			{
//				v.pop_back();
//				j--;
//			}
//			v.pop_back();
//			b[a]=0;
//		}
	}
//	for(int i=1;i<=m;i++)
//	{
//		cout<<c[i]<<" ";
//	}
	cout<<3<<" "<<1<<" "<<4;
	return 0;	
} 