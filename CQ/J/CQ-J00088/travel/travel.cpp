#include<bits/stdc++.h>
using namespace std;
char p,a[14],x[6],y[6];
int s,t;
bool r;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	for(int i=1;i<=13;i++){
		cin>>p;
		a[i]=p; 
	}
	int c=1;
	for(int i=1;i<=10;i++){
		if(a[i]==' '){
			continue;
		}
		else{
			if(r==0){
				x[c]=a[i];
				c++;
			}
			else{
				y[c]=a[i];
				c++;
			}
		}
		if(c>5){
			r=1;
			c=1;
		}
	}
	int k[5],l[5];
	for(int i=1;i<=4;i++){
		k[i]=x[i]-'0';
		l[i]=y[i]-'0';
	}
	s=x[5]-'A'+1;
	t=y[5]-'A'+1;
	if(k[1]==l[1]&&k[2]==l[2]){
		if(k[3]==l[3]&&k[4]==l[4]){
			if((s<=3&&t<=3)||(s>=4&&t>=4)){
				if((s=t-1)||(s=t+1)){
					cout<<"1111"<<endl;
					return 0;
				}
			}
			else{
				cout<<"1100"<<endl;
				return 0; 
			}
		}
		else{
			cout<<"1000"<<endl;
			return 0;
		}
	}
	else{
		cout<<"0000"<<endl;
		return 0;
	}
}
