#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,s1,s2;
	cin >> c1 >> c2 >> s1 >> s2;
	if(c1==s1){
		cout << 1;
	}
	else{
		cout << 0;
	}
	
	string sum_c,sum_s,a1,a2;
	for(int i=1;i<=3;i++){
		if(i!=3){
			sum_c+=c2[i];
			sum_s+=s2[i];
		}
		a1+=c2[i];
		a2+=s2[i];
	}
	if(c1==s1&&sum_c==sum_s){
		cout << 1;
	}
	else{
		cout << 0;
	}
	
	if(c1==s1&&sum_c==sum_s&&((a1!='C'&&a2!='D')||(a1!='D'&&a2!='C'))){
		cout << 1;
	}
	else{
		cout << 0;
	}
	
	if(((a1!='C'&&a2!='D')||(a1!='D'&&a2!='C'))&&abs(a1-a2)<=1){
		cout << 1;
	}
	else{
		cout << 0;
	}
	
	return 0;
}
