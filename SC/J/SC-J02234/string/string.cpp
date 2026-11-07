#include<iostream>
#include<cstdio>
using namespace std;
int s[200001][3];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long int n,t=0,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		char b;
		cin>>a>>b;
		t++;
		s[t][1]=int(b);
		s[t][2]=a;
	}
	long long int l=1,r=t;
	while(l<=r){
		if(s[l][1]!=s[r][1]){
			if(s[l][2]>=s[r][2]){
				ans+=s[r][2];
				s[l][2]-=s[r][2];
				s[r][2]=0;
				r--;
			}else{
				ans+=s[l][2];
				s[r][2]-=s[l][2];
				s[l][2]=0;
				l++;
			}
		}else{
			if(s[l][2]>=s[r][2]){
				s[l][2]-=s[r][2];
				s[r][2]=0;
				r--;
			}else{
				s[r][2]-=s[l][2];
				s[l][2]=0;
				l++;
			}
		}
	}
	cout<<ans;
	return 0;
} 