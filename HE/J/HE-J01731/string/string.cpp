#include<bits/stdc++.h>
using namespace std;

int main (){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long long n;
	cin >> n;
    vector <char > v;
    while (n--)
    {
    	long long number ;
    	char words ;
    	cin >> number >> words;
    	for(int i = 0 ; i<number ;i++){
    		v.push_back(words);
		
		}
    	
    	
    	
	}
	long long sum =0;
	for(int i = 0 ; i<v.size() ;i++){
		if (i==v.size()-1-i) break ;
		
    	if(v[i]!=v[v.size()-1-i]){
		sum ++;
		}
		
		
		}
//		6
// 1000000000 a
// 1000000000 a
// 1000000000 a
// 1000000000 b
// 1000000000 b
// 1000000000 b
		cout <<sum;
return 0;
}
