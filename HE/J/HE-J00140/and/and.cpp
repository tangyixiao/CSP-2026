#include<bits/stdc++.h>
using namespace std;
long long a[200005],ans,ll;
int vis[200005];
int m,n;
string er(int a){
	int num=a;
	string s="",s1="";
	while(num!=0){
		s+=(num%2)+'0';
	    num/=2;	
	}
	for(int i=s.size()-1;i>=0;i--){
		s1+=s[i];
	}
	return s1;
}
long long yu(string a,string b){
	string a1="",b1="";
	if(a.size()>b.size()){
		for(int i=0;i<a.size()-b.size();i++){
			b1+='0';
		}
		b1+=b;
		a1=a;
	}else{
		for(int i=0;i<b.size()-a.size();i++){
			a1+='0';
		}
		a1+=a;
		b1=b;
	}
	int siz=max(a1.size(),b1.size());
	int cnt=0;
	long long sum=0;
	for(int i=siz-1;i>=0;i--){
		if(a1[i]=='1'&&b1[i]=='1'){
			sum+=pow(2,cnt);
			}
		cnt++;
	}
	return sum;
}
void dfs(int x,long long sum){
	if(x==m+1){
		ans=max(ans,sum);
		return ;
	}
	for(int i=0;i<n;i++){
		if(vis[i]==0){
			vis[i]=1;
			int k=sum;
			dfs(x+1,yu(er(sum),er(a[i])));
			vis[i]=0;
			sum=k;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		ll=max(ll,a[i]);
	}
	dfs(1,ll);
	cout<<ans;
}
