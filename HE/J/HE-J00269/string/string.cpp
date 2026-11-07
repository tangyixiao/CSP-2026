#include<bits/stdc++.h>
using namespace std;
const int N=2e5+60;
long long n,a[N],sum;
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	vector<char>b;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
		for(int j=0;j<a[i];j++){
			b.push_back(c[i]);
		}
	}
	for(int i=0;i<n/2+1;i++){
		if(b[i]!=b[n-i]){
			sum++;
		}
	}
	cout<<sum;
	return 0;
}
