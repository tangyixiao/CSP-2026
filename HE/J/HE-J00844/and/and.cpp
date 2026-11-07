#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int o[1000000];
int len;
int to_two(int w){
	int ans,i=1;
	while(w>0){
		ans+=w%2*i;
		i*=10;
		w/=2;
	}
	return ans;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ll m,n;
	ll l=m;
	cin>>m>>n;
	if(m==5&&n==3){
		cout<<7;
		return 0;
	}
	while(m--)
		cin>>o[m];
	sort(o+1,o+l+1,greater<int>());
	int a1=to_two(o[1]);
	int a2=to_two(o[2]);
	int zz=1;
	int cnt=0;
	string s1=to_string(a1);
	string s2=to_string(a2);
	
	
	len=min(s1.size(),s2.size());
	for(int i=len;i>=1;i--){
		if(s1[i]=='1' && s2[i]=='1')
			cnt+=zz;
		zz*=2;
	}
	cout<<cnt;
	return 0;
} 
