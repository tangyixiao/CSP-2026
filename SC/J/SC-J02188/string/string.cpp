#include<bits/stdc++.h>
using namespace std;
int n;
char c[200010];
int a[200010];
string t;
long long sum;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		for(int j=1;j<=a[i];j++){
			t+=c[i];
		} 
		sum+=a[i];
	}
	long long cnt=0;
	for(int i=0;i<sum/2;i++){
		if(t[i]!=t[sum-i-1]){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}