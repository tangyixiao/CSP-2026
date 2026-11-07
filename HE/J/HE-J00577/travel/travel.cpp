#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);

    string c1,s1,c2,s2;
    cin >> c1 >> s1 >> c2 >> s2;

    if(c1 == c2){
        cout << 1;
    }
    else{
    	cout << 0;
	}

	char seat1,seat2;
	int l1[5],l2[5];
	
	for(int i=0;i<3;i++){
		if(i<2){
			l1[i] = s1[i];
		}
		else {
			seat1 = s1[i];
		}
	}
	for(int i=0;i<3;i++){
		if(i<2){
			l2[i] = s2[i];
		}
		else {
			seat2= s2[i];
		}
	}
	
	int num=0;
	for(int i=1;i<=2;i++){
		if(l1[i]==l2[i]){
			num++;
		}
	}
	
	if(num == 2){
		cout << 1;
	}
	else{
		cout << 0;
	}
	
	if(seat1-'A' <= 2 && seat2-'A' <= 2){
		cout << 1;
		if(abs(seat1-seat2) == 1){
			cout << 1;
		}
		else{
			cout << 0;
		}
	}
	else if(seat1-'D' <= 2 && seat2-'D' <= 2){
		cout << 11;
	}
	else{
		cout << 00;
	}

    return 0;
}
