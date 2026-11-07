#include<bits/stdc++.h>
using namespace std;
#define ll long long
char c1[5],s1[5],c2[5],s2[5];
ll ans,sum;
ll w,k;
ll s[10]={'A','B','C','D','F'};
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>c1+1>>s1+1>>c2+1>>s2+1;
	for(ll i=1;i<=2;i++){
		if(c1[i]==c2[i]){
			ans++;
		}
		if(s1[i]==s2[i])
		sum++;
	}
	if(ans==2)
		cout<<1;
	else
		cout<<0;
	if(ans==2&&sum==2){
		cout<<1;
		if((s1[3]=='D'&&s2[3]=='F')||(s1[3]=='F'&&s2[3]=='D')){
			cout<<1;
			w=1;
		}
		else if((s1[3]=='A'||s1[3]=='B'||s1[3]=='C')&&(s2[3]=='A'||s2[3]=='C'||s2[3]=='B')){
			cout<<1;
			w=1;
		}
	}
	else{
		cout<<0;
	}
	if(w==0){
	cout<<0<<0;
	}
	if(w==1){
		if((s1[3]=='D'&&s2[3]=='C')||(s1[3]=='C'&&s2[3]=='D')){
			cout<<0;
			return 0;
		}
		for(ll i=0;i<5;i++){
			if(s1[3]==s[i]){
				if(s2[3]==s[i-1]||s2[3]==s[i+1]){
					cout<<1;
					k=1;
					break;
				}
			}
		}
		if(!k)
			cout<<0;
	}
	return 0;
}