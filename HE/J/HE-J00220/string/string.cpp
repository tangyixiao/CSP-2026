#include<bits/stdc++.h>
using namespace std;
long long a[1000000];char c[1000000];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;long long ans=0,l=0;cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];l+=a[i];
	}
	for(long long i=1;i<=l/2;i++){
		long long sum=a[1],cont=1;
		while(i>sum){
			sum+=a[cont++];
		}
		if(c[cont]!=c[n+1-cont]){
			ans++;
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
