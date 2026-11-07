#include<bits/stdc++.h>
using namespace std;
int n;
long long ans=0;
long long a;
char b;
map<long long,char> s;
long long lg=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>b;
		for(int j=1;j<=a;j++){
			s[lg]=b;
			lg++;
		}
	}
	//cout<<"lg"<<lg<<endl;
	long long x=lg;
	//while(lg--)cout<<s[lg];
	//cout<<"x"<<x;
	long long ln=x;
	//cout<<ln<<endl;
	if(ln%2==1){
		long long l=ln/2,r=ln/2;
		//cout<<l<<r<<endl;
		while(l>=-1&r<=n+1){
			if(s[l]!=s[r]){
				ans++;
				//cout<<"lr"<<l<<" "<<r<<endl;
			}
			l--;
			r++;
		}
	}else{
		long long l=ln/2-1,r=ln/2+1;
		cout<<l<<r;
		while(l>=0){
			if(s[l]!=s[r]){
				ans++;
			}
			l--;
			r++;
		}
	}
	cout<<ans;
	return 0;
}
