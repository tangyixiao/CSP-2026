#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005][35],x[200005];
int ans=2147483647;
int maxn=-1,d=0,now;
bool flag[200005][2],tag[200005],f,ff;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>x[i];
		int xx=x[i];
		int t[105]={1},tot=0;
		while(xx){
			t[++tot]=xx%2;
			xx/=2;
		}
		for(int j=0;j<=tot;j++){
			a[i][j]=t[j];
		}
		maxn=max(maxn,tot);
		flag[i][(d+1)%2]=1;
	}
	
	for(int i=maxn;i>=0;i--){
		int cnt=0;
		for(int j=1;j<=n;j++){
			flag[j][d]=0;
		}
		for(int j=1;j<=n;j++){
			if(a[j][i]&&flag[j][(d+1)%2]&&!tag[j]){
				flag[j][d]=1;
				cnt++;
			}
		}
		if(cnt>m){
			if(i!=0)
				f=1;
			else
				for(int j=1;j<=n;j++){
					if(flag[j][d])tag[j]=1;
				}
		}else if(cnt==m){
			for(int j=1;j<=n;j++){
				if(flag[j][d]){
					tag[j]=1;
				}
			}
			break;
		}else if(!f){
			for(int j=1;j<=n;j++){
				flag[j][d]=1;
			}
		}else{
			for(int j=1;j<=n;j++){
				if(flag[j][d]){
					tag[j]=1;
					m--;
				}
			}
			d=(d+1)%2;
		}
		d=(d+1)%2;
	}
	for(int i=1;i<=n;i++){
		if(tag[i])ans&=x[i];
	}
	cout<<ans<<"\n";
	return 0;
}

