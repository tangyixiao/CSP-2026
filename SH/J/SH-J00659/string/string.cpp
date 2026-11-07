#include<bits/stdc++.h>
using namespace std;
int n;
unsigned long long cnt;
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int k;
		char c;
		cin>>k>>c;
		for(int i=0;i<k;i++) s+=c;
	}
	int le=0,ri=s.size()-1;
	while(le<=ri)
	{
		if(s[le]!=s[ri]) cnt++;
		le++;
		ri--;
	}
	cout<<cnt;
}
