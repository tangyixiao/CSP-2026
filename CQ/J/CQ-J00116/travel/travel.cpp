#include<bits/stdc++.h>
using namespace std;

int main(){
	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	char x,y;
	int arr[4],brr[4];
	int a,b;
	cin >> a;
	for(int i=1;i<=2;i++){
		cin >> x;
		arr[i] = x-'0';
	}
	cin >> x;
	arr[3] = x-'A';
	
	cin >> b;
	for(int i=1;i<=2;i++){
		cin >> x;
		brr[i] = x-'0';
	}
	cin >> x;
	brr[3] = x-'A';
	
	if(a==b) cout << 1;
	else{
		cout << "0000";
		return 0;
	}
	
	if(arr[1]==brr[1]&&arr[2]==brr[2]) cout << 1;
	else{
		cout << "000";
		return 0;
	}
	
	if(arr[3]<=2&&brr[3]<=2||arr[3]>2&&brr[3]>2) cout << 1;
	else{
		cout << "00";
		return 0;
	}
	
	if(arr[3]-brr[3]==1||brr[3]-arr[3]==1) cout << 1;
	else cout << "0";
	
	
	return 0;
	
}
