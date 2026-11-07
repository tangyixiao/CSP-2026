#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int c1,c2,l1,l2;
	char s1,s2;
	cin >> c1 >> l1 >> s1 >> c2 >> l2 >> s2;
	int f[4]={0,0,0,0};
	if(c1==c2){
		f[0]=1;
		if((l1==l2)){
			f[1]=1;
			if((s1<='C'&&s2<='C')||(s1>='D'&&s2>='D')){
				f[2]=1;
				if(abs(s1-s2)==1)f[3]=1;
			}
		}
	}
	for(int i=0; i<4; ++i)cout << f[i];
	return 0;
}