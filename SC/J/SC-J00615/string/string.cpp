#include<bits/stdc++.h>
using namespace std;
int m,t;
long long a[500007];
char b[500007];
int n[500007];
int p[500007];
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>m;
	for(int i=1;i<=m;i++){
		cin>>a[i]>>b[i];
		n[i]=i+1;
		p[i]=i-1;
	}
	n[0]=1;
	p[m+1]=m;
	int i=n[0];
	while(i!=m+1){
		while(b[i]==b[n[i]]){
			a[i]+=a[n[i]];
			i=n[i];
			n[p[i]]=n[i];
			p[n[i]]=p[i];
			i=p[i];
		}
		i=n[i];
	}
	int j=p[m+1];
	i=n[0];
	while(i!=j||p[i]!=j){
		if(i==j||p[i]==j){
			break;
		}
		if(a[i]>a[j]){
			if(b[i]==b[j]){
				a[i]-=a[j];
				j=p[j];
				continue;
			}else{
				a[i]-=a[j];
				ans+=(long long)a[j];
				j=p[j];
				continue;
			}
		}
		if(a[i]<a[j]){
			if(b[i]==b[j]){
				a[j]-=a[i];
				i=n[i];
				continue;
			}else{
				a[j]-=a[i];
				ans+=(long long)a[i];
				i=n[i];
				continue;
			}
		}
		if(b[i]==b[j]){
			if(p[j]==i){
				break;
			}
			j=p[j];
			i=n[i];
			continue;
		}else{
			ans+=(long long)a[i];
			j=p[j];
			i=n[i];
			continue;
		}
	}
	cout<<ans<<"\n";	
	return 0;
}