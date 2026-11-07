#include<bits/stdc++.h>
#define int long long
using namespace std;
int lg[32];
int vis[32];
int lst[300000][2];
int tst[300000][32];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,f,cnt,tnt=0;
	cin>>n>>m;
	lg[0]=1;
	lst[0][1]=1;
	lst[n+1][0]=n;
	for(int i=1;i<=30;i++){
		lg[i]=lg[i-1]*2;
	}
	for(int i=1;i<=n;i++){
		cin>>f;
		lst[i][0]=i-1;
		lst[i][1]=i+1;
		cnt=0;
		//cout<<f<<endl;
		while(f){
			if(f&1==1){
				tst[i][cnt]=1;
				vis[cnt]++;
			}
			f=f/2;
			cnt++;
		}
	}
	//for(int i=1;i<=n;i++){
	//	for(int j=30;j>=0;j--){
	//		cout<<tst[i][j];
	//	}
	//	cout<<endl;
	//}
	for(int i=30;i>=0;i--){
		if(vis[i]<m){
			continue;
		}
		tnt+=lg[i];
		int j=0;
		while(j<=n){
			j=lst[j][1];
			if(j==n+1){
				break;
			}
			if(tst[j][i]==0){
				lst[lst[j][0]][1]=lst[j][1];
				lst[lst[j][1]][0]=lst[j][0];
				for(int k=i;k>=0;k--){
					//cout<<tst[j][k]<<' '<<j<<endl;
					if(tst[j][k]==1){
						vis[k]--;
					}
				}
			}
		}
	}
	cout<<tnt<<endl;
	return 0;
}
