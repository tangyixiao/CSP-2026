#include<bits/stdc++.h>
using namespace std;
int maxlg=0;
long long ans=0;
long long a[200005];
queue<int>q[41];
queue<int>fu;
void f(long long cnt,int id){
	if(cnt==0) return;
	long long po=1;
	int sun=1;
	while(true){
		po*=2;
		if(cnt<po){
			q[sun].push(id);
			maxlg=max(sun,maxlg);
			return;
		}
		sun++;
	}
	return;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	bool pd=1;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]==0) continue;
		f(a[i],i);
	}
	for(int i=maxlg;i>=1;i--){
		int siz=q[i].size();
		if(siz>=m){
			pd=0;
			ans+=pow(2,i-1);
			while(!q[i].empty()){
				fu.push(q[i].front());
				q[i].pop();
			}
			for(int j=i-1;j>=1;j--){
				while(!q[j].empty()){
					q[j].pop();
				}
				while(!fu.empty()){
					long long l=a[fu.front()];
					long long pp=pow(2,i-1);
					l-=pp;
					a[fu.front()]=l;
					f(l,fu.front());
					fu.pop();
				}
			}
		}
		else{
			while(!q[i].empty()){
				long long l=a[q[i].front()];
				long long pp=pow(2,i-1);
				l-=pp;
				a[q[i].front()]=l;
				f(l,q[i].front());
				q[i].pop();
			}
		}
	}
	if(pd) cout<<0;
	else cout<<ans;
	return 0;
}
