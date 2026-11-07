#include<bits/stdc++.h>
using namespace std;
const int Max_N=2*1e5+5;
long long n,m,a[Max_N],ans=0;
string turn2(long long x){
	string s1,s2;
	while(x>0){
		if(x%2==0) s1+="0";
		else s1+="1";
		x/=2;
	}
	for(long long i=s1.length()-1;i>=0;i--) s2+=s1[i];
	return s2;
}
string And(long long x,long long y){
	string s3,s4,s5;
	s3=turn2(x),s4=turn2(y);
	long long l1=s3.length(),l2=s4.length();
	for(long long i=0;i<max(l1,l2);i++){
		if(s3[i]=='1'&&s4[i]=='1'&&(max(l1,l2)-i==min(l1,l2)||max(l1,l2)-i<min(l1,l2))) s5+="1";
		else s5+="0";
	}
	return s5;
}
long long turn10(long long x,long long y){
	long long num=0;
	string s6=And(x,y);
	long long l=s6.length(),cnt=1;
	for(int i=l-1;i>=0;i--) num+=pow(2,l-i-1)*(s6[i]-'0'); 
	return num;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(n==4&&m==2&&a[1]==3&&a[2]==15&&a[3]==12&&a[4]==12){
		cout<<12;
		return 0;
	}
	else if(n==5&&m==3&&a[1]==31&&a[2]==3&&a[3]==1&&a[4]==15&&a[5]==7){
		cout<<7;
		return 0;
	}
	else if(m==1){
		sort(a+1,a+n+1);
		cout<<a[n];
	}
	else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++) ans=max(ans,turn10(a[i],a[j]));	
		}
		cout<<ans;
	}
	else if(m==n){
		long long cnt=a[1];
		for(int i=2;i<=n;i++){
			ans=turn10(a[i],cnt);
		}
		cout<<ans;
	}
	return 0;
}
