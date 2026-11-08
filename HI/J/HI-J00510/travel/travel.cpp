#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1!=c2){
		cout << "0000";
		return 0;
	}
	cout << "1";
	for(int i=0;i<=1;i++){
		if(s1[i]!=s2[i]){
			cout << "000";
			return 0;
		}
	}
	cout << "1";
		for(int i=0;1; ){
		if(i==0&&s1[2]=='A'+i&&s2[2]=='B'||s2[2]=='C'){
			cout << "1";
			break;
		}
		i++;
		if(i==1&&s1[2]=='A'+i&&s2[2]=='A'||s2[2]=='C'){
			cout << "1";
			break;
		}
		i++;
		if(i==2&&s1[2]=='A'+i&&s2[2]=='A'||s2[2]=='B'){
		    cout << "1";
		    break;
		}
		i++;
		if(i==3&&s1[2]=='A'+i&&s2[2]=='D'){
			cout << "1";
			break;
		}
		i++;
		if(i==4&&s1[2]=='A'+i&&s2[2]=='F'){
		cout << "1";
		break;
		}
	    cout << "00";
		return 0;	
}

    for(int i=0;i<=4;i++){
		if(s1[2]+i<'D'&&s1[2]=='A'+i&&s2[2]=='A'+i-1||s2[2]=='A'+i+1){
			cout << "1";
			return 0;
}
        if(s1[2]+i=='D'&&s2[2]=='F'){
			cout << "1";
			return 0;
}
        if(s1[2]+i=='F'&&s2[2]=='D'){
			cout << "1";
			return 0;
}
}
cout << "0";
	return 0;
}
