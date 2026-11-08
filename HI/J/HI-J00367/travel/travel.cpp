#include<bits/stdc++.h>
using namespace std;
struct seat{
	string chexiang;
	string pai;
	int wei;
	string ce;
};
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	seat a[2];
	string c1,c2,s1,s2;
	cin>>c1>>s1>>c2>>s2;
	int ans1=0,ans2=0,ans3=0,ans4=0;
 	
	a[0].chexiang=c1;a[1].chexiang=c2;
	char l1=s1[0]; char l3=s2[0];
	char l2=s1[1]; char l4=s2[1];
	a[0].pai=l1+l2;
	a[1].pai=l3+l4;
	
	
	if(s1[2]=='A'||s1[2]=='B'||s1[2]=='C') a[0].ce='l';
	else if(s1[2]=='D'||s1[2]=='F') a[0].ce='r';
	
	if(s2[2]=='A'||s2[2]=='B'||s2[2]=='C') a[1].ce='l';
	else if(s2[2]=='D'||s2[2]=='F') a[1].ce='r';
	
	a[0].wei=(int)s1[2];
	a[1].wei=(int)s2[2];
	
	
	if(a[0].chexiang==a[1].chexiang ) {
		ans1=1;
		if(a[0].pai==a[1].pai){
			ans2=1;
			if(a[0].ce==a[1].ce) {
				ans3=1;
				if((a[0].wei=='F'&&a[1].wei=='D')||(a[0].wei=='D'&&a[1].wei=='F')) {
					ans4=1;	
				}
				else if(abs(a[0].wei-a[1].wei)==1) {
					ans4=1;
				}
				
			}
		}
	}
	cout<<ans1<<ans2<<ans3<<ans4;
	
	return 0;
}
