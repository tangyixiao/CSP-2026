#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+5;
string as="";
ll ta[N];
bool te=true,temp=true;
bool same=false;
//string sames="";
ll butong;
ll cnt;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ll n;cin>>n;
	for(ll i=0;i<n;++i){
		ll a;string s;cin>>a>>s;
		ta[i]=a;
		//if(i>0&&ta[i]==ta[i-1])cnt++;
//		sames+=s;
//		cerr<<sames<<'\n';
		for(ll i=0;i<a;++i)as+=s;
		if(a==1)te=true;
		else te=false,temp=false;
		for(ll i=0;i<n;++i){
			if(ta[i]==ta[i+1])same=true;
			
		}
		butong=n-cnt;
//		cerr<<"weizhi: "<<cnt<<'\n';
//		if(sames[cnt++]!=sames[cnt]){
//			cerr<<"zifu: "<<sames[cnt++]<<sames[cnt]<<'\n';
//			butong++;
//			cerr<<"butongshuliang: "<<butong<<'\n';
//			++cnt;
//			cerr<<"weizhi: "<<cnt<<'\n';
//		}
		
	}
	if(temp)te=true;
	else te=false;
	bool b;
	for(ll i=0;i<(ll)as.size();++i){
		if(as[i]==as[as.size()-1-i])b=true;
		else{
			b=false;break;
		}
	}
	if(b){
		//cerr<<"iii"<<'\n';
		cout<<0<<'\n';
		return 0;
	}
	else if(te){//cerr<<n<<'\n';
		cout<<n/2<<'\n';
		return 0;
	}
	//else cout<<as.size()/2<<'\n';;
	else if(same){
		cout<<ta[1]<<'\n';
	}
	
	return 0;
}
/*
2
2 a
3 a
*/
/*
5
1 a
1 b
1 c
1 d
1 e
*/
/*
5
3 a
3 c
3 d
3 f
3 e
*/
