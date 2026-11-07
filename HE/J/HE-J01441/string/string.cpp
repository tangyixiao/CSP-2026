#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int a[200010]={};
	char s[200010]={};
	for(int i=1;i<=n;i++){
		cin>>a[i]>>s[i];
	}
	if(n==2){
		if(s[1]!=s[2]) cout<<min(a[1],a[2]);
		else cout<<0;
	}
	else if(n==1){
		cout<<0;
	}
	else{
		long long sum=0;
		for(int i=1;i<=n;i++){
			while(s[i]!=s[n] && a[i]!=0){
				sum+=min(a[i],a[n]);
				a[i]=max(a[i],a[n])-min(a[i],a[n]);
				n--;
			}
		}
		cout<<sum;
	}
	return 0;
} 
