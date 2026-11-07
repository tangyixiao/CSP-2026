#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5;
int n,a[N],b[N];
char c[N];
signed main(){
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		b[i]=a[n+1-i];
	}
	vector<int> v(1);
	for(int i=1,j=1,s1=0,s2=0;i<=n||j<=n;){
		s1+=a[i++];
		s2+=b[j++];
		v.push_back(s1);
		v.push_back(s2);
	}
	sort(v.begin(),v.end());
	for(int i=v.size()-1;i>=1;i--)v[i]-=v[i-1];
	vector<int> aa;vector<char> cc;
	for(int i=1,j=1,s=0,ss=0;i<=n;i++){
		int ai=a[i];s+=a[i];
		while(j<v.size()&&ss<s){
			aa.push_back(v[j]);
			cc.push_back(c[i]);
			ss+=v[j++];
		}
	}
	for(int i=0;i<aa.size();i++){
		int j=aa.size()-i-1;
		ans+=(cc[i]!=cc[j])*aa[i];
		cc[i]=cc[j];
	}
	cout<<ans;
	return 0;
}
