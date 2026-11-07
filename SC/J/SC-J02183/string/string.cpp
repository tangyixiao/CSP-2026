#include<bits/stdc++.h>
using namespace std;
long long len[200005];
char a[200005];
int main(){
	freopen("r","string.in",stdin);
	freopen("w","string.out",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>len[i]>>a[i];
	}
	long long ans=0;
	int i=1,j=n;
	while(i<j){
		long long num=min(len[i],len[j]);
		if(a[i]!=a[j]){
			ans+=num;
		}
		len[i]-=num;
		len[j]-=num;
		if(len[i]==0)i++;
		if(len[j]==0)j--;
	}
	cout<<ans;
	return 0;
}