#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int n,cnt=0;
string s;
int main(){
	freopen("string6.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int ini;
		char ins;
		scanf("%d %c",&ini,&ins);
		for(int i=0;i<ini;i++){
			s+=ins;
		}
	}
	int si=s.size();
	for(int i=si-1;i>=si/2;i--){
		if(s[i]!=s[(si-1-i)]){
			cnt++;
		}
	}
	printf("%d",cnt);
	return 0;
}
