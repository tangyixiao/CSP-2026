#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200009]={};
long long maxn=0;
bool check(){
	int flag=0;
	for(int i=1;i<=n;i++){
		for(int k=1;k<=30;k++){
			if(a[i]+1==pow(2,k)){
				flag=1;
			}
		}
		if(flag=0){
			return false;
		}
		else flag=0;
	}
	return true;
}
bool check1(){
	for(int i=1;i<=n;i++){
		if(a[i]>4){
			return false;
		}
	}
	return true;
}
bool check0(){
	for(int i=1;i<=n;i++){
		if(a[i]==0){
			return true;
		}
	}
	return false;
}
bool cmp(long long a,long long b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(check0()){
		cout<<0;
		return 0;
	}
	if(m==1){
		for(int i=1;i<=n;i++){
			
			maxn=max(maxn,a[i]);
		}
		cout<<maxn;
	}
	else if(m==2){
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				maxn=max(maxn,a[i]&a[j]);
			}
		}
		cout<<maxn;
	}
	else if(m==n){
		maxn=1;
		for(int i=1;i<=n;i++){
			 maxn=maxn&a[i];
		} 
		cout<<maxn;
	}
	else if(check()){
		sort(a,a+n,cmp);
		cout<<a[m];
	}
	else if(check1()){
		int ans=0;
		for(int i=1;i<=n;i++){
			if(a[i]==3 || a[i]==1){
				ans++;
			}
		}
		if(ans>=m){
			cout<<3;
		}
		else{
			for(int i=1;i<=n;i++){
				if(a[i]==2){
					ans++;
				}
			}
			if(ans>=m){
				cout<<2;
			}
			else cout<<1;
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
