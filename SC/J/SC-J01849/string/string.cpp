#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int a[N];
string b, c;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		cin>>b[i];
	}
	int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<a[i];j++){
			c[cnt]=b[i];
			cnt++;
		}
	}
	int ans=0;
	for(int i=0;i<cnt/2;i++){
		if(c[i]!=c[cnt-i-1]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}