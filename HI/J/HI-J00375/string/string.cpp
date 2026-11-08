#include<bits/stdc++.h>
using namespace std;
long long n=0,a[200500]={0},ans=0;
char c[200500]={' '};
string s,s1;
int main(){
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		for(long long j=1;j<=a[i];j++){
			s+=c[i];
		}
	}
	int l1=s.size(),l2=0;
	if(l1%2==0){
		l2=l1/2;
	}else{
		l2=(l1-1)/2;
	}
	for(int i=l1-1;i>l2;i--){
		s1+=s[i];
	}
//	cout<<s<<endl<<s1;
	for(int i=0;i<s1.size();i++){
		if(s[i]!=s1[i]){
			ans++;
		}
	}
	cout<<ans;
	
	return 0;
}
