#include<bits/stdc++.h>
using namespace std;
int n,s;
const int N=1e9+10;
char a,b[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int ss=0;
	for(int i=1;i<=n;i++){
		cin>>s>>a;
		int n1=ss+s;
		for(;ss<n1;ss++){
			b[ss]=a;
		}
	}
	int sss=ss/2;
	long long ans=0;
	for(int i=0;i<sss;i++){
		ss-=1;
		int i1=i+ss;
		if(b[i]!=b[i1]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
