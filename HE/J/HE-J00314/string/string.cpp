#include<bits/stdc++.h>
using namespace std;
long long n,cnt,ans;
long long zb=1,ze=1;
char a[100010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	if(n==1) {
		cout<<0;
		return 0;
	}
	
	for(int i=1;i<=n;i++){
		long long x;
		char y;
		cin>>x>>y;
		for(int j=1;j<=x;j++){
			a[ze]=y;
			ze++;
		}
		cnt+=x;
	}
	ze=cnt;
	while(zb<ze){
		if(a[zb]==a[ze]){
			zb++;
			ze--;
		}
		else{
			ans++;
			zb++;
			ze--;
		}
	}
	cout<<ans;
	return 0;
} 

