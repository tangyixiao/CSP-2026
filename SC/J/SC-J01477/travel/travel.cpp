#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,s1,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
	}else{
		cout<<"0000";
		return 0;
	}
	string p1="",p2="";
	char w1=s1[2],w2=s2[2];
	p1+=s1[0],p1+=s1[1];
	p2+=s2[0],p2+=s2[1];
	if(p1==p2){
		cout<<1;
	}else{
		cout<<"000";
		return 0;
	}
	long long wc1=(w1=='A'||w1=='B'||w1=='C'),wc2=(w2=='A'||w2=='B'||w2=='C');
	if(wc1==wc2){
		cout<<1;
	}else{
		cout<<"00";
		return 0;
	}
	if(w1+1==w2||w2+1==w1){
		cout<<1;
	}else{
		cout<<"0";
	}
	return 0;
}
//代码敲慢一点！！！
//注意freopen
//注意数组大小
//注意函数返回值
//注意取模


