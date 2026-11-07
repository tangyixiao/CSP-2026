#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,a[N];
char c[N];
long long ans,sum;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i = 1;i<=n;i++){
		cin>>a[i]>>c[i];
		sum+=a[i];
	}
	int j = n;
	for(int i = 1;i<=n;i++){
		if(i>=j) break;
		while(a[i]>=a[j]){
			a[i]-=a[j];
			if(c[i]!=c[j]) ans+=a[j];
			j--;
			if(i>=j) break;
		}
		if(i>=j) break;
		a[j]-=a[i];
		if(c[i]!=c[j]) ans+=a[i];
	}
	cout<<ans;
	return 0;
}
