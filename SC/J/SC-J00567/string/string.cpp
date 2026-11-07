#include<iostream>
#include<cstdio>
using namespace std;
char sum[1000005];
int v;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		char c;
		cin>>c;
		for(int i=1;i<=n;i++){
			sum[v++]=c;
		}
	}
	long long int ans=0;
	for(int i=0;i<v/2;i++){
		if(sum[i]!=sum[v-1-i]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}