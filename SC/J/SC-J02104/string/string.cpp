#include<bits/stdc++.h>
using namespace std;
long long n,v,x,a[20010],h[1000000000],cnt=0,s,b,t[20010];
char c[20010];
string m;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	if(n==1)
		cout<<0;
	long long k=1,x=0;
	while(n--){
		cin>>a[k]>>c[k];
		for(long long z=x;z<=v-1;z++){
			m[z]=c[k];
		}
		v+=a[k];
		x=a[k]-1;
		k++;
	}
	s=m.size()/2;
	b=s;
	long long i=0,j=m.size();
	while(b--){
		if(m[i]==m[j-1])
			h[i+1]=1;
		i++;
		j--;
	}
	for(int i=1;i<=s;i++){
		if(h[i])
			cnt++;
	}
	if(cnt==s)
		cout<<0;
	else
		cout<<s-cnt;
	return 0;
}