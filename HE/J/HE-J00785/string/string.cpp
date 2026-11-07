#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,a[200005],p[200005],pc[200005],j=1,n2,num,ans;
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	n2=n/2;
	for(ll i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	p[1]=a[1];
	p[n]=a[n];
	pc[1]=c[1];
	pc[n]=c[n];
	for(ll i=1;i<=n;i++){
		num+=min(p[n-i+1],p[i]);
		if(p[n-i+1]==min(p[n-i+1],p[i])){
			if(pc[n-i+1]!=pc[i])ans+=p[n-i+1];
			if(p[n-i+1]==p[i]){
				j++;
				p[i+1]=a[j];
			    pc[i+1]=c[j];
			    continue;
			}
			else{
			    p[i+1]=p[i]-p[n-i+1];
			    pc[i+1]=pc[i];
		    }	
		}
		else if(p[i]==min(p[n-i+1],p[i])){
			if(pc[i]!=pc[n-i+1])ans+=p[i];
			if(p[n-i+1]==p[i]){
				j++;
			    p[n-i+1]=a[n-j+1];
			    pc[n-i+1]=c[n-j+1];
			    continue;
		    }
			else{
			    p[n-i+1+1]=p[n-i+1]-p[i];
			    pc[n-i+1+1]=pc[n-i+1];
		    }	
		}
		if(num>=n2)break;
	}
	cout<<ans;
	
	return 0;
}
