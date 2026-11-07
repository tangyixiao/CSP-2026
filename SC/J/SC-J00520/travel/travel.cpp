#include<bits/stdc++.h>
using namespace std;
//#define int long long
const int N=5e5+5;
string a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a==c){
		cout<<"1";
		if(b[0]==d[0]&&b[1]==d[1]){
			cout<<"1";
			char x=b[2],y=d[2];
			if(x>='A'&&x<='C'&&y>='A'&&y<='C'||x>='D'&&x<='F'&&y>='D'&&y<='F'){
				cout<<"1";
				if(x-y==1||y-x==1){
					cout<<"1";
				}else{
					cout<<"0";
				}
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	
	return 0; 
} 
//100
/*
最后五分钟，摆烂了
虽然但是好像sc从来都没有过j组的奇葩行为大赏？
好吧好吧
今年j组的准考证号居然是我担生日（520），保佑我好吧 
预估就是一个100+？+90？+24
准确一点就是……？
100+[0,32]+[50,90]+24=[174,246]
我？？？
比去年还差没招了
还有一分半交卷了晚安
下午见~ 
*/
