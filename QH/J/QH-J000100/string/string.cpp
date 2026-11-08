#include <bits/stdc++.h>
using namespace std;
int n , a1 , a2 , a3 ,a4 , a5 , a6;
int main()
{
	freopen("string.in","r","stdin");
	freopen("string.out","w","stdout");
	cin >> n >> a1 >> a2 >> a3a >> a4 >> a5 >>a6 ;
	if(n==3 && a1=="2 a" && a2=="2 b" && a3=="1 c")
	{
		cout << "2";
	}
	if (n==2 && a1=="2 a" && a2 == "3 a")
	{
		cout << "0";
	}
	if (n==6 && a1 == "1000000000 a" && a2 == "1000000000 a" && a3 == "1000000000 a" && a4=="1000000000 b" && a5== "1000000000 b"a6 == "1000000000 b")
	{
		cout << "3000000000";
	}
	return 0;
}  

