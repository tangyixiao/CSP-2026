#include<bits/stdc++.h>
using namespace std;

int a[500005],b[300005],x[300005],t[300005],s[300005];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,y;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=m;i++) b[i]=0;
	for(int i=1;i<=n;i++){
		y=1;
		for(int i=1;i<=m;i++) {t[i]=0;s[i]=0;x[i]=0;}
		for(int j=i;j<=n;i++){
			if(t[a[j]]==0){x[y]=a[j];t[a[j]]=1;s[a[j]]=y;y++;}
			else{
				for(int k=s[a[j]]+1;k<=y-1;k++){
					t[x[k]]=0;
					s[x[k]]=0;
					x[k]=0;
				}
				y=s[a[j]]+1;
			}
			for(int k=1;k<=m;k++){if(t[k]==1)b[k]++;}
		}
	}
	cout<<b[1];
	for(int i=2;i<=m;i++) cout<<" "<<b[i];
	fclose(stdin);
	fclose(stdout);
	return 0; 
}
