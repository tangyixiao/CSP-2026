#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m;
int mm[300005],ma[300005],p[300005];
int a[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(ma[a[j]]){
				for(int k=p[a[j]];k<=j;k++){
					ma[a[k]]--;
				}
			}
			else{
				ma[a[j]]++;
				p[a[j]]=j;
			} 
		}
		for(int j=1;j<=m;j++){
			if(ma[j]) mm[j]++;
			ma[j]=0;
		}
	}
	for(int i=1;i<=m;i++) cout<<mm[i]<<" ";
	return 0;
} 
