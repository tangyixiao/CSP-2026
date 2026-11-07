#include<bits/stdc++.h>
using namespace std;
vector<char> a;
vector<char> b;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	string s="";
	int n;cin>>n;
	long long sum=0;
	bool f=0;
	for(int i=1;i<=n;i++){
		int x;char c;
		cin>>x>>c;
		sum+=x;
		if(x>=1e9)f=1;
		if(x<1e9)
		for(int j=1;j<=x;j++){
			s+=c;
		}
	}
	if(f){
		cout<<sum/2;
		return 0;
	}
//	cout<<s<<endl;
	int len=s.size();
	int mid=len/2+1;
	if(len%2!=0){
	for(int i=0;i<mid-1;i++)a.push_back(s[i]);
	for(int i=mid;i<len;i++)b.push_back(s[i]);
	int nl=len/2;
	int ans=0;
	reverse(b.begin(),b.end());
	for(int i=0;i<nl;i++){
		if(a[i]!=b[i])ans++;
	}cout<<ans;
}
    else{
    	mid--;
    	for(int i=0;i<mid;i++)a.push_back(s[i]);
	for(int i=mid;i<len;i++)b.push_back(s[i]);
	int nl=len/2;;
	int ans=0;
	reverse(b.begin(),b.end());
	for(int i=0;i<nl;i++){
		if(a[i]!=b[i])ans++;
	}cout<<ans;
	}
	return 0;
}