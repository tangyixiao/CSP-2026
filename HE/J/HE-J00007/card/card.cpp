#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,a[10005],b[10005],c[10005],t;
	cin>>n>>m;
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n;i++){
		int x=1;
		for(int j=0;j<50000;j++)b[j]=0;
		b[1]=a[i];
		for(int j=i+1;j<n;j++){
			t=1;
			for(int k=0;k<x;k++){
				if(b[k]==a[j]){
					t--;
					for(int o=k+1;o<x;o++)b[o]=0;
					x=k;
					break;
				}	
			}
			if(t){
				x++;
				b[x]=a[j];
			}
			for(int h=1;h<=t;h++)c[b[h]]+=1;
		 	
		}
	}for(int i=1;i<=t;i++)cout<<c[i]<<' ';
	return 0;
}
