#include<bits/stdc++.h>
using namespace std;
#define ll long long
string s;
char c[200009],da[200009];
ll n,a[200009];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	ll js=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		//js+=a[i];
		//cout<<js<<' ';
		//da[0]=c[1];
		for(int j=1;j<=a[i];j++){
			da[js]=c[i];
			js++;
			//cout<<da[i]<<endl;
		}
		//cout<<js;
	}
	//for(int i=0;i<=js;i++){
	//	cout<<da[i];
	//}
	//cout<<s<<endl;
	//ll cd=s.size();
	//cout<<cd<<endl;
	ll he=0;
	for(ll i=0;i<js/2;i++){
		ll ls=js-i-1;
		//cout<<i<<' '<<ls<<endl;
		if(da[i]!=da[js-i-1]){
			he++;
			//cout<<js-i-1<<endl;
			//cout<<s[i]<<' '<<s[js-i-1]<<endl;
			//cout<<s[i]<<' 's[cd-i];
			//s[i]=s[cd-i];
		}
	}
	cout<<he;
}

