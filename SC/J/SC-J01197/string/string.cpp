#include<bits/stdc++.h>
using namespace std;
int n;
long long ans,sum;
bool f=0,t=1;
string s;
void solvesmall(){
	for(int i=0;i<=sum/2-1;i++){
		if(s[i]!=s[sum-1-i]){
			ans++;
		}
	}
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int a;
		string c,lc;
		scanf("%d",&a);
		cin>>c;
		if(lc!=c)t=0;
		lc=c;
		sum+=a;
		if(sum>=1e8){
			f=1;
		}
		for(int j=1;j<=a;j++){
			s+=c;
		}
	}
	if(t==1){
		cout<<0;
		return 0;
	}
	if(f==0){
		solvesmall();
	}
	printf("%lld",ans);
	return 0;
}