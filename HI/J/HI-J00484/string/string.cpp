#include<bits/stdc++.h>
using namespace std;
long long  n;
int a[100010];
char b[100010],ans[100010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int ans=INT_MAX;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		ans=min(ans,a[i]);
	}
	if(n<=1){
		cout<<0;
		return 0;
	}
    int u=1;
    for(int i=2;i<=n;i++){
    	if(b[i]!=b[i-1])u=0;
	}
	if(u==1){
		cout<<"0";
		return 0;
	}
    cout<<ans;
	return 0;
}
