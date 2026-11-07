#include<bits/stdc++.h>
using namespace std;
long long n;
long long m,k;
struct o{
	long long g;
	char c;
}p[200005],a[200005],b[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>p[i].g>>p[i].c;
		m+=p[i].g;
	}
	if(m%2==0){
		m/=2;
		long long u=0,as=0,bs=0;
		bool o=0;
		for(int i=1;i<=n;i++){
			if(!o){
				u+=p[i].g;
				if(u<m){
					a[as].g=p[i].g;
					a[as++].c=p[i].c;
				}
				else if(u>m){
					a[as].g=p[i].g-u+m;
					a[as++].c=p[i].c;
					b[bs].g=p[i].g-a[as-1].g;
					b[bs++].c=p[i].c;
					o=1;
				}
				else{
					a[as].g=p[i].g;
					a[as++].c=p[i].c;
					o=1;
				}
			}
			else{
				b[bs].g=p[i].g;
				b[bs++].c=p[i].c;
			}
		}
		int i=0,j=bs-1;
		while(i<as&&j>=0){
			if(a[i].g==b[j].g){
				if(a[i].c!=b[j].c){
					k+=a[i].g;
				}
				i++;
				j--;
			}
			else if(a[i].g<b[j].g){
				if(a[i].c!=b[j].c){
					k+=a[i].g;
				}
				b[j].g-=a[i].g;
				i++;
			}
			else{
				if(a[i].c!=b[j].c){
					k+=b[j].g;
				}
				a[i].g-=b[j].g;
				j--;
			}
		}
		cout<<k;
	}
	else{
		m/=2;
		long long u=0,as=0,bs=0;
		bool o=0;
		for(int i=1;i<=n;i++){
			if(!o){
				u+=p[i].g;
				if(u<m){
					a[as].g=p[i].g;
					a[as++].c=p[i].c;
				}
				else if(u>m){
					a[as].g=p[i].g-u+m;
					a[as++].c=p[i].c;
					b[bs].g=p[i].g-a[as-1].g;
					b[bs++].c=p[i].c;
					o=1;
				}
				else{
					a[as].g=p[i].g;
					a[as++].c=p[i].c;
					o=1;
				}
			}
			else{
				b[bs].g=p[i].g;
				b[bs++].c=p[i].c;
			}
			if(bs==1){
				b[bs-1].g--;
			}
		}
		int i=0,j=bs-1;
		while(i<as&&j>=0){
			if(a[i].g==b[j].g){
				if(a[i].c!=b[j].c){
					k+=a[i].g;
				}
				i++;
				j--;
			}
			else if(a[i].g<b[j].g){
				if(a[i].c!=b[j].c){
					k+=a[i].g;
				}
				b[j].g-=a[i].g;
				i++;
			}
			else{
				if(a[i].c!=b[j].c){
					k+=b[j].g;
				}
				a[i].g-=b[j].g;
				j--;
			}
		}
		cout<<k;
	}
    return 0;
}