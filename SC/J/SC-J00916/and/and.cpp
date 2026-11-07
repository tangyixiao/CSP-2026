#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;
int a[200005];
bool check(int a){
	a++;
	while(a>2){
		if(a%2==1) return false;
		a/=2; 
	}
	return true;
}
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	int flag=1;
	for(int i=1;i<=n;i++){
		if(a[i]!=i-1) flag=0;
	}
	if(check(n-1)==0) flag=0;
	if(flag==1) {
		if(m<=(n+1)/2){
			cout<<a[n-m+1];
		}
		else cout<<0;
		return 0;
	}
	sort(a+1,a+n+1,cmp);
	flag=1;
	for(int i=1;i<=n;i++){
		if(check(a[i])==0) flag=0;
	}
	if(flag==1){
		cout<<a[m];
		return 0;
	}
	flag=1;
	return 0;
}
