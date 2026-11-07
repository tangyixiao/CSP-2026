#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m,a[N];
bool flag[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	vector<int> vec;
	for(int i=1;i<=n;i++)	cin>>a[i];
	int res=0;
	for(int i=29;i>=0;i--){
		vector<int> v1,v0;
		for(int j=1;j<=n;j++){
			if(flag[j])	continue;
			if((a[j]>>i)&1)	v1.push_back(j);
			else	v0.push_back(j);
		}
		if(v1.size()<m)	continue;
		for(int j=0;j<v0.size();j++)	flag[v0[j]]=true;
		res+=(1<<i);
	}
	cout<<res;
	return 0;
}