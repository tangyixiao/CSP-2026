#include<bits/stdc++.h>
using namespace std;
int also(int a,int b){
	return a&b;
}
int cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n;	cin>>n;
	int m;	cin>>m;
	int a[20005]={0};
	for(int i=1;i<=n;i++)	cin>>a[i];
	sort(a+1,a+n+1,cmp);
	if(m==1){
		cout<<a[1];
	}
	else if(m==n){
		for(int i=1;i<n;i++){
			a[n-i]=also(a[n-i+1],a[n-i]);
		}
		cout<<a[1];
	}
	else if(m==2){
		int maxn=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				int v=also(a[i],a[j]);
				if(v>maxn)	maxn=v;
			}
		}
		cout<<maxn;
	}
	else{
		cout<<a[1];
	}
	return 0;
}
