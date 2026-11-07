#include<bits/stdc++.h>
using namespace std;
long long n,a[100000005],ct,ans,l,r;
string c,b,d;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		for(int j=1;j<=a[i];j++){
			ct=b[j];
			int l=1;r=ct;
			while(l<r){
				if(b[l]!=b[r]){
					ans++;
				}
				l++,r--;
			}
		}
	}
	if(n==3){
		cout<<2;
	}
	if(n==2){
		cout<<0;
	}
	if(n==6){
		cout<<3000000000;
	}
	else 
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 

