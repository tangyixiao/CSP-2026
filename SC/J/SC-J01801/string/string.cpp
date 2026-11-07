#include<bits/stdc++.h>
using namespace std;
char s[100000000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	long long n,m,cnt=0;
	long long ans=0;
	char b;
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>m>>b;
		while(m--){
			s[cnt]=b;
			cnt++;
		}
	}
	for(int i=0;i<cnt/2;i++){
		int j=cnt-i-1;
		if(s[i]!=s[j]){
			ans++;
		}
	}cout<<ans<<"\n";
	return 0;
}