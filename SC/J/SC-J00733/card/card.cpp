#include<iostream>
#include<stack>
#define ll long long
using namespace std;
const int N=5e5+5;
struct node{
	int x,id;
};
stack<int> st;
int n,m;
int a[N],ans[N],b[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(b[a[j]]){
				while(!st.empty()){
					int t=st.top();
					st.pop();
					b[t]--;
					if(t==a[j]) break;
				}
			}
			st.push(a[j]);
			b[a[j]]++;
		}
		while(!st.empty()){
			int t=st.top();
			st.pop();
			ans[t]++;
			b[t]--;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}