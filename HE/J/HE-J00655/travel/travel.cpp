#include<bits/stdc++.h>
using namespace std;
int c1,c2;
string s1,s2;
int f=0,f2=0;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	//是否同一车厢 
	if(c1==c2) cout << 1;
	else cout << 0;
	//是否同一排
	int pai1=(s1[0]-'0')*10+(s1[1]-'0');
	int pai2=(s2[0]-'0')*10+(s2[1]-'0');
	if(c1==c2&&pai1==pai2){
		f=1;
		cout << 1;
	}
	else cout << 0;
	//是否同一侧
	char zimu1=s1[2];
	char zimu2=s2[2];
	if(f==1){
		//都在右侧 
		if(zimu1>='D'&&zimu1<='F'&&zimu2>='D'&&zimu2<='F'){
			f2=1;
			cout << 1;
		}
		//都在左侧 
		else if(zimu1<='C'&&zimu2<='C'){
			f2=2;
			cout << 1;
		}
		else cout <<  0;
	}
    else cout <<0;
	
	//是否相邻
	if(abs(zimu1-zimu2)==1&&f2==2) cout << 1;
	else if(f2==1) cout << 1;
	else cout << 0; 
	
	return 0;
}
