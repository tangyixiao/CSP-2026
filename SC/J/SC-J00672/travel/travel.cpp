#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
char a[10],b[10],s[10],d[10];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	scanf("%s",a+1);
		scanf("%s",b+1);
		scanf("%s",s+1);
		scanf("%s",d+1);
	if(a[1]==s[1]&&a[2]==s[2]){
		cout<<1;
		if(b[1]==d[1]&&b[2]==d[2]){
			cout<<1;
			if((b[3]!='E'&&b[3]!='F')&&(d[3]!='E'&&d[3]!='F')){
				cout<<1;
		if(abs(b[3]-d[3])==1){
			cout<<1;
		}else{
			cout<<0;
		}
			}else{
				if((b[3]=='E'||b[3]=='F')&&(d[3]=='E'||d[3]=='F')){
					cout<<1;
					cout<<1;
				}else{
					cout<<0<<0;
				}
				
			}
		}
		else{
			cout<<0<<0<<0;
		}
	}
	else{
		cout<<0<<0<<0<<0;
	}
	return 0;
}
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
