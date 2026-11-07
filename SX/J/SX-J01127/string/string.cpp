#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n , zong=0 , ans=0;
	cin>>n;
	long long a[n];
	char c[n];
	for(long long i=0;i<n;i++)
	{
	cin>>a[i]>>c[i];
	zong+=a[i];
	}
	long long g=0;
	long long s=0;
	string d[zong];
	for(long long i=0;i<n;i++){
		for(long long j=0;j<a[i];j++){
			d[s]=c[i];s++;
		}
	}
	while(g<=(zong-g-1)){
		if(d[g]!=d[zong-g-1]){ans++;}
		g++;
	}
	cout<<ans;
	return 0;
}
