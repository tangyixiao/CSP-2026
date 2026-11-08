#include <bits/stdc++.h>
using namespace std;

struct P{
	int num=0;
	char c;
};

int main(){
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int n;
	cin>>n;
	
	vector<P> s(n);
	
	for(int a=0;a<n;a++)
	{
		cin>>s[a].num>>s[a].c;
	}
	
	int x=0,y=s.size()-1;
	
	long long res = 0;
	
	while(x != y && x <= y)
	{
		if(s[x].num == s[y].num)
		{
			if(s[x].c != s[y].c){
				res += s[x].num;
				x++,y--;
			}
			else
			{
				x++,y--;
			} 
		}
		else
		{
			
			if(s[x].num > s[y].num)
			{
				if(s[x].c != s[y].c)
				{
					res += s[y].num;
				}
				
				s[x].num -= s[y].num;
				y--;
			}
			else
			{
				if(s[x].c != s[y].c)
				{
					res += s[x].num;
				}
				s[y].num -= s[x].num;
				x++;
			}
		}
		
		
		
//		cout<<'\n';
//		cout<<x<<" "<<y<<'\n';
//		for(int a=x;a<=y;a++)
//		{
//			cout<<s[a].num<<s[a].c<<'\n';
//		}
		//cout<<'\n'<<x<<" "<<y<<'\n';
		
	}
	
	cout<<res;
	
	return 0;
}
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b

cout:3000000000

3
2 a
2 b
1 c

cout:2

2
2 a
3 a

cout:0
*/
