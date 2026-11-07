#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,zsiz,ans,isht;
struct A{
	ll s,id;
	char c;
}a[202020*2];
 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].s>>a[i].c;
		a[i].id=i;
		zsiz+=a[i].s;
	} 
	ll ls=0,rs=0,hs=zsiz/2,cs=0;
//	for(int i=1;i<=n;i++){
//		if(cs+a[i].s<hs){
//			cs+=a[i].s;
//		}
//		else if(cs+a[i].s==hs){
//			if(zsiz%2)a[i+2].s-=1;
//			break;
//		}
//		else{
//			if(zsiz%2)a[i].s-=1;
//			break
	ll i=1,j=n;
	for(;i<=n;i++){
		if(ls+a[i].s<=hs){
			ls+=a[i].s;
			for(;j>i;){
				if(rs+a[j].s<ls){
					rs+=a[j].s;
					if(a[i].c!=a[j].c)ans+=a[j].s;
					a[j].s=0;
					j--;
				}
				else if(rs+a[j].s==ls){
					rs=ls;
					if(a[i].c!=a[j].c)ans+=a[j].s;
					a[j].s=0;
					j--;
					break;
				}
				else{
					
					a[j].s-=abs(ls-rs);
					if(a[i].c!=a[j].c)ans+=abs(ls-rs);
					rs=ls;
					break;
				}
			}	
			
		}
		else{
			for(;j>i;j--)if(a[i].c!=a[j].c)ans+=a[j].s;
		} 
	}
	cout<<ans;
	return 0;
}