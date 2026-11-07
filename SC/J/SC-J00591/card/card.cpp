#include<bits/stdc++.h>
using namespace std;
int a[500005];
int n,m;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int maxx=0;
	cin>>n>>m;
	int d[m+1];
	memset(d,0,sizeof(d));
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxx=max(maxx,a[i]);
	}
	for(int i=1;i<=n;i++){
		bool c[300005];
		bool b[300005];
		memset(c,1,sizeof(c));
		memset(b,0,sizeof(b));
		vector<int> v;
		v.push_back(a[i]);
		b[a[i]]=true;
		c[a[i]]=false;
		for(int j=i+1;j<=n;j++){
			if(b[a[j]]==true){
				for(int k=j-1;k>=1;k--){
					if(a[k]==a[j]){
						b[a[k]]=false;
						break;
					}else{
						b[a[k]]=false;
					}
				}
			}else{
				b[a[j]]=true;
				c[a[i]]=false;
			}
		}
		for(int i=1;i<=maxx;i++){
			if(c[i]==true){
				if(i<=m){
					d[i]++;
					cout<<i<<endl;
				}
			}
			
		}
		cout<<endl;
	}
	for(int i=1;i<=m;i++){
		cout<<d[i]<<" ";
	}
	return 0;
}