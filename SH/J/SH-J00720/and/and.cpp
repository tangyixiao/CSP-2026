#include<bits/stdc++.h>
using namespace std;
int n,m;
struct hwbit{
	bool bits[35]={0};
	void up(const int x){
		bits[x]=1;
	}
	void down(const int x){
		bits[x]=0;
	}
	void set(int x){
		int i=0;
		do{
			bits[i]=x%2;
			x/=2;
			i++;
		}while(x);
	}
	long long get(){
		long long ans=0;
		int mod=1;
		for(int i=0;i<=31;i++){
			ans=ans+mod*bits[i];
			mod*=2;
		}
		return ans;
	}
};
hwbit hwbitand(const hwbit a,const hwbit b){
	hwbit tmp;
	for(int i=0;i<35;i++) tmp.down(i);
	for(int i=0;i<=31;i++){
		tmp.bits[i]=a.bits[i]&&b.bits[i];
	}
	return tmp;
}
void equal(hwbit &a,hwbit b){
	for(int i=0;i<=30;i++) a.bits[i]=b.bits[i];
}
hwbit arr[200005];
int maxn=0;
int getres(vector<int> cols){
	hwbit tmp;
	for(int i=0;i<=30;i++) tmp.up(i);
	for(int i=0;i<m;i++){
		equal(tmp,hwbitand(tmp,arr[cols[i]]));
	}
	return tmp.get();
}
vector<int> sel;
void dfs(int nowpos,int left){
	if(left==0){
		maxn=max(maxn,getres(sel));
		return;
	}
	for(int i=nowpos+1;i<=n;i++){
		sel.push_back(i);
		dfs(i,left-1);
		sel.pop_back();
	}
	return;
}
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    scanf("%d %d",&n,&m);
    for(int i=1;i<n;i++){
    	int tmp;
    	scanf("%d",&tmp);
    	maxn=max(maxn,tmp);
    	arr[i].set(tmp);
	}
	if(n<=2000&&m==1){
		cout<<maxn;
		return 0;
	}
	if(n<=2000&&m==n){
		vector<int> tmp;
		for(int i=1;i<=n;i++){
			tmp.push_back(i);
		}
		cout<<getres(tmp);
		return 0;
	}
	if(n<=2000&&m==2){
		vector<int> tmp;
		for(int i=1;i<=n-1;i++){
			tmp.push_back(i);
			for(int j=i+1;j<=n;j++){
				tmp.push_back(j);
				maxn=max(maxn,getres(tmp));
				tmp.pop_back();
			}
			tmp.pop_back();
		}
		cout<<maxn;
		return 0;
	}
	if(n<=20){
		maxn=0;
		dfs(0,m);
		cout<<maxn;
		return 0;
	}
    return 0;
}
