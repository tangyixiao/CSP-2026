#include<bits/stdc++.h>
using namespace std;
long long n,shul,zhong,am;
string s;
string a1="",a2="";
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=0;i<n;i++){
		long long p=0;
		char a;
		cin>>p>>a;
		for(long long j=0;j<p;j++){
			s=s+a;
		}
		shul=shul+p;
	}
	if(shul%2==1){
		zhong=(shul+1)/2; 
		for(long long i=0;i<zhong-1;i++){
			a1=a1+s[i];
		}
		for(long long i=zhong;i<shul;i++){
			a2=s[i]+a2;
		}
		for(long long i=0;i<zhong-1;i++){
			if(a1[i]!=a2[i]){
				am=am+1;
			}
		}
	}else{
		zhong=shul/2;
		for(long long i=0;i<zhong;i++){
			a1=a1+s[i];
		}
		for(long long i=zhong;i<shul;i++){
			a2=s[i]+a2;
		}
		for(long long i=0;i<zhong;i++){
			if(a1[i]!=a2[i]){
				am=am+1;
			}
		}
	}
	cout<<s<<endl<<a1<<endl<<a2<<endl;
	cout<<am;
	return 0;
}
