#include<bits/stdc++.h> 
using namespace std;
string s1,s2,c1,c2;
//c1,s1表示小 R 的车票上的车厢号、座位号
//c2,s2表示小 X 的车票上的车厢号、座位号
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;//输入
	int ch1=0,ch2=0; //小 R 的车票上的车厢号,小 X 的车票上的车厢号
	int clen1=c1.size(),clen2=c2.size();//小 R，X 的车票上的车厢号长度 
	for(int i=0;i<clen1;i++){
		ch1+=c1[i]-'0';
	}
	for(int i=0;i<clen2;i++){
		ch2+=c2[i]-'0';
	}
	//cout<<ch1<<" "<<ch2;//他们的车厢号
	//int slen1=s1.size(),slen2=s2.size(); //小 R，X 的车票上的座位长度 
	int pai1=0,pai2=0;//他们在第几排
	char lie1='0',lie2='0';//他们在第几列 
	for(int i=0;i<3;i++){
		if(i<=1){
			pai1+=s1[i]-'0';
			continue;
		}
		lie1=s1[i];
	}
	for(int i=0;i<3;i++){
		if(i<=1){
			pai2+=s2[i]-'0';
			continue;
		}
		lie2=s2[i];
	}
	//cout<<pai1<<" "<<lie1<<" "<<pai2<<" "<<lie2;//小 R，X 的车票上的座位位置（排和列） 
	//开始判断！
	if(ch1==ch2){//判断是否在同一列车厢 
		cout<<1;
	}else{
		cout<<0<<0<<0<<0;//不在同一间车厢，什么都不用判断了，都不是 
		return 0;
	}
	int li1=lie1-'A',li2=lie2-'A';//在第几列 
	if(pai1==pai2){//判断是否在同一列车厢的同一排 
		cout<<1;
		//↓判断是否在同一列车厢的同一排 且位于过道的同一侧 
		if((li1<=2 && li2<=2)  ||  (li1>2 && li2>2)){
			cout<<1;
			//↓判断是否相邻
			if(abs(li1-li2) == 1){
				cout<<1;
			}else{
				cout<<0;
			}
		}else{
			cout<<0<<0;
			//不在同一侧就不用判断是否相邻，直接出0 
			return 0; 
		}
	}else{
		cout<<0<<0<<0; 
		//因为已经不在同一排了，就不用判断
		//是否在同一列车厢的同一排 且位于过道的同一侧，直接出0 
		//也不用判断是否在同一列车厢的同一排 且位于过道的同一侧了 
		return 0; 
	}
	return 0;
}
