#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin)
	freopen("travel.out","w",stdout)
	int a[5]={'A','B','c','D','F'};
	int c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	cout<<c1<<" "<<c2;
	if(c1==c2){
		cout<<"1";
		if(s1%10==s2%10){
			cout<<"1";
			if(s1%10>=a[0] && s1%10<=a[2] && s2%10>=a[0] && s2%10<=a[2] && s1!=s2 || s1%10>=a[3] && s1%10<=a[4] && s2%10>=a[3] && s2%10<=a[4] && s1!=s2){
				cout<<"1";
				for(int i=0;i<5;i++){
					if(s1==a[i] && s2==a[i+1]){
						cout<<"1";
					}
					else{
						cout<<"0";
					}
				}
			}
			else{
				cout<<"00";
			}
		}
		else{
			cout<<"000";
		}
	}
	else{
		cout<<"0000";
	}
	return 0;
}