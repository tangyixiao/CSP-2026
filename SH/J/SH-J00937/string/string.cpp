#include<bits/stdc++.h>
using namespace std;
struct S{
	long long a;
	char c;
} b[2000009];
long long n=0,sum=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(long long i=0;i<n;i++){
		cin>>b[i].a>>b[i].c;	
	}
	long long cnt=0,nowisum=0,nowjsum=0,nowi=0,nowj=n-1;
	while(nowj-nowi>0){
		int k=min(b[nowi].a,b[nowj].a);
		if(b[nowi].c!=b[nowj].c){
			cnt+=k;
		}
		b[nowi].a-=k;
		b[nowj].a-=k;
		if(b[nowi].a==0){
			nowi++;
		}
		if(b[nowj].a==0){
			nowj--;
		}
	}
	cout<<cnt;
	return 0;
}
 
