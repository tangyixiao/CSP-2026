#include<bits/stdc++.h> 
using namespace std;

int main(){
	int n;
	char array[1000000005];
	cin>>n;
	long long a=0;
	char c;
	for(int i=0,j;i<n;i++){
		cin>>j>>c;
		for(int k=0;k<a+j;k++){
			array[k]=c;
		}
		a+=j;
	}
	long long times=a/2,cnt=0;
	for(long long i=0;i<times;i++){
		if(array[a-i-1]!=array[i]){
			cnt+=1;
		}
	}
	cout<<cnt<<" "<<times<<" "<<a;
	return 0;
}

/*

int main(){
	int n;
	string array;
	cin>>n;
	long long a=0;
	for(long long i=1;i<=2*n;){
		cin>>array[i]>>array[i+1];
		if(i!=1) {
		array[i]+=array[i-2]-'0';
		a-=array[i-2];
		}
		else {array[i]-='0';}
		i+=2;
		a+=array[i]-'0';
		cout<<a<<endl;
	}
	long long positionleft=1,positionright=n-1,cnt=0;
	for(long long i=1;i<=int(a/2);i++){
		if(i>array[positionleft]-'0') positionleft+=2;
		if(a-i<array[positionright]-'0') positionright-=2;
		if(array[positionleft+1]!=array[positionright+1]) cnt++;
	}
	cout<<cnt;
	return 0;
}
*/ 
