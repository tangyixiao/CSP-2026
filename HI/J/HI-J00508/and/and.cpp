#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2*1e5+1;
struct tand{
	string s;
	int num;
}a[N];
void ttt(int n,int i){
	while(n>0){
		a[i].s+=n%2+'0';
		n/=2;
	}
}
void count(int i){
	for(int j=0;j<a[i].s.size();j++){
		if(a[i].s[j]==1) a[i].num++;
	}
}
bool cmp(tand a,tand b){
	return a.num>b.num;
}
int rettt(string s){
	string ss;
	int ans=0;
	int len=s.size()-1;
	for(int i=0;i<s.size();i++){
		ss[i]=s[len-i];
	}
	for(int i=0;i<=len;i++){
		ans+=(ss[i]-'0')*pow(2,i);
	}
	return ans;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		ttt(a,i);
		count(i);
	}
	sort(a+1,a+n+1,cmp);
	string ans=a[1].s;
	for(int i=2;i<=m;i++){
		for(int j=0;j<max(ans.size(),a[i].s.size());j++){
			if(ans[j]==0 or a[i].s[j]==0) ans[j]=0;//
			else ans[j]=1;
		}
	}
	int trueans=rettt(ans);
	cout<<trueans*-1;
	return 0;
} 
