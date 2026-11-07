#include<bits/stdc++.h>
#define visca using
#define el namespace
#define barca std;
visca el barca
long long c[1145140],a[114540],s[1145140];
char t[1145140],b[1145140];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long xh=0,n,cnt=1,qp=0,ans=0,x,y,p,ans2;
	cin>>n;
	t[0]='A';
	for(long long i=1;i<=n;i++){
		cin>>a[i]>>t[i];
	}
	a[0]=0;
	s[1]=a[1];
	for(long long i=2;i<=n;i++){
		s[i]=s[i-1]+a[i];
	}
	if(s[n]%2==0){
		qp=s[n]/2;
		xh=s[n]/2;
	}
	else{
		qp=(s[n]+1)/2;
		xh=(s[n]-1)/2;
	}
	for(long long i=1;i<=n;i++){
		if(s[i]>=qp){
			p=qp-s[i-1];
			ans=i;
			ans2=i;
			break;
		}
	}
	if(s[n]%2==0){
		x=p;
		y=p+1;
	}
	else{
		x=p-1;
		y=p+1;
	}
	while(qp>1){
		qp--;
		if(x<=0){
			ans--;
			x=a[ans];
		}
		if(y>a[ans2]){
			ans2++;
			y=1;
		}
		x--;
		y++;
		if(t[ans]==t[ans2]){
			xh--;
		}
	}
	cout<<xh;
	return 0;
}
/*
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	今年T2好难
	看到的人帮我试一下以下代码和上面的哪个分更高：
#include<bits/stdc++.h>
#define visca using
#define el namespace
#define barca std;
visca el barca
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s="";
	long long xh=0,n;
	cin>>n;
	for(int i=0;i<n;i++){
		long long c;
		string t;
		cin>>c>>t;
		for(long long i=0;i<c;i++){ 
			s+=t;
		}
	}
	for(int i=0;i<s.size();i++){
		if(s[i]!=s[s.size()-i-1]){
			xh++;
		}
	}
	cout<<xh/2;
	return 0;
}
	*/ 