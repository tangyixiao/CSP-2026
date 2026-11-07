#include <bits/stdc++.h>
using namespace std;
int n,m;
long long a[200001];
bool pd[21];
long long baolians=0;
bool allmi(){
	for(int i=1;i<=n;i++){
		bool pd=false;
		long long cheng=1;
		for(int j=1;j<=21;i++){
			if(a[i]==cheng-1){
				pd=true;
				break;
			}
			cheng*=2;
		}
		if(!pd){
			return false;
		}
	}
	return true;
}
bool miall(){
	bool pd=false;
	for(int i=0;i<=20;i++){
		if(pow(2,i)==n){
			pd=true;
			break;
		}
	}
	if(!pd){
		return false;
	}
	for(int i=1;i<=n;i++){
		if(a[i]!=i-1){
			return false;
		}
	}
	return true;
}
long long twom(){
	long long js=0;
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(i!=j){
				js=max(js,a[i]&a[j]);
			}
		}
	}
	return js;
}
void dfs(int now,int ci){
	if(ci==0){
		long long js=-1;
		for(int i=1;i<=n;i++){
			if(pd[i]){
				if(js==-1){
					js=a[i];
				}else{
					js&=a[i];
				}
			}
		}
		baolians=max(baolians,js);
		return ;
	}
	if(now==n+1){
		return ;
	}
	pd[now]=true;
	dfs(now+1,ci-1);
	pd[now]=false;
	dfs(now+1,ci);
	return ;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n<=20){
		//²âÊÔµã 1-5 25pts
		dfs(1,m);
		cout<<baolians;
	}else if(m==1){
		//²âÊÔµã 6 5pts
		long long ans=0;
		for(int i=1;i<=n;i++){
			ans=max(ans,a[i]);
		}
		cout<<ans;
	}else if(m==n){
		//²âÊÔµã 7 5pts
		long long ans=a[1];
		for(int i=1;i<=n;i++){
			ans&=a[i];
		}
		cout<<ans;
	}else if(m==2){
		//²âÊÔµã 8-10 15pts
		cout<<twom();
	}else if(m==n-1){
		//²âÊÔµã 11-12  0pts fail
		cout<<0;
	}else if(allmi() || miall()){
		//²âÊÔµã 13 5pts
		//²âÊÔµã 14-15 10pts 
		sort(a+1,a+n+1);
		long long ans=a[n];
		for(int i=n-1;i>=n-m+1;i--){
			ans&=a[i];
		}
		cout<<ans;
	}else{
		//²âÊÔµã 16-17 10pts
		int cntzero=0,cntone=0,cnttwo=0,cntthree=0;
		for(int i=1;i<=n;i++){
			if(a[i]==0){
				cntzero++;
			}else if(a[i]==1){
				cntone++;
			}else if(a[i]==2){
				cnttwo++;
			}else if(a[i]==3){
				cntthree++;
			}else{
				cout<<0;
				return 0;
			}
		}
		if(cntthree>=m){
			cout<<3;
		}else if(cntthree+cnttwo>=m){
			cout<<2;
		}else if(cntthree+cntone>=m){
			cout<<1;
		}else{
			cout<<0;
		}
	}
	return 0;
}
