#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],t[300005],b[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int k=1;k<=n;k++){
		for(int i=k;i<=n;i++){
			if(t[a[i]]!=0){
				for(int j=t[a[i]]+1;j<i;j++){
					if(t[a[j]]==j){
						t[a[j]]=0;
					}
				}
			}
			else{
				t[a[i]]=i;
			}
			
		}
		for(int j=1;j<=m;j++){
			if(t[j]!=0){
				
				b[j]++;
				t[j]=0;
			}
		}
	}
		
	for(int i=1;i<=m;i++){
		cout<<b[i]<<' ';
	}
	return 0;
}
