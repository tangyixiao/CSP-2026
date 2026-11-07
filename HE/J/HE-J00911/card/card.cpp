#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],cnt[300005]={0};
stack<int> s;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		bool flag[m+1]={false};
		for(int j=i;j<=n;j++){
			if(flag[a[j]]==false){
				s.push(a[j]); 
				flag[a[j]]=true;
}
			else{
				while(s.top()!=a[j]){
					flag[s.top()]=false;
					s.pop();
}}}
		for(int j=1;j<=n;j++) if(flag[j]==true) cnt[j]++;
}
	for(int i=1;i<=m;i++) cout<<cnt[i]<<" ";
	return 0;
} 
