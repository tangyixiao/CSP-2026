#include<bits/stdc++.h>
using namespace std;
int a[200010],a_[200010],ans=1073741823,n,m,f,sm;
bool t[32][200010];
bool want[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){ //2e5
		scanf("%d",&a[i]);
		f=0,a_[i]=a[i];
		while(a[i]) t[f++][i]=a[i]%2,a[i]/=2;
	}int i=31;
	while(i--){ //30*4e5
		sm=0;
		for(int j=0;j<n;j++) sm+=t[i][j],want[j]=t[i][j];
		if(sm>=m){
			while(sm>m){
				i--;
				int sm_=0;
				for(int j=0;j<n;j++) if(want[j]) sm_+=t[i][j];
				if(sm_<m) continue;
				else for(int j=0;j<n;j++) if(want[j]&&(!t[i][j])&&sm>m) sm--,want[j]=0;
			}break;
		}
	}for(int i=0;i<n;i++) if(want[i]) ans&=a_[i];
	cout<<ans;
	return 0;
}
