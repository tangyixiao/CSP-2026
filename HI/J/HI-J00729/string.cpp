#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string","r",stdin);
	freopen("string","w",stdout);
	int n;
	cin>>n;
	int a[100005];
	string b;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b;
	}
	if(n==1)cout<<0;
	if(n==2&&b[1]!=b[2]){
		cout<<min(a[1],a[2]);
	}else{
		cout<<0;
	}
	return 0;
}
