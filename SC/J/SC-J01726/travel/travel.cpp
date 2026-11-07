#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define endl '\n'
#define pii pair<int,int>
const int M=1e5+5;
char a[12];
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	for(int i=1;i<=10;i++) cin>>a[i];
	if(a[1]==a[6] && a[2]==a[7]){
		cout<<1;
		if(a[3]==a[8] && a[4]==a[9]){
			cout<<1;
			if(('A'<=a[5] && a[5]<='C' && 'A'<=a[10] && a[10]<='C') || ('D'<=a[5] && a[5]<='F' && 'D'<=a[10] && a[10]<='F')){
				cout<<1;
				if((a[5]=='A' && a[10]=='B') || (a[5]=='B' && a[10]=='C') || (a[5]=='D' && a[10]=='F')){
					cout<<1;
				}
				else cout<<0;
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}
//RP++
//10-31 09:16:31 想npy 
//那些做奇葩代码鉴赏的把我放上去嘛 