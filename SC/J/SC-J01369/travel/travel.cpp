#include<bits/stdc++.h>
#include<stdio.h>
#include<cstdio>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
	int c1,c2;
	char s1[10],s2[10];
	cin>>c1;
	for(int i=1;i<=3;i++)cin>>s1[i];
	cin>>c2;
	for(int i=1;i<=3;i++)cin>>s2[i];
	int x=(int)(s1[1]-'0')*10+(int)s1[2];
	int y=(int)(s2[1]-'0')*10+(int)s2[2];
	if(c1!=c2){
		cout<<"0000"<<endl;
		return 0;
	}
	else {
		if(x!=y){
			cout<<"1000"<<endl;
			return 0;
		}
		else {
			int a=s1[3]-'A';
			int b=s2[3]-'A';
			if(a>b)swap(a,b); 
			int sum=a+b;
			if(sum==1||sum==7){
				cout<<"1111"<<endl;
				return 0;
			}
			else{
				if(a==1&&b==2){
					cout<<"1111"<<endl;
					return 0;
				}
				else{
					if(a==0&&b==2){
						cout<<"1110";
						return 0;
					}
					else {
						cout<<"1100"<<endl;
						return 0;
					}
				} 
			}
		}
	}
	return 0;
} 