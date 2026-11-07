#include<bits/stdc++.h>
using namespace std;
int n,sum,a[200005];
char c,c1[200005];
long long cnt,maxn,ans,minn=1e18,pos;
map<char,long long> mp;
string s;
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>sum>>c;
		mp[c]+=sum;
		cnt+=sum;
		c1[i]=c;
		a[i]=sum;
		s+=c;
	}
	int len=s.size();
	int l=0,r=len-1; 
	int k=0;
	while(l<n/2&&r>n/2){
		if(s[l]==s[r]){
			cnt-=2*min(a[l+1],a[r+1]);
			mp[s[l]]-=2*min(a[l+1]-k,a[r+1]);		
			k=0;
			//cout<<l<<" "<<r<<endl;
			l++,r--;
		}
		else{
			k++;
			r--;
			if(k>=a[l+1]){
				l++;
				k=0;
			} 
		}
	}
	for(int i='a';i<='z';i++) maxn=max(maxn,mp[(char)i]),minn=min(minn,mp[(char)i]);
	ans=cnt-maxn;
 	pos=cnt/2;
	ans=min(ans,pos);
	ans=max(ans,0ll);
	cout<<ans;
	//for(int i='a';i<='z';i++) cout<<mp[char(i)]<<endl;
	//cout<<cnt<<" "<<maxn<<" "<<pos;
	return 0;
} 
