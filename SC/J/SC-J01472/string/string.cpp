#include<bits/stdc++.h>
using namespace std;
long long n,a[200010],ans;
long long v[200010],l;
char c[200010];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		v[i]=v[i-1]+a[i];
		l+=a[i];
	}
	int cs=a[1],cs1=1,sc=a[n],sc1=n;
	for(int i=1;i<=n;i++){
		if(c[cs1]!=c[sc1]){
//			cout<<i<<'\n';;
			ans+=min(cs,sc);
		}
		if(cs>sc){
			cs-=sc;
			sc=0;
			sc1--;
		}
		if(cs<sc){
			sc-=cs;
			cs=0;
			cs1++;
		}
		if(cs==sc){
			cs=0;
			sc=0;
			sc1--;
			cs1++;
		}
		if(cs1>=sc1){
			break;
		}
		if(sc==0){
			sc=a[sc1];
		}
		if(cs==0){
			cs=a[cs1];
		}
	}
	cout<<ans;
}