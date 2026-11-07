#include<bits/stdc++.h>
using namespace std;
struct node{string chexiang,zuowei;}a,b;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(false),cout.tie(false);
	cin>>a.chexiang>>a.zuowei;
	cin>>b.chexiang>>b.zuowei;
	if(a.chexiang==b.chexiang){
		cout<<"1";
		long long int ax1=(long long int)(a.zuowei[0]-'0'),ax2=(long long int)(a.zuowei[1]-'0');
		long long int bx1=(long long int)(b.zuowei[0]-'0'),bx2=(long long int)(b.zuowei[1]-'0');
		long long int ax=10*ax1+ax2,bx=10*bx1+bx2;
		if(ax==bx){
			cout<<"1";
			long long int ay=(long long int)(a.zuowei[2]-'A'+1);
			long long int by=(long long int)(b.zuowei[2]-'A'+1);
			if(ay<=3&&by<=3){
				cout<<"1";
				if(ay==2||by==2) cout<<"1";
				else cout<<"0";
			}else if((ay==4&&by==6)||(ay==6&&by==4)) cout<<"11";
			else cout<<"00";
		}else cout<<"000";
	}else cout<<"0000";
	return 0;
}