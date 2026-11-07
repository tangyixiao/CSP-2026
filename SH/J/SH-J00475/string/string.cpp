#include<bits/stdc++.h>
using namespace std;
#define int long long
char c[200005];
int n,a[200005];
int sum=0;
char fc[100000005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
		for(int j=sum;j<sum+a[i];j++){
			fc[j]=c[i];
		}
		sum+=a[i];
	}
	int cnt=0;
	for(int i=0;i<sum/2;i++){
		if(fc[i]!=fc[sum-i-1]) cnt++;
	}
	cout<<cnt;
	return 0;
} 
