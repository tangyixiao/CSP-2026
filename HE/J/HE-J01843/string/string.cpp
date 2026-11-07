#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string","r",stdin);
	freopen("string","w",stdout);
	long long a,b,n,i,cnt=0,k=0,c,ans=0,bns=0;
	string s1,s2,x,x2,t1,t2,t3;
	cin>>n;
	for(i=1;i<=n;i++){ 
		cin>>a>>s1;
		k+=a;
		for(long long j=1;j<=a;j++){
			x+=s1;
			x2=s1+x2;
		}
	}
	if(x==x2){ 
		cout<<0;
		return 0; 
	}
	c=k; 
	k=k/2;
	t1=x2.substr(0,k+1);
	t2=x2.substr(k,c);
	t3=x.substr(k,c); 
	for(i=0;i<=t1.size()-1;i++){ 
		if(t1[i]!=x[i]){
			ans++;
		}
	}
	for(i=0;i<=t2.size()-1;i++){
		if(t2[i]!=t3[i]){
			bns++;
		}
	}	
	cout<<min(ans,bns);
}
