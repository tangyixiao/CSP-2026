#include<bits/stdc++.h>
using namespace std;
int begin=0,n;
long long ans=0,x[(int)2e5];
string s;
char sx[(int)2e5];
int main(){
	freopen("string.in",r,stdin);
	freopen("string.out",w,stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x[i]>>sx[i];
	}
	bool flag=1;
	while(flag){
		if(begin>=n){
			cout<<ans;
			flag=0;
		}else{
			long long diff=min(x[begin],x[n]);
			x[begin]-=diff;x[n]-=diff;
			if(sx[begin]!=sx[n]) ans+=diff;
			if(x[begin]==0) begin++;
			if(x[n]==0) n--;
		}
	}
	return 0;
}
