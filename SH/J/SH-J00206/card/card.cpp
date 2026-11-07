#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,i,j;
	cin>>n>>m;
	int a[n+10];
	for(i=0;i<n;i++) cin>>a[i];
	if(m==2){
		int p=0,q=0;
		for(i=0;i<n;i++){
			if(a[i]==1) p++;
			else q++;
		}
		if(a[n-1]==1) p=n;
		else q=n;
		cout<<p<<' '<<q;
		return 0;
	}
	int ans[m+10];
	for(i=0;i<=m+5;i++) ans[i]=0;
	for(i=0;i<n;i++){
		int t[m+10],l[n+10],p=0;
		for(j=0;j<=m;j++) t[j]=-1;
		for(j=0;j<=n;j++) l[j]=0;
		for(j=i;j<n;j++){
			if(t[a[j]]<=p && t[a[j]]>=0) p=t[a[j]]+1;
			else{
				t[l[p]]=-1;
				t[a[j]]=p;
				l[p]=a[j];
				p++;
			}
		}
		for(j=0;j<p;j++){
			ans[l[j]]++;
		}
	}
	for(i=1;i<=m;i++) cout<<ans[i]<<' ';
	fclose(stdin);
	fclose(stdout);
	return 0;
}
