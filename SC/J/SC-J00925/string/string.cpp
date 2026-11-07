#include <bits/stdc++.h> 
using namespace std;
string c;
long long n,a[200001],sum,ans,b1,b2,s;
char ci[200001];
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		cin>>a[i]>>ci[i];
		sum+=a[i];
		//a[i]=sum;
		for(int j=0;j<a[i];j++){
		c=c+ci[i];		
	}
	}
		for(int i=0;i<(n+1)/2;i++){
			if(c[i]!=c[sum-i]){
				ans++;
				c[sum-i]=c[i];
			}
		}
		cout<<ans;
	return 0;
}