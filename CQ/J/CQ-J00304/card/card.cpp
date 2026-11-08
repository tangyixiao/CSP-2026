#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[100005],p[100005],ji[100005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int j1=0;
		for(int j=i;j<=n;j++){
			j1++;
			p[j1]=a[j];
			for(int k=1;k<j;k++){
				if(p[j]==p[k]){
					for(int qin=k;qin<=j;qin++){
						p[qin]=0;
					}
					p[k]=a[j];
					j1=k;break;
					
				}
				
			}
			
		}
		for(int k=1;k<=m;k++){
			for(int j=1;j<=n;j++){
				if(p[j]==k){
					ji[k]++;break;
				}
				
			} 
		}
		p[100005]={0};
	}
	for(int i=1;i<=m;i++){
		cout<<ji[i]<<" ";
	}
	return 0;
}
