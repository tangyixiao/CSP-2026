#include<bits/stdc++.h>
using namespace std;
int n,m,a[200009],qjans=0;
string a2[200009];
string jz2(int x){
	string ans="";
	do{
		ans=char((x%2)+'0')+ans;
		x/=2; 
	}while(x!=0);
	return ans;
}
int jz22(string x){
	int cnt=1,ans=0;
	for(int i=1;i<=21;i++)cnt*=2;
	while(x.size()<21)x="0"+x;
	for(int i=21;i>=0;i--){
		if(x[21-i-1]=='1')ans+=cnt;
		cnt/=2;
	}
	return ans;
}
string awyys(string a,string b){
	string ans="";
	int len=max(a.size(),b.size());
	while(a.size()<len)a="0"+a;
	while(b.size()<len)b="0"+b;
	for(int i=0;i<len;i++){
		if(a[i]=='1'&&b[i]=='1')ans=ans+"1";
		else ans=ans+"0";
	}
	return ans;
}
void s1(){
	cout<<*max_element(a+1,a+n+1);
}
void s2(){
	int ans=0;
	for(int i=1;i<=n;i++){
		a2[i]=jz2(a[i]);
//		cout<<a2[i]<<' ';
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
//			cout<<i<<' '<<j<<' '<<jz22(awyys(a2[i],a2[j]))<<"\n";
			if(jz22(awyys(a2[i],a2[j]))>ans)ans=jz22(awyys(a2[i],a2[j]));
		}
	}
	cout<<ans;
}
void s3(){
	int ans=0;
	for(int i=1;i<=n;i++){
		a2[i]=jz2(a[i]);
//		cout<<a2[i]<<' ';
	}
	for(int i=1;i<=n;i++){

//			cout<<i<<' '<<j<<' '<<jz22(awyys(a2[i],a2[j]))<<"\n";
		ans=jz22(awyys(jz2(ans),a2[i]));
	}
	cout<<ans;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1)s1();
	else if(m==2)s2();
	else if(m==n)s3();
	return 0;
}
