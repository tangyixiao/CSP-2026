#include<bits/stdc++.h>
using namespace std;
const int H=2e5+10;
int n;
pair<int,char> s[H];
inline pair<int,bool> check(int a,int b){
	pair<int,bool> ist;
	ist.first=s[a].first-s[b].first;
	ist.second=(s[a].second==s[b].second);
	return ist;
}
long long sum=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin.tie(0)->sync_with_stdio(false);
	cin>>n;
	for(int i=1;i<=n;i++){
		int u;char t;
		cin>>u>>t;
		s[i]={u,t};
	}
	for(int i=1,j=n;i<j;){
		pair<int,bool> u=check(i,j);
		if(u.second==0){
			sum+=min(s[i].first,s[j].first);
		}
		if(u.first<0){
			i++;
			s[j].first=-u.first;
		}
		else if(u.first>0){
			j--;
			s[i].first=u.first;
		}
		else{
			i++;j--;
		}
	}
	cout<<sum;
	return 0;
}
