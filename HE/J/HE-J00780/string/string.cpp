#include<bits/stdc++.h>
using namespace std;
int n,a[200005];
long long to[30],tot,maxx=-1;
char s[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	if(n==1){
		cout<<"0";
		return 0;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i]>>s[i];
		to[s[i]-'a']+=a[i];
		tot+=a[i];
	}
	for(int i=0;i<n;i++){
		maxx=max(maxx,to[i]);
	}
	if(maxx==tot){
		cout<<0;
		return 0;
	}
	if(maxx>=((float)tot/2)){
		cout<<tot-maxx;
	}
	else{
		cout<<tot-ceil((float)tot/2)<<" ";
		return 0;
	}
	if(n==2){
		cout<<min(a[1],a[2]);
		return 0;
	}
	return 0;
}
