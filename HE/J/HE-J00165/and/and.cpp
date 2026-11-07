#include<bits/stdc++.h>
using namespace std;
int n,m;
string f1(int x,int i,string q){
	while(x){
		q[i]=x%2;
		x/=2;
	}
	string w;
	for(int i=0;i<q.length();i++){
		w[i]=q[q.length()-i-1];
	}
}
int a(int a,int s){
	string q=0,w=0;
	q=f1(a,0,q);
	w=f1(s,0,w);
	string d;
	int k=0;
	for(int i=0;i<q.length();i++){
		for(int j=0;j<w.length();j++){
			if(q[i]==1&&w[i==1]){
				d[k]=1;
			}
			else{
				q[k]=0;
			}
			k++;
		}
	}
	long long sum=0;
	k=0;
	for(int i=1;i<d.length();i*=2){
		sum+=d[k]*i;
		k++;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",std.out);
	cin>>n>>m;
	vector<int> s(n);
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	vector<int> dp(n);
	sort(s.rbegin(),s.rend());
	dp[0]=s[0];
	for(int i=1;i<m;i++){
		dp[i]=a(dp[i-1],s[i]);
	}
	cout<<dp[m-1];
	return 0;
}
