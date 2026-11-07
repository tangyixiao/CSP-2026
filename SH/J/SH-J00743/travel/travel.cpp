#include<bits/stdc++.h>
using namespace std;
int c,C;
char s[5],S[5];
int ans[5];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c ;
	cin >> s;
	cin >> C;
	cin >> S;
	if(c==C)ans[1]=1;
	else ans[1]=0;
	if(ans[1]==0){
		cout << "0000";
		return 0;
	}
	int t=(int)((s[0]-'0')*10+s[1]-'0');
	int T=(int)((S[0]-'0')*10+S[1]-'0');
	if(T==t)ans[2]=1;
	else ans[2]=0;
	if(ans[2]==0){
		cout << "1000";
		return 0;
	}
	int l=(int)(s[2]-'A');
	int L=(int)(S[2]-'A');
	if(l>=0&&l<3&&L>=0&&L<3||l>=3&&l<=4&&L>=3&&L<=4){
		ans[3]=1;
	}
	else ans[3]=0;
	if(ans[3]==0){
		cout << "1100";
		return 0;
	}
	if(l==0&&L==2||l==2&&L==0){
		cout << "1110";
		return 0;
	}
	else cout << "1111";
	return 0;
} 
