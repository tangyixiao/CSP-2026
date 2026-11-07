#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a;
	cin>>n;
	char b[1000005];
	int j=0;
	for(int i=1;i<=n;i++){
		cin>>a;
		int j1=j;
		char b1;
		cin>>b1;
		for(;j<=a+j1;j++){
			b[j]=b1;
		}
		j--;
	}
	int n1=j/2,ans=0;
	for(int i=0;i<n1;i++){
		if(b[i]!=b[j-i]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
