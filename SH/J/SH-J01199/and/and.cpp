#include<bits/stdc++.h>
using namespace std;
long long ans1=pow(2,30)-1;
int n,m;
string a[200050];
void change(long long x,int i){
	while(x!=0){
		a[i]+=x%2+'0';
		x/=2;
	}
	while(a[i].size()<28){
		a[i]+='0';
	}
	return;
}
long long change2(string x){
	long long ans=0;
	for(int i=0;i<=28;i++){
		ans+=(x[i]-'0')*pow(2,i);
	}
	return ans;
}
bool cmp(string a,string b){
	for(int i=28;i>=0;i--){
		if(a[i]==b[i])continue;
		else return a[i]>b[i];
	} 
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		long long x;
		cin>>x;
		change(x,i);
	}
	sort(a,a+n,cmp);
	for(int i=0;i<m;i++){
		int t=change2(a[i]);
		ans1=ans1&t;
	}
	cout<<ans1;
	return 0;
}
