#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
using namespace std;

int const N=200005;
int a[N];
char b[N];
string now;
vector <char> input;
int ans;


int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	input.push_back('m');
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		for(int j=1;j<=a[i];j++){
			input.push_back(b[i]);
		}
	}
	int cnt=0;
	int L=input.size();
	for(int i=1;i<L/2;i++){
		int back=L-i;
		if(!(input[i]==input[back])) cnt++;
	}
	cout<<cnt;
	return 0;
} 