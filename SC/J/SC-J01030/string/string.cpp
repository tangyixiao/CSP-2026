#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s,tmp;
	int n=0,mul[200005];
	long long num=0,ans=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>mul[i]>>tmp;
		num+=mul[i];
		s.append(tmp);
	}
	int i=0;
	int t=s.length()-1;
	int rest=0;
	while(i<t){
		rest=mul[i]-mul[t];
		if(s[i]!=s[t]){
			ans+=min(mul[i],mul[t]);
			if(rest>0){
				t-=1;
				mul[i]=rest;
			}else if(rest<0){
				i+=1;
				mul[t]=abs(rest);
			}else{
				t--;i++;
			}
		}else{
			if(rest>0){
				t-=1;
				mul[i]=rest;
			}else if(rest<0){
				i+=1;
				mul[t]=abs(rest);
			}else{
				t--;i++;
			}
		}
	}
	cout<<ans;
	return 0;
}