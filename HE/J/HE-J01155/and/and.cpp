#include<bits/stdc++.h>
using namespace std;
const int MAXN=2e5+10;
int a[MAXN];
bool cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
freopen("and.out","w",stdout);
	int n;
	cin>>n;
	int k;
	cin>>k;
int yu=k;
	
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++){
		if(k!=0){
			k--;
		a[i]=(a[i]&a[i+1]);
	}
}cout<<a[yu-1];
}
