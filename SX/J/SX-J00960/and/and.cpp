#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int n,m,a[N];
string s=" ";
int t[N];
bool b[N];
bool op[N];
int mx=0LL;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		t[a[i]]++;
		if(t[a[i]]==2){
			cout<<a[i];
			return 0;
		}
	}
	sort(a+1,a+1+n);
	cout<<a[(n+1)/2];
	return 0;
}