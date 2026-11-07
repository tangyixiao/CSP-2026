#include<bits/stdc++.h>
using namespace std;
#define LL long long

LL m,n,a[200005];
bool cmp(LL a,LL b){
	return a>b;
}

int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
	cin>>n>>m;
	cin>>a[0];
	LL zd=a[0],ans=a[0];
	for(int i=1;i<n;i++){
		cin>>a[i];
		zd=max(zd,a[i]);
		ans&=a[i];
	}
	if(m==1){
		cout<<zd;
	}
	else if(m==n){
		cout<<ans;
	}
	else if(m==2){
		zd=-1;
		for(int i=0;i<n;i++){
			for(int j=1;j<n;j++){
				zd=max(a[i]&a[j],zd);
			}
		}
		cout<<zd;
	}
	else{
		sort(a,a+n,cmp);
		cout<<a[m-1];
	}
	return 0;
}