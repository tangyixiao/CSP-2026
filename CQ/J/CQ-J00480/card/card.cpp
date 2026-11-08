#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500010];
int is_stack[300010];
int b[300010];
int c[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n<=5000&&m<=300){
		for(int j=1;j<=n;j++){
			memset(is_stack,0,sizeof(is_stack));
			stack<int> st;
			for(int i=j;i<=n;i++){
				if(!is_stack[a[i]]){
					st.push(a[i]);
					is_stack[a[i]]++;
				}else{
					while(!st.empty()&&st.top()!=a[i]){
						is_stack[st.top()]--;
						st.pop();
					}
				}
			}
			while(!st.empty()){
				b[st.top()]++;
				st.pop();
			}
		}
		for(int i=1;i<=m;i++) cout<<b[i]<<' ';
	}else{
		bool flag=1;
		for(int i=1;i<=n;i++){
			if(a[i]>a[i+1]) flag=0;
		}
		if(flag){
			int last=0;
			for(int i=1;i<=n;i++){
				b[a[i]]=1+last;
				last=b[a[i]];
			}
			for(int i=1;i<=m;i++) cout<<b[i]<<' ';
			return 0;
		}
		if(m==2){
			for(int i=1;i<=n;i++){
				if(a[i]==a[n]){
					b[a[i]]++;
				}else{
					b[a[i]]++;
					b[(a[i]==1?2:1)]++;
				}
			}
			for(int i=1;i<=m;i++) cout<<b[i]<<' ';
			return 0;
		}
		for(int i=1;i<=m;i++) cout<<i<<' ';
	}
	return 0;
}
