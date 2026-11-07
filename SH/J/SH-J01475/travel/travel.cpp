#include<bits/stdc++.h>
using namespace std;
string seats[100005][2];
vector<int> n={0,0,0,0};
bool tongyipai(char a,char b){
	if((a>=65&&a<=67)&&(b>=65&&b<=67)||(a==68&&b==70)||(a==70&&b==68)){
		return true;
	}else{
		return false;
	}
}
void printarr(vector<int> a){
	for(int i=0;i<4;i++){
		cout<<a[i];
	}
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	cin>>seats[0][0]>>seats[0][1]>>seats[1][0]>>seats[1][1];
	if(seats[0]!=seats[1]){
		if(seats[0][0]==seats[1][0]){
			n[0]=1;
			string zwh1=seats[0][1],zwh2=seats[1][1];
			if((zwh1[0]-48)*10+zwh1[1]-48==(zwh2[0]-48)*10+zwh2[1]-48){
				n[1]=1;
				if(tongyipai(zwh1[2],zwh2[2])){
					n[2]=1; 
					char maX=(zwh1[2]>zwh2[2]?zwh1[2]:zwh2[2]);
					char miN=(zwh1[2]>zwh2[2]?zwh2[2]:zwh1[2]);
					if(maX<=67&&maX-miN==1||maX==70&&miN==68){
						n[3]=1;
					}
					printarr(n);
					return 0;
				}else{
					printarr(n);
					return 0;
				}
			}else{
				printarr(n);
				return 0;
			}
		}else{
			printarr(n);
			return 0;
		}
	}else{
		return 0;
	}
	return 0;
} 
