#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	string s;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int x;
		char a;
		cin>>x>>a;
		for(int j=1;j<=x;j++)
		{
			s+=a;
		}
	}
    long long m=s.size()-1;
    long long cnt=0;
    for(int i=0;i<=m;i++)
    {
    	if(m%2==1)
    	{
    		if((s[i]!=s[m-i])&&(i!=m-i))cnt++;
		}else
		{
			if(s[i]!=s[m-i])cnt++;
		}
	}
	cout<<cnt/2;
	return 0;
}
