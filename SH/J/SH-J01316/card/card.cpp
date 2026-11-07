#include<bits/stdc++.h>
#define int long long
#define N 500005
using namespace std;
int n,m,a[N],po[N],t[N],ans[N];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(po[a[i]]!=0){
			t[i]=po[a[i]];
			po[a[i]]=i;
		}else po[a[i]]=i;
	}
	for(int st=1;st<=n;st++){
		vector<int> vec;
		vector<bool> aaa(m+5,0);
		for(int i=st;i<=n;i++){
			if(aaa[a[i]]&&vec.size()){
				while(vec.size()&&vec.back()!=a[i]){
					aaa[vec.back()]=0;
					vec.pop_back();
				}
			}else vec.push_back(a[i]);
			aaa[a[i]]=1;
//			cout<<s.count(a[i])<<"faobgbigpbuige";
//			for(int asdf:vec)cout<<asdf<<" ";
//			cout<<"\n";
		}
//		cout<<"\n";
		for(auto i:vec){
			ans[i]++;
//			cout<<i<<" ";
		}
//		cout<<"\n\n\n";
	}
//	cout<<"\n";
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
} 


