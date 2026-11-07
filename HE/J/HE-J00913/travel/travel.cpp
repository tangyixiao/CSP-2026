#include<bits/stdc++.h>
using namespace std;

string c1,s1,c2,s2;
int num;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if( c1 == c2){
		cout<<1;
	}
	else{
		cout<<0<<0<<0<<0;
		return 0;
	}
	for(int i=0;i<3;i++){
		if(s1[i]==s2[i]){
			num++;
		}
		if(i==2){
			if(num==2){
				cout<<1;
				if(s1[i] <= 'C' && s1[i] >= 'A' && s2[i] <= 'C' && s1[i] >= 'A' || (s1[i] <= 'F' && s1[i] >= 'D' && s2[i] <= 'F' && s2[i] >= 'D')){
					cout<<1;
					if(s1[i] - s2[i] == 1 || s2[i] - s1[i] == 1){
						cout<<1;
					}else{
						cout<<0;
					}
				}else{
					cout<<0<<0;
				}
				
			}else{
				cout<<0<<0<<0;
			}
			
		}
	}
	
	
	
	
	
	
	
	
	return 0;
}
