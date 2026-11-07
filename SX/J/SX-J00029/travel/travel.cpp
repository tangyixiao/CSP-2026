#include<bits/stdc++.h>
using namespace std;
int h[1010];
int main(){
	freopen("travel","r".stdin);
	freopen("travel","w",stdout);
	int a,b,c,d; cin>>a>>b>>c>>d;
	for(int i=1; i<=17; i++){
		cin>>h[i];
	}
	for(int i=1; i<=17; i++){
		if(a[i]==b[i]){
			cout<<1;
		}
	}
}
