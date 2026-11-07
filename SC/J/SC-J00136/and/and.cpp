#include<bits/stdc++.h>
using namespace std;
const int MAXE=2e5+10;
int n,m,a[MAXE];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>a[i];
	if(m==1){
		int zd=-1;
		for(int i=0;i<n;i++)
			if(zd<a[i]) zd=a[i];
		cout<<zd;
	}else if(m==n){
		int tnt=a[0];
		for(int i=1;i<n;i++) tnt&=a[i];
		cout<<tnt;
	}else if(m==2){
		int zd=-1;
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++){
				if(j==i) continue;
				if(zd<a[i]&a[j]) zd=a[i]&a[j]; 
			}
		cout<<zd;
	}else cout<<0;
	return 0;
} 