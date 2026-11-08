#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int R,A,X,B,M,N,I,J,H,G;	
	cin>>A>>I>>R>>M>>N>>B>>G>>X>>J>>H;
	if(R+M+N-A-I==X+J+H-B-G-1||R+M+N-A-I-1==X+J+H-B-G){
		cout<<"1111";
	}
	if(R+M+N-A-I==X+J+H-B-G-2||R+M+N-A-I-2==X+J+H-B-G){
		cout<<"1110";
	}
	if(R+M+N-A-I==X+J+H-B-G-3||R+M+N-A-I-3==X+J+H-B-G){
		cout<<"1100";
	}
	if(R+M+N-A-I==X+J+H-B-G-4||R+M+N-A-I-4==X+J+H-B-G){
		cout<<"1000";
	}
	else
		cout<<"0000";
	return 0;
}
