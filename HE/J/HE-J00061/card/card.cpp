#include <bits/stdc++.h>
using namespace std;
const int MaxN=5e5+5;
int a[MaxN],ans[MaxN];
bool b[MaxN];
stack<int> st,st2,st3;
int n,m,cnt=0;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	
	while(cnt<n){
	memset(b,0,sizeof(b));
		for(int i=cnt;i<n;i++){
			int nox=a[i];
			if(!b[nox]){
				st.push(nox);
				b[nox]=1;
			}
			else{
				while(st.top()!=nox){
					b[st.top()]=0;
					st.pop();
				}
			}
		}
		st2=st;
		cnt++;
		while(!st2.empty()){
			ans[st2.top()]++;
			st2.pop();
		}
		while(!st.empty()){
			st.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout << ans[i] << " ";
	}
	return 0;
}
