#include<bits/stdc++.h>
using namespace std;
const int N = 5e5+5;
int a[N],b[N],c[N];
long long cnt[N];
int n,m;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	bool flag = true;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[a[i]]++;
		if(flag && (a[i]<a[i-1])) flag = false;
	}
	if(flag){
		for(int i=1;i<=m;i++){
			b[i]+=b[i-1];
			cout<<b[i]<<' ';
		}
		return 0;
	}
	else{
		for(int i=1;i<=n;i++){
			stack<int> st;
			for(int j=i;j<=n;j++){
				if(c[a[j]]==1){
					bool flag = false;
					while(flag==false){
						int x = st.top();
						st.pop();
						c[x]--;
						if(x == a[j]){
							flag = true;
						}
					}
				}
				st.push(a[j]);
				c[a[j]]++;
			}
			for(int x=1;x<=m;x++){
				cnt[x]+=(c[x]>0 ? 1 : 0);
				c[x] = 0;
			}
		}
		for(int i=1;i<=m;i++){
			cout<<cnt[i]<<' ';
		}
	}
	return 0;
}
