#include<bits/stdc++.h>
using namespace std;
long long sum = 0;
stack<char> x;
stack<char> y;
stack<char> z;
bool ishui(stack<char> x,stack<char> z,long long sum){
	while(sum > 0){
		if(x.top() != z.top()){
			return 0;
		}
		x.pop();
		z.pop();
		sum--;
	}
	return 1;
}
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;++i){
		long long a;
		char b;
		cin>>a>>b;
		sum+=a;
		while(a > 0){
			x.push(b);
			y.push(b);
			a--;
		}
	}
	for(int i=1;i<=sum;++i){
		z.push(y.top());
		y.pop();
	}
	if(ishui(x,z,(sum + 1)/2)){
		cout<<"0";
	}else{
		if(sum % 2 == 0){
			cout<<sum/2;
		}else{
			cout<<(sum - 1)/2;
		}
	}
	return 0;
}