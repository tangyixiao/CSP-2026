#include<bits/stdc++.h>
using namespace std;
int main(){
//	freopen("and.in","r",stdin);
	//freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	long long a,b,c[200005]={},ma=0,ans=12345;
	cin>>a>>b;
	int p[6]={};
	for(int i=1;i<=a;i++){
		cin>>c[i]; 
		ma=max(ma,c[i]);
		if(c[i<=4])p[c[i]]++;	
	}
	
	
	if(a<=2000){
	
	ans=c[1];
	for(int i=2;i<=a;i++){
		ans=(c[i]&ans);
	}
	sort(c+1,c+1+a);
	if(b==1)cout<<ma;
	else if(b==a)cout<<ans;
	else 	cout<<c[b];
}
else 
	if(p[4]>b)cout<<4;
	else if(p[3]>b)cout<<3;
	else if(p[2]+p[3]>b)cout<<2;
	else cout<<1;
	
	return 0;
} 
