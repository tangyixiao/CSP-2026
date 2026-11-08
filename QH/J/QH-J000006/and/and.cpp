#include<bits/stdc++.h>
using namespace std;
#define int long long 
const int N=1e6+10;
vector<int> a;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int mx=0;
	a.resize(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
		int lg=log(a[i])+1;
		mx=max(mx,lg);
	}
	int ans=0;
	for(int i=32;i>=0;i--){
		vector<int> t;
		for(int j=0;j<a.size();j++){
			if((a[j]>>i)&1==1){
				t.push_back(a[j]);
			}
		}
		if(t.size()>=m){//当前位可以为1，贪心选择最大位 
		    ans+=(1<<i);
			a.clear();
			int txt=t[0];
			for(int j=0;j<t.size();j++){
				a.push_back(t[j]);
			} 
		}
		
	}
//    ans=a[0];
//	for(int i=1;i<a.size();i++){
//		ans&=a[i];
//	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
