#include<bits/stdc++.h>
#define int long long 
using namespace std;
int q,w,e,a[500005],v[500005];
signed main( ){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>q;
	for(int i=1;i<=q;i++){
		cin>>a[i];
	}
	for(int i=1;i<=q;i++){
		vector<int>vc;
		vc.clear();
			for(int j=i;j<=q;j++){
				vc.emplace_back(a[j]);
		
				auto l=lower_bound(vc.begin(),vc.end(),a[j])-vc.begin();
				if(l!=vc.size()&&vc[l]==a[j]){
					vector<int>t;
					t.clear();
					for(int k=l;k<vc.size();k++){
						t.emplace_back(vc[k]);
					}
					vc=t;
				}
		
			}
			auto ll=lower_bound(vc.begin( ),vc.end(),i)-vc.begin();
			cout<<ll<<" ";
	}
	for(int i=1;i<=q;i++){
		cout<<v[i]<<" ";
	}
	return 0;
} 

