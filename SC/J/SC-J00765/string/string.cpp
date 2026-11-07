#include<bits/stdc++.h>
using namespace std;
unsigned long long n,a[200005],minn,l,r,f,ansl=1,ansr;
unsigned long long sum;
char str[200005];
char c,s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i]>>str[i];
	c=str[1];s=str[n];
	l=a[1];r=a[n];
	minn=min(l,r);
	ansr=n;
	if(minn==r&&l!=r)f=1;
	else if(l==r)f=2;
	while(ansl<=(n+1)/2&&ansr>=(n+1)/2){
		if(c!=s)sum+=minn;
		//cout<<sum<<" ";
		if(f==1){
			if(l)l=l-r;
			r=a[--ansr];
			s=str[ansr];
		}
		else if(f==0){
			if(r)r=r-l;
			l=a[++ansl];
			c=str[ansl];
		}else{
			l=a[++ansl];
			c=str[ansl];
			r=a[--ansr];
			s=str[ansr];
		}
		if(l&&r)minn=min(l,r);
		//else if(l)minn=l;
		//else if(r)minn=r;
	    if(minn==r&&l!=r)f=1;
	    else if(l==r)f=2;
	    else f=0;
	}
	while(ansl<=ansr){
		if(c!=s)sum+=minn;
		//cout<<sum<<" ";
		if(f==1){
			if(l)l=l-r;
			r=a[--ansr];
			s=str[ansr];
		}
		else if(f==0){
			if(r)r=r-l;
			l=a[++ansl];
			c=str[ansl];
		}else{
			l=a[++ansl];
			c=str[ansl];
			r=a[--ansr];
			s=str[ansr];
		}
		if(l&&r)minn=min(l,r);
		//else if(l)minn=l;
		//else if(r)minn=r;
	    if(minn==r&&l!=r)f=1;
	    else if(l==r)f=2;
	    else f=0;
	}
	cout<<sum;
	return 0;
}