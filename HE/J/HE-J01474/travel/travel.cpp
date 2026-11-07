#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int f[5]={0,0,0,0,0};
	char c[5],s[5],c1[5],s1[5];
	cin>>c;
	cin>>s;
	cin>>c1;
	cin>>s1;
	int t=0;
	for(int i=0;i<=1;i++){
		if(c[i]-'0'==c1[i]-'0'){
			t++;
		}
	}
	if(t==2){
		f[1]=1;
		int cnt=0;
		for(int i=0;i<=1;i++){
			if(s[i]-'0'==s1[i]-'0'){
				cnt++;
			}
		}
		if(cnt==2){
			f[2]=1;
			if((s[2]<'D'&&s1[2]<'D') || (s[2]>'C'&&s1[2]>'C')){
				f[3]=1;
				if(((s[2]+1)==s1[2])||((s[2]-1)==s1[2])){
					f[4]=1;
				}
			}
		}
	}
	for(int i=1;i<=4;i++){
		cout<<f[i];
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
