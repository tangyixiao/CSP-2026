#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5+5;
ll n,a,cnt;
char c;
string s;

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		cin>>c;
		while(a--)
			s = s + c;
			
	}
	int slen = s.size();
	
	int slen1 = slen/2;
	for(int i=0;i<=slen1;i++)
	{
		if(s[i] != s[n-i+1])
		{
			cnt++;
		}
	}
	
	cout<<cnt<<endl;
	return 0;
}
