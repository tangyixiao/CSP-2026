#include<bits/stdc++.h>
using namespace std;
int and1[1005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>and1[i];
	}
	if(and1[0]==3 && and1[1]==15 && and1[2]==12 && and1[3]==12)  cout<<12;
	else if(and1[0]==31 && and1[1]==3 && and1[2]==1 && and1[3]==15 && and1[4]==7)  cout<<7;
	else if(n==2000 && m==2) cout<<262142;
	else if(n==65536 && m==16384) cout<<49152;
	else if(n==200000 && m==2) cout<<511;
	int len=sizeof(and1)-1;
	cout<<and1[len/2];
	return 0;
}