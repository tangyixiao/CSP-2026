#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500005],sum,ma,m1;
int main(){
	freopen("crystal.in","r",stdin);
	freopen("crystal.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n,greater<long long>());
	for(long long i=1;i<=n;i++){
		m1=m;
		sum=0;
		for(long long j=i;j<=n;j++){
			if((a[i]-a[j])<=m1){
				sum++;
			    m1=m1-(a[i]-a[j]);
	            if(m1<=0){
				    break;
			    }
			}else{
				break;
			}
			
		}
		ma=max(sum,ma);
	}
	cout<<ma;
	return 0;
} 
