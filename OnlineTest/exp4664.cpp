/*
实验5.4 二维数组和函数。学生成绩统计V2.0。
从键盘输入一个班（全班最多不超过30人）学生的学号和三门课的成绩，当输入学号为负值或人数超过30时，输入结束。编程实现以下要求：
通过终端输入学生学号与分数，并返回实际人数请在Input()函数实现；
计算每个学生的总分和平均分请在Total1()函数实现；
计算每门课的总分和平均分请在Total2()函数实现；
对每个学生按照总分由高到低排序请在Total3()函数中实现；
打印学生成绩表及每门课的总分和平均分请在Print()函数中实现；

Input函数原型如下：
int Input (long num[], float score[][3], int array_size);
参数说明：数组 num 存放学生的学号，数组 score 存放学生的分数, array_size 是两个数组的大小。
返回值：返回班级的实际人数

Total1函数原型如下：
void Total1(float score[][3], float sum[], float aver[], int n);
参数说明：数组 sum 存放每个学生的总分，aver存放每个学生的平均分，数组 score 存放学生的分数，n 班级实际人数
返回值：无

Total2函数原型如下：
void Total2(float score[][3], float sum[], float aver[], int n);
参数说明：数组 sum 存放每门课的总分，aver存放每门课的平均分，数组 score 存放学生的分数，n 班级实际人数
返回值： 无

Total3函数原型如下：
void Total3(long num[],float score[][3],float sum[],float aver[],int n);
参数说明：数组 num 存放学生的学号，数组 score存放学生的分数，数组 sum存放每个学生的总分，数组aver存放每个学生的平均分，n班级实际人数
返回值： 无

Print函数原型如下：
void Print(long num[],float score[][3],float sum1[],float aver1[],float sum2[],float aver2[],int n){
参数说明：数组 num存放学生的学号，数组 score存放学生的分数，数组 sum1存放每个学生的总分，数组 aver1存放每个学生的平均分,数组 sum2存放每门课的总分，数组aver2存放每门课的平均分，n班级实际人数
返回值：无

输入要求：详见输入样例
输出要求：cout<<"Pos\tNumber\tGrad1\tGrad2\tGrad3\tSum1\tAver1"<<endl;
cout<<"No\tSum2\tAver2"<<endl;

输入输出样例1：
输入：
201701 78 96 88
201702 66 88 69
201703 73 92 79
201704 87 76 88
201705 73 84 93
-1
输出：
Pos     Number  Grad1   Grad2   Grad3   Sum1    Aver1
1       201701  78      96      88      262     87.3333
2       201704  87      76      88      251     83.6667
3       201705  73      84      93      250     83.3333
4       201703  73      92      79      244     81.3333
5       201702  66      88      69      223     74.3333
No      Sum2    Aver2
1       377     75.4
2       436     87.2
3       417     83.4

输入输出样例2：
输入：
-1
输出：
Pos     Number  Grad1   Grad2   Grad3   Sum1    Aver1
No      Sum2    Aver2
1       0       0
2       0       0
3       0       0
*/
