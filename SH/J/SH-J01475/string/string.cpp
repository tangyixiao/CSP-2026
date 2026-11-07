#include<bits/stdc++.h>
using namespace std;
long long geshu[200007];
char zifu[200007];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int k;
	cin>>k;
	long long zongchang=0;
	for(int i=1;i<=k;i++){
		cin>>geshu[i]>>zifu[i];
		zongchang+=geshu[i];
	}
	long long l=0,r=zongchang,cnt=0;
	int L=1,R=k;
	while(l<=r&&L<R){
		long long a=geshu[L]<geshu[R]?geshu[L]:geshu[R];
		l+=a;
		r-=a;
		geshu[R]-=a;
		geshu[L]-=a;
		if(zifu[L]!=zifu[R]){
			cnt+=a;
		}
		if(geshu[L]==0){
			L+=1;
		}
		if(geshu[R]==0){
			R-=1;
		}
	}
	cout<<cnt;
	return 0;
} 
