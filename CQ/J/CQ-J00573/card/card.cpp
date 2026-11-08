#include<bits/stdc++.h>
using namespace std;
int a[500001],n,m,to[500001]={},z[500001]={},zu=0,ma=0;
void ch(int l,int r){
	for(int j=l;j<r;j++){
		for(int i=0;i<zu;i++){
			if(to[i]==a[j]){
				int cu=i;
				for(int k=i;k<zu;k++){
					to[k]=-1;
				}
				break;
			}
		}
		to[zu]=l;
		zu++;
	}
	for(int j=0;j<m;j++){
		for(int i=0;i<zu;i++){
			if(to[i]==j) {
				z[j]++;
				break;
			}
		}
	}
	return;
}
int main(){
	//freopen(".in","r",stdin);
	//freopen(".out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		ch(i,n);
	}
	for(int i=0;i<m;i++){
		cin>>z[i];
	}
	return 0;
}
