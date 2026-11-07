#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],cnt[500005],p[500005];
bool b[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int j=1;j<=n;j++){
		int c=0;
		memset(p,0,sizeof(p));
		memset(b,0,sizeof(b));
		for(int i=j;i<=n;i++){
			bool bj=1; 
			int pos;
			for(int k=1;k<=c;k++){
				if(p[k]==a[i]){
					bj=0;
					pos=k;
					break;
				}
			}		
			if(bj){
				p[++c]=a[i];
				b[a[i]]=1;
			}else{
				for(int k=pos+1;k<=c;k++){
					p[k]=0;
					b[p[k]]=0;
				}	
				c=pos;
			}
		}
		for(int i=1;i<=c;i++)
			cnt[p[i]]++;
	}
	for(int i=1;i<=m;i++)
		cout<<cnt[i]<<" ";
	return 0;
}
