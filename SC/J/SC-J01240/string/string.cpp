#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5;
int n,ans;
struct Str{
	int len;
	char c;
}s[N];
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i].len>>s[i].c;
	}
	for(int i=1,j=n;i<j;){
		int k=min(s[i].len,s[j].len);
		if(s[i].c!=s[j].c){
			ans+=k;
		}
		s[i].len-=k;
		s[j].len-=k;
		if(s[i].len==0)i++;
		if(s[j].len==0)j--;
	}
	cout<<ans;
	return 0;
}
//银鞍照白马，飒沓如流星
