#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
int n,m,a[N],b[N][40],c[40];
int ma=-1e9,a2[40],ans;
bool cmp(int x,int y){
	return x>y;
}
void er(int w,int x){
	int k=1;
	while(x>0){
		if(x%2==0) b[w][k]=0;
		else b[w][k]=1,c[k]++;
		x/=2;
		k++;
	}
	ma=max(ma,k);
}
void js(int w1,int w2){
	for(int i=w1+1;i<w1+m;i++){
		for(int j=w2;j>=1;j--){
			if(b[w1][j]==b[i][j]&&b[w1][j]==1){
				b[w1][j]=1;
			}else{
				b[w1][j]=0;
			}
		}
	}
	for(int i=w2;i>=1;i--){
		ans+=b[w1][i]*a2[i];
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	ios::sync_with_stdio(0);
	a2[1]=1;
	for(int i=2;i<=32;i++){
		a2[i]=a2[i-1]*2;
	}
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n,cmp);
	for(int i=1;i<=n;i++){
		er(i,a[i]);
		
	}
	for(int i=32;i>=1;i--){
		if(c[i]>=m){
			for(int j=1;j<=n;j++){
				if(b[j][i]==1){
					js(j,i);
					cout<<ans;
					return 0;
				}
			}
		}
	}
	cout<<ans;
	return 0;
}
