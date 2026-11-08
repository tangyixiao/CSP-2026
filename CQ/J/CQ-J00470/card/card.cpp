#include<bits/stdc++.h>
#define int long long
using namespace std;
	int n,m;
	int cnt[300001],a[500001],v[300001],ans[300001];
	stack<int> s,ys;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=n;i>=1;i--){
//	cout<<"i:"<<i<<endl;
		if(v[a[i]]){
			if(cnt[a[i]]%2){
				
			}
			while(1){
				if(s.top()==a[i]){
//				cout<<"µ¯³ö"<<s.top()<<endl;
					s.pop();
					break;
				}
				v[s.top()]=0;

				s.pop();
			}
		}
		s.push(a[i]);
		ys.push(a[i]);
		v[a[i]]=1;
		cnt[a[i]]++;
		stack<int> s1=s;
		while(!s1.empty()){
			ans[s1.top()]++;
//			cout<<s1.top()<<" ";
			s1.pop();
		}
//		cout<<endl;
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
/*
4 3
1 2 1 3
*/
