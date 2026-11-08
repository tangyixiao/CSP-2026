#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],ans[300005],l,r,t[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			t[j]=a[j];
			for(int k=j-1;k>=i;k--){
				if(t[k]==t[j]){
					for(int p=k;p<j;p++){
						t[p]=0;
					}
				}
				
			}
		}
		for(int j=i;j<n;j++){
			if(t[j]!=0){
				ans[a[j]-1]++;
			}
		}
	}
	for(int i=0;i<m;i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	return 0;
} 
