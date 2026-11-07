#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);freopen("travel.out","w",stdout);
	
	int c1,c2;//车厢号码 
	int s1,s2;//坐排数 
	char r,x;//什么座 
	
	cin>>c1>>s1>>r>>c2>>s2>>x;//输入 
	if(c1!=c2){//不在同一个车厢 
		cout<<"0000"<<endl;
		return 0; 
	}else{
		cout<<"1";
		if(s1!=s2){//不在同一排 
			cout<<"000"<<endl;
		    return 0;
		}else{
			cout<<"1";
			if(r=='D'&&x=='F'){
				cout<<"11"<<endl;
				return 0;
			}
			if(x=='D'&&r=='F'){
				cout<<"11"<<endl;
				return 0;
			}
			if(x=='D'||r=='F'||r=='D'||x=='F'){
				cout<<"00"<<endl;
				return 0;
			}else{
				cout<<"1";//判断好过道 
				if(x=='A'&&r=='C'){
					cout<<"0"<<endl;
			    	return 0;
				}
				if(r=='A'&&x=='C'){
					cout<<"0"<<endl;
			    	return 0;
				} 
				cout<<"1"<<endl;
				return 0;//结束 
			}
		}
	} 
	
	fclose(stdin);fclose(stdout);return 0;//问一下，前面全部return过了，fclose有用吗？ 
} 
