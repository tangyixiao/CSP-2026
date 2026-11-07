#include <bits/stdc++.h>
using namespace std;

long long ans,n;
string tng;
char chr;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int x;
	for(int i =1;i<=n;i++){
		cin>>x>>chr;
		for(int i =1;i<=x;i++){
			tng+=chr;
		}
	}
	long long l=tng.length();
	for(long long i =1;i<=l/2;i++){
		if(tng[i-1]!=tng[l-i]){
			ans++;
		}
	}
	cout<<ans;
	
	return 0;
}
