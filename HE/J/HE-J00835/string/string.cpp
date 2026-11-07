#include<bits/stdc++.h>
using namespace std;
int n,ans,x;
long long a;
char c;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
	cin>>n;
	vector<int64_t> v;
	vector<int64_t> q;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		x+=a;
		for(int j=1;j<=a;j++){
			v.push_back(c);
		}
	}
	for(int i=x;i>=0;i--){
		q.push_back(v[i]);
	}
	for(int i=0;i<=x;i++){
		if(v[i]!=q[i]){
			ans++;
		}
	}
	cout<<(ans>>1)<<endl;
	return 0;
}
