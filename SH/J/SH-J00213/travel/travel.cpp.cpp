#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout); 
	string c1,s1,c2,s2;
	int ans=0;
	cin >> c1 >> s1 >> c2 >> s2;
	int r1=c1[0]*10+c1[1],r2=s1[0]*10+s1[1];
	int x1=c2[0]*10+c2[1],x2=s2[0]*10+s2[1];
	char r3=s1[2],x3=s2[2];
	if(r1==x1){
		cout << 1;
		ans++;
		if(r2==x2){
			cout << 1;
			ans++;
			if(((r3=='A'|| r3=='B' || r3=='C') and(x3=='A'|| x3=='B' || x3=='C'))||((r3=='E'|| r3=='F')and(x3=='F'|| x3=='E'))){
				cout << 1;
				ans++;
				if((r3=='A' and x3=='B')||(r3=='B' and x3!='C')||(r3=='B' and x3=='A')||(r3=='C' and x3!='B')||(r3=='E' and x3!='F')||(r3=='F' and x3!='E')){
					cout << 1;
					ans++; 
				}
			}
		}
    }
    for(int i=ans;ans<4; ans++){
    	cout << 0;
	}
} 


