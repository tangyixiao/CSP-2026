#include<bits/stdc++.h>
using namespace std;
int s[100000010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,x,cnt=0,ans=0;
	cin>>n;
	char ss;
	for(int i=1;i<=n;i++){
		cin>>x>>ss;
		for(int j=1;j<=x;j++){
			s[cnt]=int(ss);
			cnt++;
		}
	}
	if(cnt%2==1){
		for(int i=0;i<cnt/2+1;i++){
			if(s[i]!=s[cnt-i-1]){
				ans++;
			}
		}
		cout<<ans;
	}
	else{
		for(int i=0;i<cnt/2;i++){
			if(s[i]!=s[cnt-i-1]){
				ans++;
			}
		}
		cout<<ans;
	}
	return 0;
}
