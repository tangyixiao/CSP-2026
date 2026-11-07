#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main(){
//ios::sync_with_stdio(false);
//cin.tie(0);
freopen("string.in","r",stdin);
freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string c;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c;
	}
	if(n==1){
		cout<<0;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(c[i]==c[j]){
				cout<<0; 
				return 0;
			}
		}
	}
return 0;
}

