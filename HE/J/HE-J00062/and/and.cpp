#include <bits/stdc++.h>
using namespace std;

int a[200005];

bool cmp(int c,int b){
	return c>b;
}

string er(int x){
	string s;
	while(x!=0){
		char c=x%2+'0';
		s=c+s;
		x/=2;
	}
	return s;
}

int shi(string op){
	int n=op.size(),ans=0,j=0;//n=4
	for(int i=n-1;i>=0;i--){
		int m=pow(2,j);
		ans+=m*(op[i]-'0');
		j++;
	}
	return ans;
}

int yu(int t,int x){
	string s1=er(t),s2=er(x),s3;//s1=1111 s2=1100
	int sz1=s1.size(),sz2=s2.size();//=4
	if(sz1!=sz2){
		int cha=abs(sz1-sz2);
		if(sz1>sz2){
			while(cha--){
				s2='0'+s2;
			}
		}
		else{
			while(cha--){
				s1='0'+s1;
			}
		}
	}
	sz1=s1.size();
	sz2=s2.size();
	for(int i=0;i<sz1;i++){
		if(s1[i]=='1'&&s2[i]=='1') s3+='1';
		else s3+='0';//1100
	}
	int k=0;
	int sz3=s3.size();//4
	while(s3[k]=='0'){
		for(int i=1;i<sz3;i++){
			s3[i-1]=s3[i];
		}
		sz3--;
	}
	return shi(s3);
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1,cmp);
	if(m==1){
		cout<<a[1];
		return 0;
	}
	if(m==n){
		int ttt=a[1];
		for(int i=2;i<=n;i++){
			ttt=yu(ttt,a[i]);
		}
		cout<<ttt;
		return 0;
	} 
	int tt=a[1];
	for(int i=2;i<=m;i++){
		tt=yu(tt,a[i]);//15&12
	}
	cout<<tt;
	return 0;
} 
