#include<bits/stdc++.h>
using namespace std;
int n,m,a[200001];
void f1(){
	int da=0;
	for(int i=1;i<=n;i++){
		da=max(da,a[i]);
	}
	cout<<da;
	return; 
}
void f2(){
	long long s=1;
	for(int i=1;i<=n;i++){
		s&=a[i];
	}
	cout<<s;
	return;
}
void f3(){
	long long da=0;
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			long long shu=a[i]&a[j];
			da=max(da,shu);
		}
	}
	cout<<da;
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		f1();
		return 0;
	}
	if(m==n){
		f2();
		return 0;
	}
	if(m==2){
		f3();
		return 0;
	}
	return 0;
}