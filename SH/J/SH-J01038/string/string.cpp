#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string s,s1,sw;
	char c;
	int a;
	long long pp=0;
	long long ans=0;
	for(int i=0;i<n;i++){
		cin>>a;
		cin>>c;
		for(int j=pp;j<pp+a;j++){
			s[j]=c;
		}
		pp+=a;
	}
	bool sss;
	if(pp%2==0)sss=0;
	else sss=1;
long long w=0;
	if(sss==0){
		long long ww=pp/2;
		for(int i=0;i<ww;i++){
			s1[i]=s[i+ww];
		}
		for(int i=ww-1;i>=0;i--){
			sw[w]=s1[i];
			w++;
		}
		for(int i=0;i<ww;i++){
			if(s[i]!=sw[i])ans++;
		}
		cout<<ans;
	}
	else{
		w=0;
		long long ww=pp/2;
		for(int i=0;i<ww;i++){
			s1[i]=s[i+pp/2+1];
		}
		for(int i=ww-1;i>=0;i--){
			sw[w]=s1[i];
			w++;
		}
		for(int i=0;i<ww;i++){
			if(s[i]!=sw[i])ans++;
		}
		cout<<ans;
		
	}
	return 0;
}
