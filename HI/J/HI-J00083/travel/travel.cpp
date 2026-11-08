#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string rc,rs,xc,xs;
	cin>>rc>>rs>>xc>>xs;
	if(rc == xc){
		cout<<1;
		if(rs[0] == xs[0] && rs[1] == xs[1]){
			cout<<1;
			if((rs[2] <= 'C' && xs[2] <= 'C') || (rs[2] > 'C' && xs[2] > 'C')){
				cout<<1;
				map <char,int> mp;
				mp['A'] = 1;
				mp['B'] = 2;
				mp['C'] = 3;
				mp['D'] = 5;
				mp['F'] = 6;
				if(mp[rs[2]] == mp[xs[2]] - 1 || mp[rs[2]] == mp[xs[2]] + 1){
					cout<<1;
				}else{
					cout<<0;
				}
			}else{
				cout<<0<<0;
			}
		}else{
			cout<<0<<0<<0;
		}
	}else{
		cout<<0<<0<<0<<0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
