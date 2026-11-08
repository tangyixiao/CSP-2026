#include<bits/stdc++.h>
using namespace std;
string s1,s2,s3,s4;
long long n,m,cnt,sum=0,a[1000000],q;
int main(){
	freopen("and","r",stdin);
	freopen("and","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			cnt=(a[i]&a[j]);
			if(cnt>sum){
				sum=cnt;
			}
		}
	}
	cout<<sum;
	return 0;
}
