#include<bits/stdc++.h>
using namespace std;
using lint=long long;
using llint=__int128;
using ldouble=long double;
const int INF=1e9;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string ax,ay,bx,by;
	cin>>ax>>ay>>bx>>by;
	if(ax==bx) cout<<"1";
	else{
		cout<<"0000";
		return 0;
	}
	int numa=(ay[0]-'0')*10+(ay[1]-'0');
	int numb=(by[0]-'0')*10+(by[1]-'0');
	if(numa==numb) cout<<"1";
	else{
		cout<<"000";
		return 0;
	}
	int a_ch=ay[2]-'A'+1,b_ch=by[2]-'A'+1;
	if((a_ch<=3&&b_ch<=3)||(a_ch>=4&&b_ch>=4)) cout<<"1";
	else{
		cout<<"00";
		return 0;
	}
	if(abs(a_ch-b_ch)==1){
//		cout<<a_ch<<" "<<b_ch;
		if(a_ch==3&&b_ch==4) cout<<"0";
		else if(a_ch==4&&b_ch==3) cout<<"0";
		else cout<<"1";
	}
	else cout<<"0";
	return 0;
} 
