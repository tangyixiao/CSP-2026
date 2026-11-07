#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
bool vis[200005];
int ans = 0;
void dfs(int dep,int sum){
	if(dep>m){
		ans = max(ans,sum);
		return;
	}
	for(int i = 1;i<=n;i++){
		if(!vis[i]){
			vis[i] = true;
			if(sum == 0){
				dfs(dep+1,a[i]);
			}else{
				dfs(dep+1,sum&a[i]);
			}
			vis[i] = false;
		}
	}
}
struct ss{
	int v;
	string s;
};
bool f(ss a,ss b){
	return a.s>b.s;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i = 1;i<=n;i++){
		cin>>a[i];
	}
//	if(n<=20){
//		dfs(1,0);
//		cout<<ans;
//	}else if(m == 1){
//		int mx = 0;
//		for(int i = 1;i<=n;i++){
//			mx = max(mx,a[i]);
//		}
//		cout<<mx;
//	}else if(m == n){
//		int ans = a[1];
//		for(int i = 2;i<=n;i++){
//			ans&=a[i];
//		}
//		cout<<ans;
//	}else if(m == 2){
//		int ans = 0;
//		for(int i = 1;i<=n;i++){
//			for(int j = 1;j<=n;j++){
//				ans = max(ans,(a[i]&a[j]));
//			}
//		}
//		cout<<ans;
//	}else{
//		
//	}
	vector<ss>t(n+1);
	int mx = 0;
	for(int i = 1;i<=n;i++){
		int tmp = a[i];
		string st = "";
		while(tmp!=0){
			st+=((tmp%2)+'0');
			tmp/=2;
		}
		reverse(st.begin(),st.end());
		t[i].s = st;
		t[i].v = a[i];
		//cout<<st<<" ";
		int tp = st.size();
		mx = max(mx,tp);
	}
	for(int i = 1;i<=n;i++){
		while(t[i].s.size()<mx){
			t[i].s = "0"+t[i].s;
		}
	}
	sort(t.begin()+1,t.end(),f);
	//cout<<t[1].s<<" "<<t[2].s<<endl;
	int ans = t[1].v;
	for(int i = 2;i<=m;i++){
		ans&=t[i].v; 
	}
	cout<<ans;
}
