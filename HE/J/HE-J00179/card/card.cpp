#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int n,m,a[N],b[N],f[N],t[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		memset(b,-1,sizeof(b));
		memset(f,0,sizeof(f));
		//cout<<"µÚ"<<i<<"ÂÖ\n";
		for(int j=i;j<=n;j++){
			if(b[a[j]]!=-1&&f[b[a[j]]]!=-1){
				int x=b[a[j]];
				//cout<<x<<"~"<<j-1<<"\n";
				for(int k=x;k<j;k++){
					f[k]=-1;
				}
			}
			b[a[j]]=j;
		}
		for(int j=i;j<=n;j++){
			if(f[j]!=-1){
				t[a[j]]++;
				//cout<<"»¨É«"<<a[j]<<"\n"; 
			}
		}
		
	}
	for(int i=1;i<=m;i++) cout<<t[i]<<" ";
	return 0;
}
