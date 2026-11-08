#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],e=0,sl=0,ls=0;
string c[200005],s,l;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(long long i=0;i<n;i++){
		cin>>a[i]>>c[i];
	}
	for(long long i=0;i<n;i++){
		while(a[i]--){
			s+=c[i];
		}
	}
	sl=s.size();
	ls=sl/2;
	for(long long i=0;i<ls;i++) l+=s[i];
	if(ls%2==0){
		for(long long i=ls;i>=0;i--) l+=s[i]; 
		for(long long i=0;i<sl;i++){
			if(s[i]!=l[i]) e++;
		}
	}
	else{
		for(long long i=ls-1;i>=0;i--) l+=s[i]; 
		for(long long i=0;i<sl;i++){
			if(s[i]!=l[i]) e++;
		}
	}
	cout<<e;
	return 0;
}

