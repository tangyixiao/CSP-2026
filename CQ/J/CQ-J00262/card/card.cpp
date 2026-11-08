#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],z[500005],d[500005],in[500005],ans[300005],k=0;
void da(int x){
	if(d[x]==0){
		z[k]=x;
		d[x]=1;
		in[x]=k++;
	}
	else{
		for(int i=in[x]+1;i<k;i++){
			d[z[i]]=0;
			in[z[i]]=0;
			z[i]=0;
		}
		k=in[x]+1;
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=m;i++){
		cout<<n<<' ';
	}
	return 0;
}
