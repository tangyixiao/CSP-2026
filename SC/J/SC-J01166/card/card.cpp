#include<bits/stdc++.h>
using namespace std;
int a[500010],tsz[300010],bj[300010],ko[300010];
int main(){
	freopen("card".in,'r',std.in);
	freopen("card".out,'r',std.out);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	int djg=1;
	for(int d=0;d<n;d++){
		for(int j=d+1;j<=n;j++){
			if(bj[a[j]]==0){
				ko[djg]=a[j];
				bj[a[j]]=1;
				djg+=1; 
			}
			else{
				for(int k=djg;k>0;k--){
					if(ko[k]!=a[j])
					ko[k]=0;
					else{
						djg=k;
						break;
					}
				}
			}
		}
		djg=0;
		for(int e=1;e<=m;e++)
		tsz[ko[e]]+1;
		for(int i=1;i<=m;i++){
			ko[i]==0;
			bj[i]==0;
		}
	}
	for(int i=1;i<=m;i++)
	cout<<tsz[i]<<' ';
	return 0;
}