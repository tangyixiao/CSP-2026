#include<bits/stdc++.h>
using namespace std;
int const N=2e5+5;
int n,m,ip;
string s[N],ans;
vector<int> v;
void get_ans(int x)
{
	for(int i=x;i<=30;i++)
	{
		vector<int> v2;
		for(auto j:v) if(s[j][i]=='1') v2.push_back(j);
		v=v2;
		if(v.size()>=m) ans[i]='1';
		else return; 
	}
}
long long tin(string sx)
{
	int cnt=0,io=1;
	for(int i=sx.size()-1;i>=0;i--) cnt+=(sx[i]-'0')*io,io*=2;
	return cnt;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		for(int j=0;j<=30;j++) s[i]+='0';
	for(int i=0;i<=30;i++) ans+='0';
	for(int i=1;i<=n;i++)
	{
		long long x;cin>>x;
		string cnt;
		while(x>0)
		{
			cnt+=(x%2+'0');
			x/=2;
		}
		for(int j=cnt.size()-1;j>=0;j--) s[i][30-j]=cnt[j];
	}
	for(int i=0;i<=30;i++)
	{
		v.clear();
		for(int j=1;j<=n;j++) if(s[j][i]=='1') v.push_back(j);
		if(v.size()>=m) 
		{
			ip=i;
			break;
		}
	}
	get_ans(ip);
	cout<<tin(ans);
	return 0;
}