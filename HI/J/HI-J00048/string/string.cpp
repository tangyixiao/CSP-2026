#include<bits/stdc++.h>
using namespace std;
using s=string;
using ll=long long;
ll l,k;
s n;
int main(){
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>l;
	char o[1001];
	int h[1001];
	for(int i=1;i<=l;i++){
		cin>>h[i]>>o[i];
		for(int j=1;j<=h[i];j++){
			n+=o[i];
		}
	}
	int i;
	if(o[1]==o[l]){
		i=abs(h[1]-h[l]);
	}else{
		i=0;
	}
	for(;i<n.size()/2+1;i++){
		ll h=i,w=n.size()-i-1;
		if(n[h]!=n[w]){
			k++;
		}
	}
	cout<<k;
	
	return 0;
} 

