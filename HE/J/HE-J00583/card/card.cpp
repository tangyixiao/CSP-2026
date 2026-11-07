#include<bits/stdc++.h>
using namespace std;
stack<int> st;
queue<int> q;
bool ok=false;
long long  a[10010],b[10010],cnt[10010],n,m;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","r",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		q.push(a[i]);
	}
	while(!q.empty()){
		if(b[q.front()]==1){
			int head=q.front();
			while(!st.empty()&&head!=st.top()){
			q.push(st.top());
			b[st.top()]--;
			st.pop();
			}
			q.pop();
			cnt[st.top()]++;
			ok==true;
		}
		else b[q.front()]++;
		st.push(q.front());
		q.pop();
		if(ok){
		while(!st.empty()){
			q.push(st.top());
			st.pop();
			}
		}
	}
	for(int i=1;i<=m;i++)cout<<cnt[i]<<" ";
	return 0;
}
