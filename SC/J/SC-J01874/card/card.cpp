#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],b[300005],c[300005],d[50005],top=0;
//bool z[50005];
void pop(int x){
	top=c[x];
}
bool pd(int x){
	for(int g=1;g<=top;++g){
		if(d[g]==x) return false;
	}
	return true;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
		//z[a[i]]=false;
	}
	for(int i=1;i<=n;++i){
		top=0;
		for(int j=i;j<=n;++j){
			if(pd(a[j])){
				//z[a[i]]=true;
				d[++top]=a[j];
				c[a[j]]=top;}
			else{
				pop(a[j]);
			}
		}
		for(int o=1;o<=top;++o){
			++b[d[o]];
	//		cout<<d[o]<<" ";
		}
	//	cout<<"\n";

	}
	for(int k=1;k<=m;++k){
		cout<<b[k]<<" ";
	}
	return 0;
}