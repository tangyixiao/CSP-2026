#include<bits/stdc++.h>
using namespace std;
int n,m,sum;
long long a=1,ans,logn[35];
bool k[200005][35],v[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	for(int i=1;i<=31;i++){
		logn[i]=a;
		a*=2;
	}
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a;
		long long h=a;
		int cnt=0;
		while(h){
			cnt++;
			k[i][cnt]=h%2;
			h/=2;
		}
	}
	for(int i=31;i>0;i--){
		sum=0;
		for(int j=1;j<=n;j++){
			if(v[j]==0)
			sum+=k[j][i];
		}
		if(sum>=m){
			for(int j=1;j<=n;j++)
				if(k[j][i]==0 && v[j]==0)
				v[j]=1;
			ans+=logn[i];
		}
	}
	cout<<ans;
	return 0; 
}
