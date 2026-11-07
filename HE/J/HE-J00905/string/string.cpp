#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long a;
	cin>>a;
	long long q;
	string w,zzz;
	for(long long i=1;i<=a;i++){
		cin>>q;
		cin>>w;	
		for(long long j=1;j<=q;j++){
			zzz+=w;
		}
	}
	long long cnt=0;
	int e=zzz.size();
	for(long long i=0;i<(e/2);i++){
		if(zzz[i]!=zzz[e-i-1]){
			cnt++;
		}
	}
	cout<<cnt;

	return 0;
}
