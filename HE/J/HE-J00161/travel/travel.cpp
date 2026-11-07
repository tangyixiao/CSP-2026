#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool bo[10],l,r;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		bo[1]=1;
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			bo[2]=1;
		}if(bo[2]){
			if(s1[2]<='C'&&s2[2]<='C'){
				l=1;
			}else if(s1[2]>='D'&&s2[2]>='D'){
				r=1;
			}if(l||r){
				bo[3]=1;
			}
		}if(bo[2]&&bo[3]){
			if(l){
				if(s1[2]=='B'||s2[2]=='B'){
					bo[4]=1;
				}
			}else if(r){
				bo[4]=1;
			}
		}
	}for(int i=1;i<=4;i++){
		cout<<bo[i];
	}return 0;
}
