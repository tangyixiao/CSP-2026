#include<bits/stdc++.h>
using namespace std;
const int N=2*1e5+5;
long long n,a[N];
string c[N],s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
	}
	for(int i=1;i<=n;i++)
	{
		while(a[i]--){
			s+=c[i];
		} 
	}
	int b=s.size();
	int tot;
	for(int i=0;i*2<=s.size();i++)
	{
		if(s[i]!=s[b-1-i])
		{
			tot+=1;
		}
	}
	cout<<tot;
	
	return 0;
}