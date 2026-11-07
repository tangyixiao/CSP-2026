#include<bits/stdc++.h>
#define N 1000200
#define S 3000
#define int long long
using namespace std;
int n,x,cnt;
string a,y;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x>>y;
		while(x--) a+=y;
	}
	int l=0,r=a.size()-1;
	while(l<=r){
		if(a[l]!=a[r]){
			cnt++;
		}
		l++;
		r--;
	}
	cout<<cnt<<endl;
	return 0;
}
