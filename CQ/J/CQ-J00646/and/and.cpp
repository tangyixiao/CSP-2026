#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200010];
string long_str(long long x){
	string s="";
	while(x!=0){
		s+=char(x%10+'0');
		x/=10;
	} 
	return s;
}
long long str_long(string x){
	long long s=0;
	int len=x.size();
	for(int i=0;i<len;i++){
		s+=(x[i]-'0');
		s*=10;
	}
	return s;
}
string dao(string x){
	string s="";
	int len=x.size(),top=0;
	for(int i=len-1;i>=0;i--){
		s[top]=x[i];
		top++;
	}
	return s;
}
long long zhuan(string x){
	long long s=0;
	int len=x.size();
	for(int i=0;i<len;i++){
		if(x[i]=='1') s+=pow(2,i);
	}
	return s;
}
string yu(string x,string y){
	string s="";
	int len=min(x.size(),y.size());
	for(int i=0;i<len;i++){
		if(x[i]==y[i]){
			s+="1";
		}else s+="0";
	}
	string x2=long_str(zhuan(s));
}
long long ans=0;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	ans=a[1];
	for(int i=2;i<=n;i++){
		ans=str_long(yu(long_str(ans),long_str(a[i])));
	}
	cout<<ans<<endl;
	return 0;
}
