#include <bits/stdc++.h>
using namespace std;
const int N=200500;
long long a[N],n,cnt,ans;
string b;
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin>>n;
	for(long long i=0;i<n;i++){
		cin>>a[i]>>b[i];
		cnt+=a[i];
	}
	for(long long o=0,j=n-1,i=0;o<cnt/2;){	
		o++;	
		if(a[i]==0){
			i++;
		}
		if(a[j]==0){
			j--;
		}
		a[j]--;
		a[i]--;
		if(b[i]!=b[j]){
			ans++;
		}
		
	}
	cout<<ans;
	return 0;
}
