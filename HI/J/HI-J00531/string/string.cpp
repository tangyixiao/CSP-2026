#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,a[200005],cnt=0;
	char c[200005];
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a[i] >> c[i];
	}
	long long i=1,j=n;
	char c1=c[1],c2=c[n];
	while(i<j){
		if(c[i]!=c[j]){
			cnt++;
		}
		a[i]--;
		a[j]--;
		if(a[i]==0)i++;
		if(a[j]==0)j--;
	}
	cout << cnt;
	return 0;
}
