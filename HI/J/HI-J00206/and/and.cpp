#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int m,n;
	cin>>n>>m;
	vector<long long> v;
	while(n--){
		int x;
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	
	vector<long long> c;
	for(int i=0;i<v.size()-1;i++){
		int x=v[i+1]-v[i];
		c.push_back(x);
	}
	long long minn=1e10+10;
	int mii=0;
	for(int i=0;i<c.size();i++){
		if(minn>c[i]){
			mii=i;
			minn=c[i];
		}
	}
	long long a=v[mii],b=v[mii+1];
	long long ans=a&b;
	cout<<ans;
	return 0;
}
