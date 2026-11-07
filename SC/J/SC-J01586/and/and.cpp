#include<bits/stdc++.h>
using namespace std;
vector<int> vec;
int n,m;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>n>>m;
	for(int i=0;i<n;i++){
		int t;
		cin>>t;
		vec.push_back(t);
	}
	sort(vec.begin(),vec.end(),greater<int>());
	unsigned long long res=vec[0];
	for(int i=1;i<m;i++){
		res=res&vec[i];
//		cout<<res<<' '<<vec[i]<<endl;
	}
	cout<<res;
	return 0;
}