#include<bits/stdc++.h>

using namespace std;

int n,ai;
long long ans=0,cnt=1;
string s;
char c;

int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	while(cin>>ai){
		cin>>c;
		while(ai--)s[cnt++]=c;
	}
	for(int i=1;i<(cnt/2+1);i++){
		if(s[i]!=s[cnt-i]){
			ans++;
		}
	}
	cout<<ans;
	
	return 0;
}