#include<bits/stdc++.h>
using namespace std;

// 主函数 
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdin);
	
	// 定义 
	int c1,c2;
	char s1[4],s2[4];
	
	// 输入 
	cin>>c1;
	for(int i=1;i<=3;i++){
		cin>>s1[i];
	}
	cin>>c2;
	for(int i=1;i<=3;i++){
		cin>>s2[i];
	}
	
	// 判断 
	if(c1==c2){
		cout<<"1";
		if(s1[1]==s2[1] && s1[2]==s2[2]){
			cout<<"1";
			int a1,a2;
			a1=s1[3];
			a2=s2[3];
			if(a1<=67 && a2<=67){
				cout<<"1";
				if(a2==a1+1 || a2==a1-1){
					cout<<"1";
					return 0;
				}else{
					cout<<"0";
					return 0;
				}
			}else if(a1>=68 && a2>=68){
				cout<<"1";
				if(a2==a1+1 || a2==a1-1){
					cout<<"1";
					return 0;
				}else{
					cout<<"0";
					return 0;
				}
			}else{
				cout<<"00";
				return 0;
			}
		}else{
			cout<<"000";
			return 0;
		}
	}else{
		cout<<"0000";
		return 0;
	}
	
	
	return 0;
}
