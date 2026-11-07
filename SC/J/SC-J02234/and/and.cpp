#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int a[200001];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,bj1=0,bj2=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(bj1==0){
			int tsg=a[i]+1;
			while(tsg>1){
				if(tsg%2==0){
					tsg/=2;
				}else{
					bj1=1;
					break;
				}
			}
		}
		if(a[i]!=i-1){
			bj2=1;
		}
	}
	if(bj1==0){
		sort(a+1,a+n+1);
		cout<<a[n-m+1];
	}
	return 0;
} 