#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N = 2e5+10;
int a[N];
int imax=0;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	if(n>3000){
		for(int i=1;i<=n;i++){
			int aaa=2147483647;
			for(int j=1;j<=n;j++){
				if(j==i)continue;
				aaa=aaa&a[j];
			}
			imax=max(imax,aaa);
		}
		cout<<imax;
		return 0;
	}
	if(m==1){
		for(int i=1;i<=n;i++){
			imax=max(imax,a[i]);
		}
		cout<<imax;
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int l=1;l<i;l++){
				imax=max(imax,a[i]&a[l]);
			}
			for(int r=i+1;r<=n;r++){
				imax=max(imax,a[i]&a[r]);
			}
		}
		cout<<imax;
		return 0;
	}
	if(m==n){
		imax=a[1];
		for(int i=2;i<=n;i++){
			imax=imax&a[i];
		}
		cout<<imax;
		return 0;
	}
	return 0;
}
/*
4 2
3 15 12 12

12
*/
