#include<bits/stdc++.h>
using namespace std;
int c1,s1;char a1;
int c2,s2;char a2;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    scanf("%d %d%c %d %d%c",&c1,&s1,&a1,&c2,&s2,&a2);
    if(a1=='D')a1='E';
    if(a2=='D')a2='E';
    bool f1=(c1==c2),f2=f1&&(s1==s2),
         f3=f2&&(('D'-a1)*('D'-a2)>0),
         f4=f3&&(abs(a1-a2)==1);
    printf("%d%d%d%d\n",f1,f2,f3,f4);
    return 0;
}

/*
别的省 OIer 赚钱：出题、讲课
缺点：单次收入高但频率低(假)~~，遇到黑心教练还没有钱~~，消耗大量精力。
SC OIer 赚钱：被 jmr 找来和他打赌两人谁的 noi 分更高
优点：简单设计策略即可获得大量财富，同时起到对冲并不存在的风险的作用，双赢(?)。
*/

//freopen("travel.in","r",stdin);
//freopen("travel.out","w",stdout);
// freopen("travel.in","r",stdin);
// freopen("travel.out","w",stdout);

// 骗你进来的，来听歌
/*
You meet the playlist at your very Chinese time
The musics are so good, a devil may cry

大概顺序该是 321?
*/

/*
Soaring through the city again today
I get to see smile again
'Cause any thing in the world couldn't take its place
Cutting through the gentle breeze
Resting in the sunlight's ease
Days like this means so much more to me right now
God I wish these days would never fade away
A letter is a piece of the heart
That's where the story begins
Here you go(wow) with me(wow)
It's the color of love
Sometimes the color of tears
Every shade inside the heart
I'll send them far and anywhere
Anywhere

Days like this would all fade away
Deep down I always knew
Still I live on with all strength I have
Because I'm the only one
I'll take whoever I am
I'll never give up on who I'll be
It's my life
I don't want to live with regret
The words are spelt like magic
Where courage first takes fight
Step forward(wow) with me(wow)
It's the voice of all joy
Sometimes the voice of sorrow
Every shade inside the heart
I'll send them far beyond the moon
Wispher me your memories
Tell me what makes you smile
I'll chase them through the distance
Bring them to you
Will you travel
Will you travel
Will you travel with me

Trace every piece
And let's piece them up together
Here you go(wow) with me(wow)
It's the color of love
Sometimes the color of tears
Every shade inside the heart
I'll send them far and anywhere
Anywhere
*/

/*
Hello am I working right today
It seems you've been away
I'm still waiting here
I've thought of something new
I've been thinking about you
And what's it like to see the world in such a colorful array
Someday
I wanna watch the sunrise
I wanna hold your hand
I want to see the world in your eyes
And maybe you can understand why I
I wanna be a part of something
I wanna see the world someday
And I want to be space which you're in
Am I real if I can't feel inside for all these years
Can you feel me in tear
Could I feel what you feel
If I could die would I cry if just to feel the tears
Could I stand there with you
Let me breathe and I'll defy the system

If I could be anything
I would be free
I would do everything
If I could be a part of your world
No matter how it small
I do it all
And I'll find out
Just how good it feels to love
And I'ld find meaning in the loss
I'ld be dependently definet
Just for the excitement
I'ld anything I wanted
No matter what the cost is
It's now burnin' bright inside me
I know nothing's gonna stop me yes I
(Am I real Am I real)
I'm gonna watch the sunrise
(Am I real If I can't feel)
I'm gonna hold your hand
(Am I real Am I real)
I'll see the world in your eyes
(Am I real If I can't feel)
And maybe you can understand why I
(Am I real Am I real)
I'm gonna be a part of something
(Am I real Am I real)
I'm gonna see the world someday
(Am I real Am I real)
And I can to be space which you're in

Am I real if I can't feel inside for all these years
Can you feel me in tear
Could I feel what you feel
If I could die would I cry if just to feel the tears
Could I stand there with you
Let me breathe and I'll defy the system

I suppose it's almost time to say good night
Tomorrow there'll be sight to see and many things to do
And while you are awake
Be dreaming of today
I'll be waiting here
I'll be dreaming too
*/

/*
风透过人潮渐渐停歇的下雨天
将平凡的故事翻到末页
并未留下浓重的墨点
在字里行间流连
最接近夜的灰褪去的那抹苍蓝
凝结成悲欢震颤伞面
究竟要千百次多强烈
才能激起方寸漪涟

空泛谁的戏言
在某个夏日黄昏晕散
被鸣蝉散播遥远
传达到你所在的明天
在明天 驻足无人的车站
久别的阳炎越过无尽的深蓝
越过每寸黑夜
与我重逢在梅雨季节
雨季的蜿蜒 枯竭的思念
腐朽的栏杆锈迹斑斑
一如从前 而截然相反
仿佛两人曾经相携
余音尽沉 不协和和弦
孤独的今天仍让人如此疲惫怠倦
令这街道蓦然

城市从不缺机械冰冷之物陪伴
如零与一交织的贪婪
慢慢将这颗心染黑了
又让我如此迷恋
即使这种矛盾普遍地存于世间
麻木如我也感到赧然
不得不随波逐流的今天
渐渐对自我生厌

街灯将 这城市渲染如昼
但再相似的光明也没有理由
取代任何丑陋
只留些许温度的残留

悔恨的蔓延 枯竭的语言
夏日的余光隐匿不现
不似从前又渴望看见
泛黄且绮丽的画面
雨声潺潺又带着悲叹
谁人在无人问津的街角 无声祈愿
让这季节停止更迭

将时光最后的空白刻印在斑驳心海
而我等蜉蝣只得抒发不足日的无奈
无名歌者哼唱着积雨云为之落泪的歌在人海
浅色墨点排列的平凡也高歌不止直至终焉
疾似雨点千万次绚然
我仍不甘匍匐于此
雨落黑夜后渐变的蓝
你脉搏中的熟悉温度终与我重逢
在凉雨停歇的那天
*/

/*
还有 int4096 的 stardust 和 __libp_start_main
但是是日语，不会歌词。
*/