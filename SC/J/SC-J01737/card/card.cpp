#include<bits/stdc++.h>
#define LL long long
using namespace std;
const int N=5005;
map<int,bool> cnt;
stack<int> st;
int a[N],ans[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int k=1;k<=m;k++)cnt[k]=0;
		for(int j=i;j<=n;j++){
			if(cnt[a[j]]){
				while(st.top()!=a[j]){
					cnt[st.top()]=0;
					st.pop();
				}
			}
			else {
				st.push(a[j]);
				cnt[a[j]]=1;
			}
		}
		while(!st.empty()){
			ans[st.top()]++;
//			cout<<st.top()<<' ';
			st.pop();
		}
//		cout<<"\n";
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
	return 0;
}
/*
10 3
3 1 2 1 3 2 3 1 2 1
*/
