#include<bits/stdc++.h>
using namespace std;
long long n,las,fir,ans,s1,s2,sum;
struct ccf{
	long long a;
	char c;
}k[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>k[i].a>>k[i].c;
	}
	fir=1;
	las=n;
	s1=k[fir].a;
	s2=k[las].a;
	while(las>fir){
		sum=min(s1,s2);
		if(k[fir].c!=k[las].c){
			ans+=sum;
		}
		s1-=sum;
		s2-=sum;
		if(s1<s2){
			fir++;
			s1+=k[fir].a;
		}
		if(s1>s2){
			las--;
			s2+=k[las].a;
		}
		if(s1==s2){
			fir++;
			las--;
			s1+=k[fir].a;
			s2+=k[las].a;
		}
		
	}
	cout<<ans;
	return 0;
}