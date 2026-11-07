#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int Rxiang,Xxiang,Rpai,Xpai;
	string Rzuohao,Xzuohao;
	cin>>Rxiang>>Rpai>>Rzuohao>>Xxiang>>Xpai>>Xzuohao;
	if(Rxiang==Xxiang&&Rxiang!=01&&Rxiang!=16&&Xxiang!=01&&Xxiang!=16){//1
		cout<<1;
			if(Rpai==Xpai){//2
		cout<<1;
		if(Rzuohao=="A"||Xzuohao=="B"&&Rzuohao=="A"||Xzuohao=="C"&&Rzuohao=="B"||Xzuohao=="C"&&Rzuohao=="B"||Xzuohao=="A"&&Rzuohao=="C"||Xzuohao=="A"&&Rzuohao=="C"||Xzuohao=="B"&&Rzuohao=="D"||Xzuohao=="F"&&Rzuohao=="F"||Xzuohao=="D"){
		cout<<1;//3
		if(Rzuohao=="A"||Xzuohao=="B"&&Rzuohao=="B"||Xzuohao=="A"&&Rzuohao=="B"||Xzuohao=="C"&&Rzuohao=="C"||Xzuohao=="B"&&Rzuohao=="D"||Xzuohao=="F"&&Rzuohao=="F"||Xzuohao=="D"){
	cout<<1;
}
	else{
		if(Rzuohao=="C"&&Xzuohao=="D"||Rzuohao=="D"&&Xzuohao=="C"){
			cout<<0;
		}else{
			cout<<0;
		}
	}
		}else{
		cout<<0<<0;//3
	}
	        }else{
        cout<<0<<0<<0;//2
			}
	}else{
		cout<<0<<0<<0<<0;//1
	}
return 0;
}
