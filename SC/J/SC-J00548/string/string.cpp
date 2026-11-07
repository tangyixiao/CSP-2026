#include<bits/stdc++.h>
using namespace std;
string b,y[200005],p;
long long a,n,m,x[200005],cnt,cmp=0,w[200001],o=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>a;
	x[0]=0;
	w[0]=0;
	for(int i=1;i<=a;i++){
		cin>>x[i]>>y[i];
		w[i]=w[i-1]+x[i];
	}
	for(int i=1;i<=a-1;i++){
		o=o+x[i];
	}
	if(w[a]>=o){
		cout<<o;
		return 0;
	}
	if(a%2==0) m=a/2;
	
	else m=a/2+1;
	for(int i=1;i<=m;i++){
		if(y[i]==y[a-i+1]){
			if(x[i]>=x[a-i+1]) x[a-i]-=x[i]-x[a-i+1];
			else x[i+1]+=x[i]-x[a-i+1];
			cmp+=abs(x[i]-x[a-i+1]);
		}else{
			if(x[i]>=x[a-i+1]) x[a-i]-=x[i]-x[a-i+1];
			else x[i+1]+=x[i]-x[a-i+1];
			cmp+=max(x[i],x[a-i+1]);
		}
	}
	cout<<cmp;
	return 0;
} 