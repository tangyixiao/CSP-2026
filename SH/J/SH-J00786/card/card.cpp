#include<bits/stdc++.h>
using namespace std;
#define N 555555
void open(string s){
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}
struct seg{
	int l,r;
};
int n,m,a[N],cnt,ans[N],vis[N],p[N];
stack<int>s;
vector<seg>q;
int main(){
	open("card");
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	if(m<=2||n>=10000){
		for(int i=n;i>=1;i--)
			if(!vis[a[i]])s.push(i),vis[a[i]]=1;
			else{
				while(a[s.top()]!=a[i])vis[a[s.top()]]=0,s.pop();
				for(int j=s.top();j>i;j--){
					while(p[j])j=p[j];
					p[j]=i;
				}
				s.pop();s.push(i);
			}
		for(int i=1;i<=n;i++)
			ans[a[i]]+=i-p[i];
		for(int i=1;i<=m;i++)
			cout<<ans[i]<<' ';
		cout<<endl;
	}else{
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j++)
				if(!vis[a[j]])s.push(j),vis[a[j]]=1;
				else{
					while(a[s.top()]!=a[j])vis[a[s.top()]]=0,s.pop();
					s.pop();s.push(j);
				}
			while(s.size())++ans[a[s.top()]],vis[a[s.top()]]=0,s.pop();
		}
		for(int i=1;i<=m;i++)
			cout<<ans[i]<<' ';
		cout<<endl;
	}
}