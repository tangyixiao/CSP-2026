#include<bits/stdc++.h>
using namespace std;
int n,m,ans=0,a[500005],b[500005]={},s=0,c[500005]={};
int main(){
	freopen("card.in","r",stdin);
	//freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<m;i++){
		for(int j=i;j<n;j++){
			b[s]=a[j];
			int s1=s;
			for(int l=0;l<=s1;l++){
				if(a[j]==b[l]){
					s=l;
					l=s1+12;
				}
			}
			s++;
			
		}
		for(int j=0;j<s;j++){
			c[b[j]]++;
		}
	}
	for(int i=500000;i>=0;i--){
		if(c[i]!=0){
			s=i;
			i=-1;
		}
	}
	for(int i=1;i<=s;i++){
		cout<<c[i]<<' ';
	}
	return 0;
}
