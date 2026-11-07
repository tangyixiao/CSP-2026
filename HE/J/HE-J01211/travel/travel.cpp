#include<bits/stdc++.h> 
using namespace std;
string rc,rz,xc,xz;
/*
02 01A 02 01B  1111
02 01F 02 01D  1111
02 01C 02 01A  1110
02 01C 02 01D  1100
02 01A 03 01A  0000
*/
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	//输入 
	cin>>rc;
	cin>>rz;
	cin>>xc;
	cin>>xz;
	if(rc!=xc){
		cout<<"0000"<<"\n";
		return 0;
	}else{
		cout<<"1";//在同一个车厢 
		if(rz[0] == xz[0] && rz[1] == xz[1]){
			cout<<"1";//在同一排 
			if(rz[2] == char(68) && xz[2] == char(70) || rz[2] == char(70) && xz[2] == char(68)){//在右边  且挨着  DF
				cout<<"1"<<"1"; 
			}else if(rz[2] == char(65) && xz[2] == char(66) || rz[2] == char(66) && xz[2] == char(65)){//在左边靠窗  且挨着 AB
				cout<<"1"<<"1";
			}else if(rz[2] == char(66) && xz[2] == char(67) || rz[2] == char(67) && xz[2] == char(66)){//在左边过道  且挨着 BC 
				cout<<"1"<<"1"; 
			}else if(rz[2] == char(67) && xz[2] == char(65) || rz[2] == char(65) && xz[2] == char(67)){//在左边  且不挨着 AC
				cout<<"1"<<"0"; 
			}else{//不挨着 
				cout<<"0"<<"0";
			}
		}
	}
	
	return 0;
}
