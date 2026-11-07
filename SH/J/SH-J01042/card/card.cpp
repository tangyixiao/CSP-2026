#include<bits/stdc++.h>
using namespace std;
#define fre(x) freopen(#x".in","r",stdin);freopen(#x".out","w",stdout)
const int N=5e5+19;
int n,m,a[N];
int lst[N],cnt[N];
stack<int> st;
signed main(){
	fre(card);
	cin>>n>>m;
	bool flag=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(i>1&&a[i]<a[i-1])flag=0;
	}
	if(flag){
		for(int i=1;i<=m;i++){
			cout<<n<<' ';
		}
		return 0;
	}
	for(int i=1;i<=n;i++){
		//for(int i=1;i<=m;i++)lst[i]=0;
		for(int j=i;j<=n;j++){
			if(lst[a[j]])while(st.top()!=a[j]){
				lst[st.top()]=0;
				st.pop();
			}else{
				st.push(a[j]);
				lst[a[j]]=1;
			}
		}
		while(st.size()){
			cnt[st.top()]++;
			lst[st.top()]=0;
			st.pop();
		}
	}
	for(int i=1;i<=m;i++)cout<<cnt[i]<<' ';
	return 0;
}
