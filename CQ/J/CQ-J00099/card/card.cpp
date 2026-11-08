#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int n,m,a[500005],ans[300005];
bool flag[300005];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(n>=100000&&a[i]!=a[i-1]){
			ans[a[i-1]]=i-1;
		}
	}
	if(m==2){
		ans[1]=0;
		ans[2]=0;
		ans[a[n]]=n;
		for(int i=1;i<n;i++){
			if(a[i]!=a[n]){
				ans[a[i]]++;
			}
			else{
				break;
			}
		}
		cout<<ans[1]<<" "<<ans[2];
		return 0;
	}
	if(n>=100000){
		ans[a[n]]=n;
		for(int i=1;i<=m;i++){
			cout<<ans[i]<<" ";
		}
		return 0;
	}
	for(int k=1;k<=n;k++){
		stack<int> st;
		for(int i=k;i<=n;i++){
			if(i==k){
				st.push(i);
				flag[a[i]]=1;
			}
			else{
				if(flag[a[i]]){
					while(a[st.top()]!=a[i]){
						flag[a[st.top()]]=0;
						st.pop();
					}
					st.pop();
					st.push(i);
					flag[a[i]]=1;
				}
				else{
					st.push(i);
					flag[a[i]]=1;
				}
			}
		}
		while(!st.empty()){
			flag[a[st.top()]]=0;
			ans[a[st.top()]]++;
			st.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
/*
我愿以hfbz初二2班体育老师王鬼头一辈子找不到女朋友为代价换T3,T4数据水点,评测机跑的快点 
*/
