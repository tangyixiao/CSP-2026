#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a,ans=0,cnt=0;
	char c;
	cin>>n;
	long long b[200000005]={0};
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		for(int j=1;j<=a;j++){
			b[cnt+j]=int(c);
		}cnt+=a;
	}for(int i=1;i<=cnt;i++){
		if(b[i]!=b[cnt-i]){
			ans++;
		}
	}cout<<ans;
	return 0;
}