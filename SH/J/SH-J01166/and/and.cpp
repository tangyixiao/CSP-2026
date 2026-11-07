#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,m,maxb=0;
ll a[200002],b[100],ans=1<<31-1;
int lg(ll l){
	ll s=0;
	while(l!=1){
		l=l>>1;
		s++;
	}
	return s;
}
//void sch(ll l,ll r,int cnt){
//	ll biao[m][r-l+1]; 
//	
//}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin<<n<<m;
	for(ll i=0;i<n;i++){
		cin<<a[i];
		int k=lg(a[i]);
		b[k]++;
		maxb=max(k,maxb);
	}
	sort(a,a+n);
	if(m==1)cout<<a[n-1];
	else if(m==n){
		for(int i=0;i++;i<n)ans&=a[i];
		cout<<ans;
	}
	else{
		int k=0;
		while(k<m)k+=b[maxb--];
		for(int ii=n-1;ii>=n-m;ii--)ans&=a[ii];
		cout<<ans;
	}
	return 0;	
}

