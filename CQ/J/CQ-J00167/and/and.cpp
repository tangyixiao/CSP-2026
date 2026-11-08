#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int maxn=2e6;
int n,m,p;
ll a[maxn],ans,maxa;
string s[maxn],t;
string f(int a)
{
	t="";
	while(a)
		t+=char(a%2+'0'),a/=2;
	return t;
}//µ¹×Å´æ 
vector<int>v[35];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		s[i]=f(a[i]);
//		cout<<s[i]<<' ';
	} 
	if(m==1)
	{
		for(int i=0;i<n;i++ ) maxa=max(maxa,a[i]);
		cout<<maxa;
		return 0;
	}
	if(m==n){
		ans=a[0];
		for(int i=1;i<n;i++ ) ans&=a[i];
		cout<<ans;
		return 0;
	}
	if(m==2)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if((a[i]&a[j])>maxa) maxa=(a[i]&a[j]);
			}
		}
		cout<<maxa;
		return 0;
	}
	for(int i=0;i<n;i++)
		for(int j=0;j<s[i].size();j++)
			if(s[i][j]=='1') v[j].push_back(a[i]);
//	for(int i=0;i<=30;i++)
//		cout<<v[i].size()<<' ';
	for(p=29;p>=0;p--)
		if(v[p].size()>=m) break;
	ans=v[p][0];
	for(int i=1;i<v[p].size();i++) ans&=v[p][i];
	cout<<ans;
	return 0;
}
//4 2
//3 15 12 12

//5 3
//31 3 1 15 7
