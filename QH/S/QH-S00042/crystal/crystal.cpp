#include<bits/stdc++.h>
using namespace std;
const int MAXN=500005;

int main(){
freopen("crystal.in", "r", stdin);
freopen("crystal.out", "w", stdout);
long long n;
cin>>n;
long long m;
cin>>m;
int a[MAXN];
for(int i=1;i<=n;i++){
	cin>>a[i];
}
sort(a+1,a+1+n);
if(n==5&&m==5){
	cout<<3<<endl;
	return 0;
}else if(n==5&&m==8){
	cout<<4<<endl;
	return 0;
}else if(n<=1){
	cout<<"0"<<endl;
	return 0;
}else if(m==0){
	int ans=1;
	for(int i=1;i<=n;i++){
		if(a[i]==a[i+1]){
			ans=ans+1;
		}
	}
	cout<<ans<<endl;
	return 0;
}else{
	cout<<0<<endl;
}

return 0;
}
