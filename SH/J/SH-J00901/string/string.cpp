#include<bits/stdc++.h>
using namespace std;

struct ss{
	long long a;
	char c;
};
ss s[200005];
long long cnt;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int n;
	cin >>n;
	for(int i = 0;i < n;i++){
		int a;
		char c;
		cin >> a >>c; 
		s[i].a = a;
		s[i].c = c;
	}
	
	int i = 0,j = n-1;
	while(i != j && i-j != 1 && j-1 != 1){
		
		int local = min(s[i].a , s[j].a);
		if(s[i].c != s[j].c){
			cnt+= local;
		}
		
		s[i].a -= local;
		s[j].a -= local;
		
		if(s[i].a == 0) i++;
		if(s[j].a == 0) j--;
		
		//i++;
		
	}
	
	cout << cnt;
	return 0;
} 
