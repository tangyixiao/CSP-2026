#include<bits/stdc++.h>
using namespace std;
int t;
long long ans=0;
string n;
bool dp=1;
struct w{
	long long a;
	char str;
}m[200005];
int ti[200005],cnt=0;
long long sum=0,sh=0;
long long x=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>t;
	m[0].str='A';
	if(t==1){
		cout<<0<<"\n";
		return 0;
	}
	for(int i=1; i<=t; i++){
		cin>>m[i].a>>m[i].str;
		sum+=m[i].a;
		if(m[i].a!=1)dp=0;
		if(m[i].str!=m[i-1].str)ti[cnt++]=i;
	}
	if(cnt==1){
		cout<<0<<"\n";
		return 0;
	}
	if(t==2){
		if(m[1].a<=m[2].a)cout<<m[1].a<<"\n";
		else cout<<m[2].a<<"\n";
		return 0;
	}
	if(cnt==2){
		for(int i=1; i<=ti[1]-1; i++){
			x+=m[i].a;
		}
		if(x<=sum/2){
			cout<<x<<endl;
		}
		else cout<<sum-x<<endl;
		return 0;
	}
	if(dp==1){
		for(int i=1; i<=t; i++){
			n+=m[i].str;
		}
		for(int i=0; i<=(n.size()/2); i++){
			if(n[i]!=n[i+(n.size()/2)+1])ans++;
		}
		cout<<ans<<endl;
		return 0;
	}
	else{
		for(int i=1; i<=t; i++){
			for(int j=1; j<=m[i].a; j++){
				n+=m[i].str;
			}
		}
		for(int i=0; i<=(n.size()/2); i++){
			if(n[i]!=n[i+(n.size()/2)+1])ans++;
		}
		cout<<ans<<endl;
		return 0;
	}
	return 0;
} 

