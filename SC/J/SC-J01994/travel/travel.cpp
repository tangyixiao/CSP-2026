#include<bits/stdc++.h>
using namespace std;
const int N=2e5+1000;
int a[N];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	string c1,c2,s1,s2;
	cin>>c1>>s1>>c2>>s2;
	int R=(s1[0]-'0')*10+(s1[1]-'0');
	int X=(s2[0]-'0')*10+(s2[1]-'0');
	//车厢 
	if(c1==c2)cout<<"1";
	else{
		cout<<"0000";
		return 0; 
	}
	//排 
	if(R==X)cout<<"1";
	else {
		cout<<"000";
		return 0;
	}
	// 同侧 
	if(((int)s1[2]>=65)&&((int)s1[2]<=67)&&((int)s2[2]>=65)&&((int)s2[2]<=67))cout<<"1";
	else if((((int)s1[2]==68)||((int)s1[2]==69))&&(((int)s2[2]==68)||((int)s2[2]==69)))cout<<"1";
	else {
		cout<<"00";
		return 0; 
	}
	//相邻 
	int L=max((int)s1[2],(int)s2[2]);
	int K=min((int)s1[2],(int)s2[2]);
	if(L<=67&&K>=65&&L-K==1)cout<<"1";
	else if(K>=68&&L-K==2)cout<<"1";
	else cout<<"0";
	return 0;
} 
