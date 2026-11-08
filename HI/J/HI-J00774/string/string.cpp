#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long long n;
	cin>>n;
	string s="";
	while(n--)
	{
		long long t;
		char k;
		cin>>t>>k;
		s.append(t,k);
	}
	string st=s;
	reverse(s.begin(),s.end());
	if(st==s)
	{
		cout<<"0";
		return 0;
	}
	long long sum=0;
	long long l=st.size()/2;
	for(long long i=0;i<l;i++)
	{
		long long j=st.size()-1-i;
		if(st[i]!=st[j]) sum++;
	}
	cout<<sum;
	return 0;
} 
