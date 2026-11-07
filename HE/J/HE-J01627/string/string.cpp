#include<bits/stdc++.h>
using namespace std;
string s;
long long l,n,cnt;
long long a[200005],c[200005];
int main(){

freopen("string.in","r",stdin);
freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	for(int i=0;i<=n-1;i++){
		if(c[i]==c[i+1]){
		cnt++;	
		}
	
	}
	if(cnt==n){
		cout<<"0";
		return 0;
	}
	
	return 0;
} 

