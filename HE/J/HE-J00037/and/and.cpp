#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m,n_i,n_v[500000],n_n;
ll ans;

int q_pow(int a,int p){
	ll res;
	while(p>0){
		if(p&1) res*=a;
		a*=a;
		p/=2;
	}
	return res;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	//-------------------------------------
	ans=q_pow(2,30)-1;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%ld",&n_i);
		n_v[i]=n_i;
	}
	sort(n_v+1,n_v+n+1);
	n_n=n;
	while(1){
		int f=1;
		for(int i=2;i<=ans;i*=2){
			if(n_v[n_n]==i){
				n_n--;
				f=0;
				break;
			}
		}
		if(f==1) break;
	}
	for(int i=1;i<=m;i++){
		ans&=n_v[n_n--];
	}
	cout<<ans;
	//-------------------------------------
	fclose(stdin);
	fclose(stdout);
	return 0;
}  
