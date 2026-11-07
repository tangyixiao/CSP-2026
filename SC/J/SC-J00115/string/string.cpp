#include <bits/stdc++.h> 
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string str;
	long long sum=0;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int q;
		char ch;
		cin>>q>>ch;
		sum+=q;
		for(int j=1;j<=q;j++){
			str+=ch;
		}
	}int ant=0;
	string qian=str.substr(0,sum/2);
	string zhuang;
	for(int i=sum-1;i>sum/2-1;i--){
		zhuang+=str[i];
	}
	for(int i=0;i<qian.size();i++){
		if(qian[i]!=zhuang[i]){
			ant++;
		}
	}
//	cout<<qian<<endl<<zhuang<<endl;
	cout<<ant;
}