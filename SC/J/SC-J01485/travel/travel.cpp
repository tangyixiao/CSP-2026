#include<bits/stdc++.h>
using namespace std;

char c1[10];
char s1[10];
char c2[10];
char s2[10];
int a[10];

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	for(int i=1;i<=2;i++) cin>>c1[i];
	
	for(int i=1;i<=3;i++) cin>>s1[i];
	
	for(int i=1;i<=2;i++) cin>>c2[i];
	
	for(int i=1;i<=3;i++) cin>>s2[i];
	
	
	a[1]=1,a[2]=1,a[3]=1,a[4]=1;
	
	bool flag=1;
		for(int i=1;i<=2;i++){
			if(c1[i]!=c2[i]){
				for(int j=1;j<=4;j++) a[j]=0;
				flag=0;
				break;
			}
		}
		if(flag!=0){
			a[1]=1;
			for(int i=1;i<=2;i++){
				if(s1[i]!=s2[i]){
					flag=0;
					for(int j=2;j<=4;j++) a[j]=0;
					break;
				}
			}
		}
		if(flag!=0){
			a[2]=1;
			if(('A'<=s1[3]&&s1[3]<='C' && 'A'<=s2[3]&&s2[3]<='C') || ('D'<=s1[3]&&s1[3]<='F' && 'D'<=s2[3]&&s2[3]<='F')){
				a[3]=1;
			}else{
				flag=0;
				a[3]=0,a[4]=0;
			}
		}
		if(flag!=0){
			int x=s1[3]-'0';
			int y=s2[3]-'0';
			if(abs(x-y)==1){
				a[4]=1;
			}else{
				a[4]=0;
			}
		}
	
	
	for(int i=1;i<=4;i++) cout<<a[i];

	return 0;
}
