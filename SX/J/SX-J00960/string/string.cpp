#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5;
int n,op,len;
char k,s[N];
int a[N];
int cnt;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>op;
		cin>>k;
		a[i]=op;
		s[i]=k;
		len+=op;
	}
	if(n==1){
		cout<<0;
		return 0;
	}
	int l=1,r=n,m=1,ln=0,rn=0;
	while(m<=len/2){
		if(s[l]!=s[r]){
			cnt++;
		}
		a[l]--;
		a[r]--;
		if(!a[l]) l++;
		if(!a[r]) r--;
		m++;
	}
	cout<<cnt;
	return 0;
}