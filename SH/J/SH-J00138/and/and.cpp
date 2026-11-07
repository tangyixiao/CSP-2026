#include<bits/stdc++.h>
using namespace std;
const int N=200005;
int n,m;
long long a[N];
bool cmp(long long a,long long b){
	return a<b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		long long mx=INT_MIN;
		for(int i=1;i<=n;i++){
			if(a[i]>mx){
				mx=a[i];
			}
		}
		cout<<mx;
		return 0;
	}
	else if(m==n){
		long long res=a[1];
		for(int i=2;i<=n;i++){
			res=res&a[i];
		}
		cout<<res;
		return 0;
	}
	else if(m==2){
		int mx=INT_MIN;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i!=j){
					long long res=a[i]&a[j];
					if(res>mx){
						mx=res;
					}
				}
			}
		}
		cout<<mx;
		return 0;
	}
	sort(a+1,a+n+1,cmp);
	cout<<a[m-1];
	return 0;
}
