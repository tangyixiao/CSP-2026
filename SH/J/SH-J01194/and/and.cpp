#include <bits/stdc++.h>
using namespace std;
int and1(long long c,long long d){
	int x=0;
	int x1=1;
	while(c!=0 && d!=0){
		if(c%2==d%2 && c%2==1) x+=x1;
		x1*=2;
		c/=2;
		d/=2;
	}
	return x;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[200005];
	int b[200005];
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=-1;
	}
	sort(a,a+n);
	if(m==1){
		cout<<a[n-1];
		return 0;
	}
	int maxi=0;
	if(m==2){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(i==j) continue;
				if(and1(a[i],a[j])>=maxi) maxi=and1(a[i],a[j]);
			}
		}
		cout<<maxi;
		return 0;
	}
	int ans=a[0];
	if(m==n){
		for(int i=1;i<n;i++){
			ans=and1(ans,a[i]);
		}
		cout<<ans;
		return 0;
	}
	return 0;
} 
