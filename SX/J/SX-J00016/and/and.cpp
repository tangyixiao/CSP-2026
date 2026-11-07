#include<bits/stdc++.h>
using namespace std;
long long n,m,ans;
stack<bool> st;
struct node{
	long long _num,_tot,_zid;
	string _bin;
}a[200005];
void clear(){
	while(!st.empty()){
		st.pop();
	}
}
string getbin(long long x){
	string s="";
	while(x){
		st.push(x%2);
		x/=2;
	}
	while(!st.empty()){
		s+=st.top()+'0';
		st.pop();
	}
	return s;
}
long long gettot(string s){
	long long cnt=0,len=s.size();
	for(int i=0;i<len;i++){
		if(s[i]=='1')cnt++;
	}
	return cnt;
}
long long getzero(string s){
	long long len=s.size();
	for(int i=0;i<len;i++){
		if(s[i]=='0'){
			return i;
		}
	}
	return 0;
}
bool cmp(node x,node y){
	if(x._tot==y._tot){
		return x._zid>y._zid;
	}
	return x._tot>y._tot;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i]._num;
		a[i]._bin=getbin(a[i]._num);
		a[i]._tot=gettot(a[i]._bin);
		a[i]._zid=getzero(a[i]._bin);
	}
	stable_sort(a+1,a+n+1,cmp);
	ans=a[1]._num;
	for(int i=2;i<=m;i++){
		ans=ans&a[i]._num;
	}
	cout<<ans;
	return 0;
}
