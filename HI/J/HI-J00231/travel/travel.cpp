#include <bits/stdc++.h>
using namespace std;

bool rl[5];

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string co,so,ct,st;
	cin>>co>>so>>ct>>st;
	
	int coi = (co[0]-'0')*10 + co[1]-'0',cti = (ct[0] - '0')*10 + ct[1] - '0';
	
	if (coi == cti){
		rl[1] = 1;
		if (so[0] == st[0] && so[1] == st[1]){
			rl[2] = 1;
			if (('A' <= so[2] && so[2] <= 'C') && ('A' <= st[2] && st[2] <= 'C')){
				rl[3] = 1;
				for (int i = 0;i <= 1;i++){
					if (so[2]+i == st[2]){
						rl[4] = 1;
						break;
					}
				}			
			}else if (('D' <= so[2] && so[2] <= 'F') && ('D' <= st[2] && st[2] <= 'F')){
				rl[3] = 1;
				if (so[2]+1 == st[2]){
					rl[4] = 1;
				}else if(so[2]-1 == st[2]){
					rl[4] = 1;
				}
			}
		}
	}
	
	for (int i = 1;i <= 4;i++){
		cout<<rl[i];
	}
	
	return 0;
}

