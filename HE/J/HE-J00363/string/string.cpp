#inclide<bits/stdc++.h>
using namespace std;
int main(){
    frompen("string.in","r",stdin);
    frompen("string.out","w",stdout);
	string l;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>l;
	}
	if(l>='a'&&l<='z')cout<<l; 
	return 0;
} 
