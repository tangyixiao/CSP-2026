#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],m,ans[200005],fst[300005],sta[200005];
bool frm(int h){
	for(int i=0;i<=n;i++)fst[i]=0;
	int p=0;
	for(int i=h;i<=n;i++){
		if(fst[a[i]]==0){
			p++,sta[p]=a[i];
			fst[a[i]]=p;
		}else{
			p=fst[a[i]];
		}
	}
	for(int i=1;i<=p;i++)ans[sta[i]]++;
	return 1; 
}bool frm1(int h){
	int p=0;
	for(int i=h;i<=n;i++){
		int j=1;
		while(sta[j]!=a[i]&&j<=p)j++;
		if(j>p)sta[j]=a[i];
		p=j;
	}
	for(int i=1;i<=p;i++)ans[sta[i]]++;
	return 1;
}

signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		(n<=500?frm1(i):frm(i));
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	
}
