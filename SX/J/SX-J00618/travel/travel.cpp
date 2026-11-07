#include <bits/stdc++.h>
using namespace std;
int n,m;
char a[10],b[10];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	scanf("%d%s%d%s",&n,a+1,&m,b+1);
	if(n == m){
		cout<<1;
		if(a[1] == b[1] && a[2] == b[2]){
			cout<<1;
			if((a[3] == 'A' || a[3] == 'B' || a[3] == 'C') && (b[3] == 'A' || b[3] == 'B' || b[3] == 'C')){
				cout<<1;
				if((a[3] == 'A' && b[3] == 'B') || (a[3] == 'B' && (b[3] == 'A' || b[3] == 'C')) || (a[3] == 'C' && b[3] == 'B')){
					cout<<1;
				}
				else{
					cout<<0;
				}
			}
			else if((a[3] == 'D' || a[3] == 'F') && (b[3] == 'D' || a[3] == 'F')){
				cout<<11;
			}
			else{
				cout<<0<<0;
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