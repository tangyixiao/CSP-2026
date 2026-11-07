#include<bits/stdc++.h>
using namespace std;
int n;
struct node{
	long long a;
	char c;
}s[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;++i){
		
		cin>>s[i].a>>s[i].c;
	}
	int is=1,ie=n;
	long long cnt=0;
	while(is!=ie&&is<ie){
		long long q1=s[is].a,q2=s[ie].a;
		if(s[is].c!=s[ie].c){
			cnt+=min(q1,q2);
		}
		if(q1==q2){
			is+=1,ie-=1;
		}
		else if(q1>q2){
			s[is].a-=q2;
			
			ie-=1;
		}
		else{
			s[ie].a-=q1;
			is+=1;
		}
	}
	cout<<cnt;
	//printf("%lld",cnt);
	
	return 0;
}
