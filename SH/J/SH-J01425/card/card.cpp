#include <bits/stdc++.h>
using namespace std;
int n,m,i,j,a[500005],cnt[300005],c[500005],l,k,d[500005];
bool b[500005],cnt1[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(i=1;i<=n;i++){
		cin>>a[i];
		b[i]=true;
	}
	for(i=1;i<=n;i++){
		for(j=i;j<=n;j++) b[j]=true;
		for(j=i,l=0;j<=n;j++){
			if(j==i){
				c[++l]=a[j];
				d[l]=j;
			}
			else{
				if(b[j]){
					bool d=false;
					for(k=1;k<=l;k++){
						if(c[k]==a[j]){
							d=true;
							break;
						}
					}
					if(d){
						for(int x=k;x<=l;x++) b[d[x]]=false;
						l=k-1;
						c[++l]=a[j];
					}
				}
			}
		}
		for(j=1;j<=m;j++) cnt1[j]=true;
		for(j=1;j<=m;j++){
			if(cnt1[c[j]]){
				cnt[c[j]]++;
				cnt1[c[j]]=false;
			}
		}
	}
	for(i=1;i<=m;i++) cout<<cnt[i]<<" ";
	fclose(stdin);
	fclose(stdout);
	return 0;
}
