#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+5;
long long a1[maxn],a2[maxn],c1[maxn],c2[maxn];
long long a[maxn],n,c[maxn],pre;
long long tt,tt1,tt2,ans,pos1,pos2,pos;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		char x;
		cin>>x;
		c[i]=x;
		tt=tt+a[i];
	}
	tt=tt/2;
	pre=0;
	for(int i=1;i<=n;i++){
		pre=pre+a[i];
		a1[0]++;
		a1[a1[0]]=a[i];
		c1[a1[0]]=c[i];
		//cout<<a1[0]<<endl;
		if(pre>tt){
			a1[a1[0]]=a[i]-pre+tt;
			break;
		}
	}
	/*
	for(int i=1;i<=a1[0];i++){
		cout<<a1[i]<<" "<<c1[i]<<endl;
	}
	*/
	pre=0;
	for(int i=n;i>=1;i--){
		pre=pre+a[i];
		a2[0]++;
		c2[a2[0]]=c[i];
		a2[a2[0]]=a[i];
		if(pre>tt){
			a2[a2[0]]=a[i]-pre+tt;
			break;
		}
	}
	/*
	for(int i=1;i<=a2[0];i++){
		cout<<a2[i]<<" "<<c2[i]<<endl;
	}
	*/
	while(pos1<a1[0]||pos2<a2[0]){
		if(tt1>0){
			pos2++;
			tt2=tt2+a2[pos2];
		}else if(tt2>0){
			pos1++;
			tt1=tt1+a1[pos1];
		}else{
			pos1++;
			pos2++;
			tt1=tt1+a1[pos1];
			tt2=tt2+a2[pos2];
		}
		if(c1[pos1]!=c2[pos2]){
			ans=ans+min(tt1,tt2);
		}
		long long x=min(tt1,tt2);
		tt1=tt1-x;
		tt2=tt2-x;
	}
	cout<<ans<<endl;
	return 0;
}
//Trick||Treat!
