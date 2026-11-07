#include<bits/stdc++.h>
using namespace std;
const int N=1e9+5;
int a[N];
char c[N];
map<char,int> mp;
long long sum;
int cnt;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>a[i]>>c[i];
		if(mp[c[i]]==0){
			mp[c[i]]=1;
			cnt++;
		}
		sum+=a[i];
	}
	cout<<sum/cnt;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
