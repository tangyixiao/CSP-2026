#include<bits/stdc++.h>
using namespace std;
using ll=long long;
struct node{
	char cm;
	int sum=0;
};
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);
	int t,gcdn;
	cin>>t;
	vector<node>S(t+5);
	for(int i=1;i<=t;i++){
		int a;
		char c;
		cin>>a>>c;
		S[i].cm=c;
		S[i].sum=a;
		if(i==1)gcdn=a;
		else gcdn=gcd(gcdn,a);
	}
	for(int i=1;i<=t;i++){
		S[i].sum/=gcdn;
	}
	string st;
	ll ans=0;
	for(int i=1;i<=t;i++){
		for(int j=1;j<=S[i].sum;j++){
			st+=S[i].cm;
		}
	}
	for(int i=0;i<st.length();i++){
		if((st[i])!=(st[st.length()-i-1]))ans++;
	}
	cout<<(ans*gcdn)/2;
	return 0;
}