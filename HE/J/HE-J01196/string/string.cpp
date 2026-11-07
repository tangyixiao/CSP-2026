#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,js=0,t[200003],he=0,tj=0;
string s[200003];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t[i]>>s[i];
		he+=t[i];
	}
	ll k=0;
	for(int i=0;i<n;i++){
		if(js>=he/2){
			k=i;
			break;
		}
		js+=t[i];
	}
	k+=1;
	for(ll i=k,j1=1,j2=1;i-j1>0;){
		if(s[i-j1]!=s[i+j2]){
			if(t[i-j1]<t[i+j2]){
				tj+=t[i-j1];
				t[i+j2]-=t[i-j1];
				j1+=1;
			}else if(t[i-j1]>t[i+j2]){
				tj+=t[i+j2];
				t[i-j1]-=t[i+j2];
				j2++;
			}else{
				j1++;j2++;
			}
		}
	}
	cout<<tj;
	return 0;
		

} 
