#include<bits/stdc++.h>
using namespace std;
long long n,m,sum=0;
vector<long long> v;
vector<bool> p;
string cmp(int a){
	vector<char> r;
	while(a>1){
		r.push_back(a%2);
		a/=2;
	}
	r.push_back(a);
	string s;
	for(long long j=r.size()-1;j>=0;j--){
		s.push_back(r[j]+'0');
	}
	return s;
}
long long cap(string s){
	long long cnt=0;
	long long a=s.size()-1;
	for(long long i=0;i<s.size();i++){
		long long o=1;
		for(long long j=0;j<a;j++){
			o*=2;
		}
		cnt+=(s[i]-'0')*o;
		a--;
	}
	return cnt;
}
void dfs(string i,long long j){
	if(j==0){
		sum=max(sum,cap(i));
		return;
	}
	for(long long l=0;l<v.size();l++){
		if(!p[l]){
			continue;
		}
		p[l]=false;
		string a=cmp(v[l]);
		long long b=min(i.size(),a.size());
		string h;
		long long x=i.size()-1,y=a.size()-1;
		for(long long k=0;k<b;k++){
			if(i[x]=='1'&&a[y]=='1'){
				h.push_back('1');
			}else{
				h.push_back('0');
			}
			x--;
			y--;
		}
		dfs(h,j-1);
		p[l]=true;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(long long i=0;i<n;i++){
		long long a;
		cin>>a;
		v.push_back(a);
		p.push_back(true);
	};
	for(long long i=0;i<v.size();i++){
		dfs(cmp(v[i]),m);
	}
	cout<<sum;
	return 0;
}
