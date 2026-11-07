#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e8+5;
char a[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;cin>>n; 
	ll ln=0,num=0;
	bool f=false;
	for(int i=1;i<=n;i++){
		ll l;char c;cin>>l>>c;
		if(ln+l>=1e9){
			f=true;
			continue;
		}
		while(l--) a[ln++]=c;
	}
	if(f){
		cout<<0;return 0;
	}
	for(ll i=0;i<=ln/2;i++){
		if(a[i]!=a[ln-i-1]){
			num++;
		}
	}
	cout<<num; 
	return 0;
}