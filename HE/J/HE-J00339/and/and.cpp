#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,m;
long long a[N],sum;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(i==1)sum=a[1];
		else sum=sum&a[i];
	}
	sort(a+1,a+n+1);
	if(m==1){
		cout<<a[n];
		return 0;
	}
	if(m==n){
		cout<<sum;
		return 0;
	}
	for(int i=n;i>=1;i--){
		if(m>0){
			if(i==n){
				sum=a[n];
			}else{
				sum&=a[i];
			}
			m--;
			
		}else{
			cout<<sum;
			return 0;
		}
	}
	cout<<sum;
return 0;
}
