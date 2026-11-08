#include<bits/stdc++.h>
using namespace std;
string A,B,C,D;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>A>>B>>C>>D;
	if (A == C){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if (A == C && B[0] == D[0] && B[1] == D[1]){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if (A == C && B[0] == D[0] && B[1] == D[1] && (('A' <= B[2] && B[2] <= 'C' && 'A' <= D[2] && D[2] <= 'C') || ('D' <= B[2] && B[2] <= 'F' && 'D' <= D[2] && D[2] <= 'F'))){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if (A == C && B[0] == D[0] && B[1] == D[1] && (('A' <= B[2] && B[2] <= 'C' && 'A' <= D[2] && D[2] <= 'C') || ('D' <= B[2] && B[2] <= 'F' && 'D' <= D[2] && D[2] <= 'F')) && abs(D[2]-B[2]) == 1){
		cout<<1;
	}
	else{
		cout<<0;
	}
	return 0;
}
/*

*/
