#include<bits/stdc++.h>
using namespace std;

string chexiangR, chexiangX;
int paiR, paiX;
char zuoweiR, zuoweiX;
bool Rc, Xc;

int main(){
	freopen("travel.in",  "r", stdin);
	freopen("travel.out", "w", stdout);
	
	cin>>chexiangR>>paiR>>zuoweiR>>chexiangX>>paiX>>zuoweiX;
	
	if(zuoweiR == 'A' || zuoweiR == 'B' || zuoweiR == 'C') Rc = true;
	if(zuoweiR == 'D' || zuoweiR == 'E') Rc = false;
	if(zuoweiX == 'A' || zuoweiX == 'B' || zuoweiX == 'C') Xc = true;
	if(zuoweiX == 'D' || zuoweiX == 'E') Xc = false;
	
	
	if(chexiangR == chexiangX) 
		cout<<1;
	else 
		cout<<0;
	if(chexiangR == chexiangX && paiR == paiX)
		cout<<1;
	else 
		cout<<0;
	if(chexiangR == chexiangX && paiR == paiX && Rc == Xc) 
		cout<<1;
	else 
		cout<<0;
	if(chexiangR == chexiangX && paiR == paiX && Rc == Xc && zuoweiR > zuoweiX && zuoweiR - zuoweiX == 1 && zuoweiR != 'D')
		cout<<1;
	else if(chexiangR == chexiangX && paiR == paiX && Rc == Xc && zuoweiR < zuoweiX && zuoweiX - zuoweiR == 1 && zuoweiX != 'D')
		cout<<1;
	else cout<<0;
	
	
	return 0;
} 
