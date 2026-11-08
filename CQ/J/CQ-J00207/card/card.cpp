#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],s[300005];
void mk(int i){
	int q=1;
	short f[300005]={},e[300005]={};
	for(;i<=n;i++){
		if(f[a[i]]==0){
			e[q]=a[i];
			f[a[i]]=q++;
		}
		else{
			for(;q>f[a[i]];q--) f[e[q]]=0;
			q++;
		}
	}
	for(i=1;i<q;i++) s[e[i]]++;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++) 
	mk(i);
	for(int i=1;i<=m;i++) cout<<s[i]<<" ";
	return 0;
}

