#include<bits/stdc++.h>
using namespace std;
int a[201000];
char c[200017];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,l=0,ll=0;
	string ss;
	long long ans=0,sum=0;
	cin>>n;
	for(int i=1; i<=n; i++){
		cin>>a[i]>>c[i];
		if(c[i]==c[i-1]&&i!=1){
			l++;
		}
		if(a[i]==a[i-1]&&i!=1){
			ll++;
		}
	}
	if(l==n-1){
		cout<<0;
		return 0;
	}else if(ll==n-1){
		for(int i=1; i<=(n+1)/2; i++){
			if(c[i]!=c[n-i+1]){
				ans+=a[1];
			}
		}
		cout<<ans;
		return 0;
	}else{
		for(int i=1; i<=n; i++){
			for(int j=1; j<=a[i]; j++){
				ss+=c[i];
			}
		}
		for(int i=1; i<=(ss.size()+1)/2; i++){
			if(ss[i]!=ss[ss.size()-i+1]){
				ans++;
			}
		}
		cout<<ans;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
