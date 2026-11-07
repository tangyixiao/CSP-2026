#include<bits/stdc++.h>
using namespace std;
int n,m,t=0,p=0,cnt=0;
int a[500005];
int b[300005];
int c[300005];
int main(){
	freopen(card.in,"r",stdin);
	freopen(card.out,"w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			for(int k=1;k<=t;k++){
		    	if(a[j]==b[k]){
				cnt=1;
					p=k;
				}
			}
			if(cnt==0){
				t++;
				b[t]=a[j];
			}
			else{
				for(int k=p+1;k<=t;k++){
					b[k]=0;
				}
				t=p;
				cnt=0;
			}
		}
		for(int j=1;j<=t;j++){
			c[b[j]]++;
			b[j]=0;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<" ";
	}
	return 0;
}
