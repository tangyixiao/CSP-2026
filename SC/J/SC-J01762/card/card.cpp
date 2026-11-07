#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define ex exit(0)
#define sinzo return
#define code 0
using namespace std;
const int N=2e6+10;
int a[N],la[N],c[N],b[N];
int n,m,k,cnt,mx=-1e18,mn=1e18,sum,ans;
int vis[N],bj[N];
stack<int> s;
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int T=1;
//	cin>>T;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		la[i]=c[a[i]];
		c[a[i]]=i;
	}
	for(int k=1;k<=n;k++)
	{
		for(int i=k;i<=n;i++)
		{
			if(vis[a[i]])
			{
				while(s.top()!=a[i])
				{
					vis[s.top()]=0;
					s.pop();
					
				}
				s.pop();
			}
			s.push(a[i]);
			vis[a[i]]=1;
		}
		while(s.size())
		{
			b[s.top()]++;
			vis[s.top()]=0;
			s.pop();
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<b[i]<<' ';
	}
	cout<<endl;
	sinzo code;
	
}
/*
期望：48 

|  _________________  |    __            |   ____________
| |_______  ________| |   |  |           |  |   _________|
|        |  |         |   |  |           |  |  |
|        |  |         |   |  |           |  |  |
|        |  |         |   |  |           |  |  |_________
|        |  |         |   |  |           |  |   _________|
|        |  |         |   |  |           |  |  |
|        |  |         |   |  |           |  |  |
|        |  |         |   |  |________   |  |  |_________
|        |__|         |   |___________|  |  |____________|   



//	freopen("card5.in","r",stdin);
//	freopen("card.out","w",stdout);

//	freopen("card.in","r",stdin);
//	freopen("card.out","w",stdout);



*/