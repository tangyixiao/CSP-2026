#include<bits/stdc++.h>
using namespace std;
const int maxn=100010;
string a1,a2,b1,b2;
signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin>>a1>>a2>>b1>>b2;
	if(a1==b1) cout<<"1";
	else
	{
		cout<<"0000";
		return 0;
	}
	if(a2[0]==b2[0]&&a2[1]==b2[1]) cout<<"1";
	else 
	{
		cout<<"000";
		return 0;
	}
	if((a2[2]<='C'&&b2[2]<='C')||(a2[2]>'C'&&b2[2]>'C')) cout<<"1";
	else 
	{
		cout<<"00";
		return 0;
	}
	if(abs(a2[2]-b2[2])==1) cout<<"1";
	else cout<<"0";
	return 0;
}
/*
我说T1就得用字典树做
#include<bits/stdc++.h>
using namespace std;
string a1,a2,b1,b2;
int tot;
int trie1[10][10],son1[10];
int trie2[10][20],son2[10];
void build1(string a)
{
	int l=(int)a.size(),id=0;
	tot=0;
	for(int i=0;i<l;i++)
	{
		int u=a[i]-'0';
		if(trie1[id][u]==0) trie1[id][u]=++tot;
		son1[trie1[id][u]]++;
		id=trie1[id][u];
	}
}
void build2(string a)
{
	int l=(int)a.size(),id=0;
	tot=0;
	for(int i=0;i<l;i++)
	{
		int u=(a[i]>='0'&&a[i]<='9')?a[i]-'0':11+a[i]-'A';
		if(trie2[id][u]==0) trie2[id][u]=++tot;
		son2[trie2[id][u]]++;
		id=trie2[id][u];
	}
}
int query1(string a)
{
	int l=(int)a.size(),id=0;
	for(int i=0;i<l;i++)
	{
		int u=a[i]-'0'; 
		id=trie1[id][u];
	}
	return son1[id];
}
int query2(string a,int l)
{
	int id=0;
	for(int i=0;i<l;i++)
	{
		int u=a[i]-'0'; 
		id=trie2[id][u];
	}
	return son2[id];
}
signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin>>a1>>a2>>b1>>b2;
	build1(a1); build1(b1);
	build2(b1); build2(b2);
	
	此段自行脑补
	
	return 0;
}
想上奇葩代码大赏
*/