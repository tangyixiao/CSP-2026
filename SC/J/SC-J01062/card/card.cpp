#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
const int N=1e6;
int n,m,k=1;
int a[N],d[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		long long s[N],t=0,l=1;
		for(int j=k;j<=n;j++){
			s[j-t]=a[j];
			for(int x=k;x<j;x++){
				if(s[x]==s[j-t]){
					t=t+j-t-x;
					break;
				}
			}
		}
		for(int j=0;j<n-t;j++){
			if(l==d[n-t-j]){
				d[l]=d[l]+1;
				l+1;
			}
		}
		k++;
	}
	for(int i=1;i<=m;i++){
		cout<<d[i]<<" ";
	}
	return 0;
}