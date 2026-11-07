#include <bits/stdc++.h>
using namespace std;
struct sit{
    int cx;
    string zw;
};
sit a;
sit b;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin >> a.cx;
    cin >> a.zw;
    cin >> b.cx;
    cin >> b.zw;
    if(a.cx==b.cx){
        cout << 1;
    }
    else {
        cout << "0000";
        return 0;
    }
    if(a.zw[0]==b.zw[0]&&a.zw[1]==b.zw[1]){
        cout << 1;
    }
    else {
        cout << "000";
        return 0;
    }    
    if(a.zw[2]<'D'&&b.zw[2]<'D'){
    	cout << 1;
	}
	else if(a.zw[2]<'G'&&b.zw[2]<'G'){
    	cout << 1;
	}
	else {
		cout << "00";
		return 0;
	}
	if(a.zw[2]-b.zw[2]==1||a.zw[2]-b.zw[2]==-1){
		cout << 1;
	}
	else{
		cout << 0;
	}
    return 0;
}
