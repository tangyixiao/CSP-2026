#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+5;
int a[maxn];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,maxnn=1,max1=-1;
	for(int i=1;i<=30;i++){
		maxnn*=2;
	}
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		max1=max(a[i],max1);
	}
	if(n==1) cout<<max1;
	bool flag1,flag2;int tnt=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=30;j++){
			 tnt*=2;
			if(a[i]==tnt){
				flag1=true;
				continue;
			} 
			if(a[i]==tnt){
				flag2=true;
			}
		}
	}
	if(flag1&&flag2) cout<<max1;
	int w=a[1];
	if(m==n){
		for(int i=1;i<=n;i++){
			w&=a[i];
		}
		cout<<w;
	}
	return 0;
} 
