#include<bits/stdc++.h>
using namespace std;
char ta[2],tb[2],a[3],b[3];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>ta[0]>>ta[1];
	cin>>a[0]>>a[1]>>a[2];
	cin>>tb[0]>>tb[1];
	cin>>b[0]>>b[1]>>b[2];
	if(ta[0]==tb[0]&&ta[1]==tb[1]){
		if(a[0]==b[0]&&a[1]==b[1]){
			if(('A'<=a[2]&&a[2]<='C')&&('A'<=b[2]&&b[2]<='C')){
				if(a[2]==b[2]-1||a[2]==b[2]+1){
					cout<<"1111";
				}
				else{
					cout<<"1110";
				}
			}
			else if((a[2]=='D'&&a[3]=='F')||(a[2]=='F'&&a[3]=='D')){
				cout<<"1111";
			}
			else{
				cout<<"1100";
			}
		}
		else{
			cout<<"1000";
		}
	}
	else{
		cout<<"0000";
	}
	return 0;
}
