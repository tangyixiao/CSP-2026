#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int t;
const int N=2e5+5;
int a[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	cin>>t;
	int type;
	set<string> st;
	string s="";
	for(int i=1;i<=t;i++)
	{
		string tt;
		cin>>a[i]>>tt;
		for(int i=1;i<=a[i];i++)
		{
			s+=tt;
		}
		st.insert(tt);
	}
	if(st.size()==1)
	{
		cout<<0;
		return 0;
	}
	string rs=s;
	reverse(rs.begin(),rs.end());
	if(rs==s)
	{
		cout<<0;
		return 0;
	}
	int dif=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]!=rs[i])
		{
			dif++;
		}
	}
	sort(a+1,a+1+t);
	cout<<dif-a[t];
	return 0;
}
