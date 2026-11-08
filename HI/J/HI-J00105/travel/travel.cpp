#include<bits/stdc++.h>
using namespace std;

int main(){
	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	int n=0;
	cin >> c1 , s1 , c2 , s2;
	
	if(c1==c2){
		n += 1000;
		if(s1[0]==s2[0]){
			if(s2[1]==s2[1]){
				n += 100;
				if(s1[2]<=67&&s2[2]<=67){
					n += 10;
					if(s1[2]==s2[2]+1||s1[2]==s2[2]-1){
						n+=1;
					}
				}else if(s1[2]>=68&&s2[2]>=68){
					n += 11;
				}
			}
		}
	}else{
		cout << 0000 ;
		return 0;
	}

	cout << n;
	return 0;
}
