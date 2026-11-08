#include<bits/stdc++.h>
using namespace std;
long long n,z,c[100000005];
string s,b; 
long long ans;
long long t;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>z>>s[i];		
		for(int j=t;j<=t+z-1;j++){
			b[j]=s[i];
			c[j]=z;
		}
		t+=z;
	}
	if(t%2==0){
		for(int i=1;i<=t/2;i++){
			for(int j=t;j>=t/2;j--){
				if(b[i]!=b[j]){
					ans+=c[j];
					b[j]=b[i];
				}
			}
		}
	}else{
		for(int i=1;i<=t/2;i++){
			for(int j=t;j>=t/2+2;j--){
				if(b[i]!=b[j]){
					ans+=c[j];
					b[j]=b[i];
				}
			}
		}
	}
	cout<<ans;
	return 0;
}
