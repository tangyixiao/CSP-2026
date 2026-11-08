#include<bits/stdc++.h>
using namespace std;
long long a[100005];
int main(){
freopen("crystal.in", "r", stdin);
freopen("crystal.out", "w", stdout);
int n;
int m;
int sum;
cin>>n>>m;
for(int i=1;i<=n;i++){
	cin>>a[i];
	if(a[i]==i){
		cout<<n;
	}
}
return 0;
}
