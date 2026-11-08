#include<bits/stdc++.h>
using namespace std;
int n1=0,m1=0,sumn=0,summ=0,flag1=0,flag2=0,flag3=0,flag4=0;
char n2[2],m2[2];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>n1;
	for(int i=0;i<=2;i++){
		cin>>n2[i];
		if(i<=1){
			sumn=sumn*10+int(n2[i]-'0');
		}
	}
	cin>>m1;
	for(int i=0;i<=2;i++){
		cin>>m2[i];
		if(i<=1){
			summ=summ*10+int(m2[i]-'0');
		}
	}
	if(n1==m1){
		flag1=1;
		if(sumn==summ){
			flag2=1;
			if((int(n2[2])<='C' && int(m2[2])<='C') || (int(n2[2])>='D' && int(m2[2])>='D')){
				flag3=1;
				if((n2[2]-1)==m2[2] || (n2[2]+1)==m2[2]){
					flag4=1;
				}
			}
		}
	}
	cout<<flag1<<flag2<<flag3;
	if(flag4==1){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
}
