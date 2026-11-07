#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string h="";
	int n,s=0,t=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int m;
		string k;
		scanf("%d",&m);
		cin>>k;
		for(int j=0;j<m;j++){
			h+=k;
		}
		s+=m;
	}
	for(int i=0;i<s;i++){
		int d=s-1-i;
		if(h[i]!=h[d]){
			h[i]=h[d];
			t++;
		}
	}
	cout<<t;
	return 0;
}