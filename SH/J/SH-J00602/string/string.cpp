#include<bits/stdc++.h>
using namespace std;
const long long N=1e9;
char b[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.in","w",stdout);
	int n;
	cin>>n;
	long long cnt=0;
	long long ans=0;
	char y;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		cin>>y;
		ans+=x;
		for(long long j=ans-x;j<ans+x;j++){
			b[j]=y;
		}
	}
	for(long long i=0;i<ans/2;i++){
		if(b[i]!=b[ans-i-1]){
			b[ans-i-1]=b[i];
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
