#include <iostream>
#include <string>
#define ll long long
#define endl '\n'
using namespace std;
const int N=2e5+5;
int n;
ll sum,ans,a;
string s;
char c;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>c;
		sum+=a;
		s+=string(a,c);
	}
	s=" "+s;
	for(int i=1;i<=sum/2;i++)
		if(s[i]!=s[sum+1-i])
			ans++;
	cout<<ans;
	return 0;
}