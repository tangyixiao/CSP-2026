#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long long ans=0,d=0;
	int n;
	cin>>n;
	vector<int>a(n);
	vector<char>b(n);
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
		d+=a[i];
	}
	d/=2;
	int l=0,r=n-1;
	int x=a[l],y=a[r];
	while(d--){
		char p=b[l],q=b[r];
		if(p!=q){
			ans++;
		}
		x--;y--;
		if(x==0){
			l++;
			x=a[l];
		}
		if(y==0){
			r--;
			y=a[r];
		}
	}
	cout<<ans<<endl;
	return 0;
}
