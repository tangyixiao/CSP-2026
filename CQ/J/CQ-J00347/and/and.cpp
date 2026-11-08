#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define N 200005
int n,m;
int a[N];
string s[N];
vector<int>v;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int len=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		int x=a[i];
		while(x){
			s[i]=(char)((x&1)+'0')+s[i];
			x>>=1;
		}
		len=max(len,(int)s[i].size());
		v.push_back(i);
	}
	for(int i=1;i<=n;i++){
		int siz=s[i].size();
		for(int j=1;j<=len-siz;j++) s[i]='0'+s[i];
	}
	int ans=0;
	for(int j=0;j<len;j++){
		vector<int>t;
		int cnt=0;
		for(auto i:v){
			if(s[i][j]=='1'){
				t.push_back(i);
				cnt++;
			}
		}
		if(cnt>=m){
			v=t;
			ans=(ans<<1)+1;
		}
		else{
			ans<<=1;
		}
	}
	cout<<ans;
	return 0;
}

