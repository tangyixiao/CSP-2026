#include<bits/stdc++.h>
using namespace std;
int fc,sc;
string fw,sw;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> fc >> fw >> sc >> sw;
	int fp,sp;
	char fz,sz;
	fp = int(fw[1]-'0')+10*int(fw[0]-'0');
	sp = int(sw[1]-'0')+10*int(sw[0]-'0');
	fz = fw[2];
	sz = sw[2];
	if(fc == sc)
		cout << 1;
	else
		cout << 0;
	if(fc == sc && fp == sp)
		cout << 1;
	else
		cout << 0;
	if(fc == sc && fp == sp){
		if(fz >= 'D')
			cout << (sz >='D');
		else
			cout << (sz <= 'C');
	}
	else
		cout << 0;
	if(fc == sc && fp == sp){
		if(fz >= 'D' && sz >= 'D' || fz <= 'C' && sz <= 'C'){
			if(abs(int(fz-sz)) == 1)
				cout << 1;
			else
				cout << 0;
		}
		else
			cout << 0;
	}
	else
		cout << 0;
	return 0;
} 
