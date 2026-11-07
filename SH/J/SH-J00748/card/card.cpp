#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005],q[300005]={},zm[500005]={};
int main(){
	freopen("card.in","r",stdin); 
	freopen("card.out","w",stdout); 
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int p=0;p<n;p++){
		int x=p+1;
		bool b=0;
		zm[p]=a[p];
		for(int i=p+1;i<n;i++){
			for(int j=0;j<i;j++){
				if(zm[j]==a[i]){
					x=j+1;
					b=1;
					break;
				}
			}
			if(b==1){
				for(int j=x;j<=n;j++){
					a[i]=0;
				}
				b=0;
			}
			else{
				zm[x]=a[i];
			}	
		}
		for(int i=0;i<p+5;i++){
			if(zm[i]!=0)q[zm[i]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<q[i]<<" ";
	}
	return 0;
}
