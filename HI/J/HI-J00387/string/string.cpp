#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
char a[N];
//
int main(){
	freopen("string.in","r",stdin);
	freopen("stding.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	int o=0;
	for(int i=1;i<=n;i++){
		int m;
		char b;
		cin>>m>>b;
		for(int i=1;i<=m;i++){
			o++;
			a[o]=b;
		} 
	}
	int ans=0;
	if(o%2==1){
		for(int i=1;i<=(o/2+1);i++){
			if(a[i]!=a[o-i+1]){
				ans++;
			}
		}
	}
	else{
		for(int i=1;i<=(o/2);i++){
			if(a[i]!=a[o-i+1]){
				ans++;
			}
		}
	}
	cout<<ans;
	return 0;
}


