#include<bits/stdc++.h>
using namespace std;

string c1,s1,c2,s2;
int main(){
	freopen("travel1.in","r",stdin);
	freopen("travel.out","w",stdout); 
	cin >> c1 >> s1 >> c2 >> s2;
	int len1=c1.size(),len2=s1.size(),len3=c2.size(),len4=s2.size();
	if(len1!=len3) cout << "0000";
	else{
		int f=0;
		for(int i=0;i<len1;i++){
			if(c1[i]!=c2[i]) f=1;
		}
		if(f) cout << "0000";
		else{
			cout << "1";
			if(s1[0]==s2[0] && s1[1]==s2[1]){
				cout << "1";
				if((s1[len2-1]<='C' && s2[len4-1]<='C') || (s1[len2-1]>='D' && s2[len4-1]>='D')){
					cout << "1";
					if(s1[len2-1]+1==s2[len4-1] || s1[len2-1]-1==s2[len4-1]) cout << "1";
					else cout << "0";
				}
				else cout << "00";
			}
			else cout << "000";
		}
	}
	return 0;
}
