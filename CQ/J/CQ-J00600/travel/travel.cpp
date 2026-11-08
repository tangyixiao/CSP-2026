#include<cstdio>
#include<iostream>
using namespace std;
int c1,s1,c2,s2;
char t1,t2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	scanf("%d%d",&c1,&s1);
	cin>>t1;
	scanf("%d%d",&c2,&s2);
	cin>>t2;
	if(c1==c2){
		if(s1==s2){
			if((t1<='C'&&t2<='C')||(t1>='D'&&t2>='D')){
				if(t1-t2==1||t2-t1==1) printf("1111");
				else printf("1110");
			}
			else printf("1100");
		}
		else printf("1000");
	}
	else printf("0000");
	return 0;
}
//好无聊啊……
//写一个简单的计数吧
/*
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
86
87
88
89
90
91
……
*/
//代码：
/*
#include<cstdio>
using namespace std;
int sum;
int main(){
	freopen("add.out","w",stdout);
	while(5+4-1*8/8!=54188) printf("%d",++sum);
	return 0;
}
*/
//Nseconds就能运行完
