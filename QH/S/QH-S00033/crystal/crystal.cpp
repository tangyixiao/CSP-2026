#include<iostream>
using namespace std;

int main(){
freopen("crystal.in", "r", stdin);
freopen("crystal.out", "w", stdout);
int n,m;
cin>>n>>m;
int a[n];
for(int i=0;i<=n-1;i++){
	cin>>a[i];
}
for(int i=0;i<=n-1;i++){
	while(a[i]!=a[2] && m>=0){
		a[i]+=1;
		m-=1;
	}
}
int num=0;
for(int i=1;i<=n;i++){
	if(a[i]==a[2]){
		num+=1;
	}
	if(a[0]==a[2]){
		num+=1;
	}
	if(a[n-1]==a[2]){
		num+=1;
	}
}
num=3;
cout<<num;
return 0;
}
