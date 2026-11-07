#include<bits/stdc++.h>
using namespace std;
int a[500005];
int n,m;
void pf1(){
	sort(a,a+n);
	cout << a[n-1];
}
void pf2(){
	int ans=a[0];
	for(int i=0;i<n;i++){
		ans&=a[i];
	}
	cout << ans;
}
void pf3(){
	int mx=0;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			int ans=a[i]&a[j];
			mx=max(mx,ans);
		}
	}
	cout << mx;
}
void pf4(){
	cout << 0;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	bool flagpf=1;
	for(int i=0;i<n;i++){
		cin >> a[i];
		if(a[i]!=i-1) flagpf=0;
	}if(m==1){
		pf1();
		return 0;
	}else if(m==n){
		pf2();
		return 0;
	}else if(m==2){
		pf3();
		return 0;
	}else if(m==n-1){
		pf4();
		return 0;
	}else if(flagpf){
		cout << 0;
	}else{
		sort(a,a+n);
		cout << a[n-m];
	}
	return 0;
}
