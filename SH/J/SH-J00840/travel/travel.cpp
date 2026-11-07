#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout); 
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> c1 >> s1 >> c2 >> s2;
	int ans=0;
	if(c1==c2) ans+=1000;
	else{
		cout << "0000";
		return 0;
	}
	long long r=0,rs,x=0,xs;
	for(int i = 0 ; i < 3 ; ++i){
		if(i==2){
			rs=s1[i]-'A'+1;
			xs=s2[i]-'A'+1;
		}
		else {
			r=r*10+s1[i]-'0';
			x=x*10+s2[i]-'0';
		}
	}
	if (r==x) {
		ans+=100;
		if(rs>=1&&rs<=3 && xs>=1 &&xs<=3){
			ans+=10;
			if(max(rs,xs)-min(rs,xs)==1) ans+=1;
		}
		else if(rs>=4&&rs<=5 && xs>=4 &&xs<=5) ans+=11;
		
	}
	if(ans==0) cout << "0000";
	else cout << ans;
	return 0; 
} 
