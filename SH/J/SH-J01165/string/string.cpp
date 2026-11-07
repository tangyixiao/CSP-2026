#include <bits/stdc++.h> 
using namespace std;
struct node{
	long long l;
	char a;
};
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,x;
	long long p=1,len=0;
	node S[20001]={};
	bool f=1;
	cin>>n;
	char s,e;
	cin>>x>>s;
	e=s;
	len+=x;
	S[1].l+=x;
	S[1].a=s;
	for(int i=1;i<=n-1;i++){
		cin>>x>>s;
		if(e!=s){
			e=s;
			p++;
			S[p].a=s;
			f=0;
		}
		len+=x;
		S[p].l+=x;
	}
	if(f){
		cout<<0;
		return 0;
	}
	unsigned int dp[p+1][p+1]={};
	for(long long i=1;i<=p;i++){
		dp[i][i]=S[i].l;
	}
	for(long long i=1;i<=p;i++){
		if(S[i].a==S[i+1].a){
			dp[i][i+1]=min(S[i].l,S[i+1].l);
		}
	}
	for(long long i=3;i<=p;i++){
		for(long long j=1;j+i-1<p;j++){
			long long c=j+i-1;
			if(S[c].a==S[j].a){
				dp[j][c]=dp[j+1][c-1]+min(S[j].l,S[c].l);
			}else{
				dp[j][c]=max(dp[j][c-1]+min(S[j].l,S[c].l),dp[j+1][c]+min(S[j].l,S[c].l));
			}
		}
	}
	long long h=dp[1][p-1];
	cout<<len-h;
	return 0;
}
