#include<bits/stdc++.h>
using namespace std;
int n,a,all=0;
long long ans=0;
char c;
vector<char> v;
void PUSH(int xx,char yy){
	for(int i=1;i<=xx;i++){
		v.push_back(yy);
	}
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a;
		cin>>c;
		all+=a;
		PUSH(a,c);
	}
	for(int i=0;i<all/2;i++){
		if(v[i]!=v[all-i-1]) ans++;
	}
	cout<<ans<<endl;
	return 0;
}
