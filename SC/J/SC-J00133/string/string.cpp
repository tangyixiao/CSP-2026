#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e8+5;
int len=1,n,ans;
char s[N];
void hui(){
	bool ok=0;
	for(int i=1;i<=len/2-1;i++)
		if(s[i]!=s[len-1])
			ans++;
	cout<<ans;
}
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		char c;
		cin>>a>>c;
		for(int j=1;j<=a;j++)
			s[len++]=c;
	}
	hui();
	return 0;
}
