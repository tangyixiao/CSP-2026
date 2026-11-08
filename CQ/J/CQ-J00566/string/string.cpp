#include<bits/stdc++.h>

using namespace std;
int n;
string s="";
const int N=2e5+10;
int x[N];
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	long long mx;
	for(int i=1;i<=n;i++){
		cin>>x[i]>>c[i];
	}
	mx=x[1];
	for(int i=2;i<=n;i++){
		mx=__gcd(mx,1LL*x[i]);
		if(mx==1)break;
	}
	if(mx!=1){
		for(int i=1;i<=n;i++){
			x[i]/=mx;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=x[i];j++){
			s+=c[i];
		}
	}
	//cout<<s<<'\n';
	long long sum=0;
	string s1="",s2="";
	for(int i=0;i<s.size()/2;i++){
		s1+=s[i]; 
	}
	//cout<<s1<<'\n';
	for(int i=((s.size())%2==0?s.size()/2:s.size()/2+1);i<s.size();i++){
		s2+=s[i];
	}
	//cout<<s2<<'\n';
	reverse(s2.begin(),s2.end());
	
	for(int i=0;i<s2.size();i++){
		if(s1[i]!=s2[i])sum++;
	}
	//cout<<sum<<' '<<mx<<' ';
	cout<<1LL*sum*mx;
	return 0;
}
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/
//Trick||Treat!
