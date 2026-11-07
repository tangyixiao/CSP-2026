#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;
struct Node{
	ll s;
	char x;
}a[200005];
ll ans=0,n;
//ll zc(){
//	ll ans=0;
//	string str=" ";
//	for(ll i=1;i<=n;i++){
//		for(ll j=1;i<=a[i].s;j++) str+=a[i].x;
//	}
//	for(ll i=1;i<=n;i++){
//		for(ll j=n;j>=1;j--){
//			if(str[i]!=str[j]) ans++;
//		}
//	}
//	return ans;
//}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	for(ll i=1;i<=n;i++) cin>>a[i].s>>a[i].x;
	ll i=1,j=n;
	//cout<<zc();
//	//if(n<10000) cout<<zc();
	while(a[i].s&&a[j].s&&i<=j){
		//cout<<"~"<<i<<","<<j<<endl;
		if(a[i].x!=a[j].x){
			if(a[i].s>a[j].s){
				ans=ans+(a[i].s-a[j].s);
				a[i].s-=a[j].s;
				j--;
				//cout<<"*"<<ans<<"\n";
			}
			else if(a[i].s<a[j].s){
				ans=ans+(a[j].s-a[i].s);
				a[j].s-=a[i].s;
				i++;
				//cout<<"&"<<ans<<"\n";
			}
			else i++,j--,ans+=a[i].s;
		}
		else{
			if(a[i].s>a[j].s){
				a[i].s-=a[j].s;
				j--;
				//cout<<"*"<<ans<<"\n";
			}
			else if(a[i].s<a[j].s){
				a[j].s-=a[i].s;
				i++;
				//cout<<"&"<<ans<<"\n";
			}
			else i++,j--;
		}
		//cout<<ans<<endl;
	}
	cout<<ans;
	fclose(stdin),fclose(stdout);
	return 0;
}