#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,a[200005],cnt=1,ans=0;
char c[200005];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			s[cnt]=c[i];
			cnt++;
		}
	}
	cnt--;
	if(cnt%2==0){
		for(int i=cnt/2+1;i<=cnt;i++){
			if(s[i]!=s[cnt-i+1]){
				ans++;
			}
		}
	}
	else if(cnt%2==1){
		for(int i=cnt/2+2;i<=cnt;i++){
			if(s[i]!=s[cnt-i+1]){
				ans++;
			}
		}
	}
	cout<<ans;
	return 0;
}
