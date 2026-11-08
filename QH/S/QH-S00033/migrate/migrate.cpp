#include<iostream>
using namespace std;

int main(){
freopen("migrate.in", "r", stdin);
freopen("migrate.out", "w", stdout);
int c,t;
int sum=0;
int num=0;
int x=0;
cin>>c,t;
int n[t],d[t];
int a[1000],b[1000];
	cin>>n[0]>>d[0];
	for(int i=0;i<=t-1;i++){
		cin>>a[i];
	}
	cin>>n[1]>>d[1];
	for(int i=0;i<=t-1;i++){
		cin>>b[i];
	}
	sum=sizeof(a)/1000;
	num=sizeof(b)/1000;
	if(sum%2==0){
		x+=1;
	}
	if(num%2==0){
		x+=1;
	}
	cout<<x;
return 0;
}
