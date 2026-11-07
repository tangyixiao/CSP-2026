#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N=5e5+5;

int a[N];
int ans[N];
int mp[N];
int l[N],r[N];
stack<int> st;
int f[N];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++) f[j]=0;
		while(!st.empty()) st.pop();
		for(int j=i;j<=n;j++){
			if(f[a[j]]){
				while(!st.empty()&&st.top()!=a[j]){
					f[st.top()]--;
					st.pop();
				}
			}
			else{
				st.push(a[j]);
				f[a[j]]++;
			}
		}
		for(int j=1;j<=m;j++){
			if(f[j]) ans[j]++;
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}