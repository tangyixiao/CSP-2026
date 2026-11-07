#include<bits/stdc++.h>
#include<string>
using namespace std;
int n,a;
string b,s,x,y,y2;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int wei=0;
	for(int i=1;i<=n;i++){
		cin>>a>>b;
		for(int j=1;j<=a;j++){
			if(i==1&&j==1){
				s+=b;
			}
			s+=b;
			wei++;
		}
	}
	for(int i=1;i<(wei+1)/2;i++){
		x[i]=s[i];
	}
	for(int i=wei;i>(wei+1)/2;i--){
		y[wei-i+1]=s[i];
	}
	int ans=0;
	for(int i=1;i<(wei+1)/2;i++){
		if(x[i]!=y[i]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}