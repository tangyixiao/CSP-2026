#include<bits/stdc++.h>
using namespace std;
int n,m,yd[500005],yc[500005];
int shuchu[500005];
bool f[500005]; 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	//freopen("card.in","r",stdin);
	//freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>yd[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<=m;j++){			
			f[j]=0;
			yc[j]=0;
		}
		for(int j=i;j<=n;j++){
			yc[j]=yd[j];
			if(f[yd[j]]){
				bool fl=0;
				for(int k=1;k<=n;k++){
					if(fl) yc[k]=0;
					if(yc[k]==yd[j])
						fl=1;
				}
				continue;
			}
			f[yd[j]]=1;
		}
		for(int i=1;i<=n;i++){
			shuchu[yc[i]]++; 
		}		
	}
	for(int i=1;i<=m;i++){
		cout<<shuchu[i]<<" ";
	}
	return 0;
}
