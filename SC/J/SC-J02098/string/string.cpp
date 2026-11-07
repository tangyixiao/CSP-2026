#include<bits/stdc++.h>
using namespace std;
vector< pair<long long,char> > a;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	vector<char> a;
	long long sum=0;
	for(int i=1; i<=n; i++) {
		long long num;
		char s;
		cin>>num;
		sum+=num;
		cin>>s;
		while(num--){
			a.push_back(s);
		}
	}
	long long  cnt=0;
	for(int i=0;i<sum/2;i++){
		if(a[i]!=a[sum-i-1])cnt++;
	}
	cout<<cnt;
}