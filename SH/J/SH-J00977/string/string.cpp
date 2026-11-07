#include<bits/stdc++.h>
using namespace std;
char b[10000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,a,cnt=0,ans=0;
	char c;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>c;
		for(int j=0;j<a;j++){
			b[cnt]=c;
			cnt++;
		}
		
	}
	for(int i=0;i<n;i++){
		
		if(b[i]!=b[n-i]){
			b[n-i]=b[i];
			ans++;
		}
		
	}
	cout<<ans;
	return 0;
}
