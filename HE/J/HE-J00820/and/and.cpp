#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long cnt;
long long a[200005];
bool st[200005];
void dfs(int id){
	if(id>m){
		long long qcnt;
		bool fl=true;
		for(int i=1;i<=n;i++){
			if(st[i]){
				if(fl==true){
					qcnt=a[i];
					fl=false;
				}
				else{
					qcnt=(qcnt&a[i]);
				}
			}
		}
		cnt=max(cnt,qcnt);
		return ;
	}
	for(int i=1;i<=n;i++){
		if(!(st[i])){
			st[i]=true;
			dfs(id+1);
			st[i]=false;
		}
	}
}
bool cmp(long long t1,long long t2){
	return t1>t2;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n,cmp);
	if(n<=20){
		dfs(1);
	}
	if(m==1){
		for(int i=1;i<=n;i++){
			cnt=max(cnt,a[i]);
		}
	}
	if(m==n){
		cnt=a[1];
		for(int i=1;i<=n;i++){
			cnt=(cnt&a[i]);
		}
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cnt=max(cnt,(a[i]&a[j]));
			}
		}
	}	
	cout <<cnt;
	return 0;
}
