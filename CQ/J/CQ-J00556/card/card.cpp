#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],b[500005],d[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout); 
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int x=1;x<=n;x++){
		for(int i=x;i<=n;i++){
			b[a[i]]++;
			if(b[a[i]]>=2){
				for(int j=i-1;j>=1;j--){
					b[a[j]]=max(0,b[a[j]]-1);
					if(a[j]==a[i])break;
				}
			}
		}
		for(int i=1;i<=m;i++)cout<<b[i]<<" ",d[i]+=b[i],b[i]=0;
		cout<<endl;
	}
	for(int i=1;i<=m;i++)cout<<d[i]<<" ";
	return 0;
}
