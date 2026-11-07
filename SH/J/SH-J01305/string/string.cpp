#include<bits/stdc++.h>
using namespace std;
const int maxn=2e7+5;
int n,cnt,ans;
char s[maxn];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;++i){
		int a;
		char c;
		cin>>a>>c;
		for(int j=1;j<=a;++j){
			s[++cnt]=c;
		}
	}
	for(int i=1,j=cnt;i<=j;++i,--j){
		if(s[i]!=s[j]){
			++ans;
		}
	}
	cout<<ans;
	return 0;
}
