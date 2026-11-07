#include<bits/stdc++.h>
using namespace std;
int egg(int a){
	int g=1073741824,n=0;
	for(int i=1;i<=31;i++){
		if(a>=g){
	    	a-=g;
	    	n++;
	    }
	    g>>=1;
	}
	return n;
}
struct zzz{
	int a,b;
	bool operator<(const zzz k)const{
		if(b!=k.b)return b>k.b;
		return a>k.a;
	}
}s[200003];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    int n,m,p;
    cin>>n>>m;
    if(m==1){
    	int ma=0,l;
    	for(int i=0;i<n;i++){
    		cin>>l;
    		if(l>ma)ma=l;
	}
	cout<<ma;
	return 0;
	}
    for(int i=0;i<n;i++){
    	cin>>s[i].a;
    	s[i].b=egg(s[i].a);
	}
	sort(s,s+n);
	p=s[0].a&s[1].a;
	for(int i=2;i<m;i++)p=p&s[i].a;
	cout<<p;
} 