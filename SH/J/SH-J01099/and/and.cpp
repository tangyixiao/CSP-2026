#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll n,m,ans,zgw;
ll a[200005];
int x[32];
int y[32];
int z[32];
int zd[32];
ll wand(ll p,ll q){
	for(int i=0;i<32;i++){
		x[i]=0;y[i]=0;z[i]=0;
	}
	int i=0;
	while(p>0){
		x[i]=p%2;
		p/=2;i++;
	}
	int j=0;
	while(q>0){
		y[j]=q%2;
		q/=2;j++;
	}
	for(int i=0;i<32;i++){
		z[i]=(x[i]+y[i])/2;
	}
	ll sum = 0;
	for(int i=0;i<32;i++){
		if(z[i]==1){
			sum+=ll(pow(2,i));
		}
	}return sum;
}
int main(){
	//freopen("and.in","r",stdin);
	//freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	ans=a[n];
	int i=0;
	while(ans>0){
		zd[i]=ans%2;
		ans/=2;i++;
	}
	int zgw=i;
	//cout<<zgw<<endl;
	int num=0;
	while(zgw>=0){
		int f=ll(pow(2,zgw-1));
		num=0;
		//cout<<a[n]<<" "<<f<<endl;
		for(int i=n;a[i]>=f;i--){
			num++;
			
		}
		//cout<<zgw<<" "<<num<<endl;
		if(num>=m){
			for(int i=0;i<m;i++){
				ans=a[n];
				ans=wand(ans,a[n-i]);
			}
			cout<<ans;
			return 0;
		}
		else{
			zgw--;
			num=0;
			for(int i=n;a[i]>=f;i--){
				num++;
				a[i]-=f;
			}
			sort(a+1,a+n+1);	
		}
		
	}
	cout<<ans;
	//cout<<wand(n,m);
	return 0;
} 
