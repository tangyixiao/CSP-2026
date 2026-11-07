#include <bits/stdc++.h>
using namespace std;
#define LL long long
LL num1,num2,pai1,pai2;
bool ans1,ans2,ans3,ans4;
string sit1,sit2;
bool same_pian(){
	char sitt1=sit1[2];
	char sitt2=sit2[2];
	if(sitt1>='A'&&sitt1<='C'&&sitt2>='A'&&sitt2<='C')return true;
	if(sitt1>='D'&&sitt1<='E'&&sitt2>='D'&&sitt2<='E')return true;
	return false;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout); 
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>num1>>sit1>>num2>>sit2;
	pai1=1LL*(sit1[0]-'0')*10+1LL*(sit1[1]-'0');
	pai2=1LL*(sit2[0]-'0')*10+1LL*(sit2[1]-'0');
	if(num1==num2)ans1=true;
	else ans1=false;
	if(ans1&&pai1==pai2)ans2=true;
	else ans2=false;
	if(ans2&&same_pian())ans3=true;
	else ans3=false;
	if(ans3&&(sit1[2]-sit2[2]==1||sit1[2]-sit2[2]==-1))ans4=true;
	else ans4=false;
	cout<<(ans1?1:0)<<(ans2?1:0)<<(ans3?1:0)<<(ans4?1:0)<<'\n';
	return 0;
}
