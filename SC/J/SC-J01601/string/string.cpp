#include<bits/stdc++.h>
using namespace std;
long long a[200010];
char s[200010],sd[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,ans=0,ane,cnt=0,aa=1;
	cin>>n;
	for(int i = 1; i <= n; i++){
		cin>>a[i]>>s[i];
		ans+=a[i];
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= a[i]; j++){
			sd[aa]=s[i];
			aa+=1;
		}
	}
	if(ans%2==0){
		ane=ans/2;
	}else{
		ane=(ans-1)/2;
	}
	for(int i = 1; i <= ane; i++){
		if(sd[i]!=sd[ans-i+1]){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}