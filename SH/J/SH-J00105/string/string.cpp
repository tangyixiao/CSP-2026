#include<bits/stdc++.h>
using namespace std;
const int N=2e5+9;
typedef long long ll;
int n,pos;
int a[N];
char c[N],lc,rc;
ll len,le,ri,mid,cnt;
vector<ll> p,ln;
vector<char> ch;
bool flag;
void solve_BF(){
	string st;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		for(int i=1;i<=a[i];i++){
			st+=c[i];
		}
		len+=a[i];
	}
	if(len%2==0){
		le=len/2;
		ri=le+1;
	}
	else{
		mid=(len+1)/2;
		le=mid-1;
		ri=mid+1;
	}
	for(ll i=0;i<le;i++){
		if(st[i]!=st[ri+i]){
			cnt++;
		}
	}
	cout<<cnt<<endl;
	return;
}
void solve(){
	cin>>n;
	flag=1;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		if(c[i]!=c[i-1]){
			flag=0;
			p.push_back(len+1);
			ch.push_back(c[i]);
		}
		len+=a[i];
	}
	if(flag==1){
		cout<<0<<endl;
		return;
	}
	if(len%2==0){
		le=len/2;
		ri=le+1;
	}
	else{
		mid=(len+1)/2;
		le=mid-1;
		ri=mid+1;
	}
	int m=p.size();
	for(int i=1;i<=m;i++){
		if(p[i]==le){
			lc=c[i];
			rc=lc;
			break;
			pos=i;
		}
		if(p[i]==ri){
			lc=c[i-1];
			rc=c[i];
			break;
		}
		if(p[i]>ri){
			lc=c[i-1];
			rc=lc;
			break;
		}
	}
		
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	solve_BF();
	//solve();
	return 0;
}
