/*
实验3.2 嵌套循环。勾股定理。 问题描述：表示直角三角形的三条边的长度的3个整数值，称为勾股弦
。这三条边必须符合一条规则——两条直角边的平方和等于斜边的平方。编写一段程序，找出不大于500的所有符合勾股定理的三角形的斜边长度和直角边的长度值。可以用三层嵌套for循环来解决这一问题。该程序是典型的“穷举”计算方法。
注意，按长度升序输出三条边，不要输出重复的勾股弦，两个值中间用‘\t’间隔。
*/
//#include<iostream>
//using namespace std;
//int main()
//{
//	int count = 0;
//	for (int i = 1; i <= 500; i++)
//	{
//		for (int j = i; j<=500; j++)
//		{
//			for (int k = j; k<=500; k++)
//			{
//				if (k * k == j * j + i * i) {
//					count++;
//					cout << i << '\t' << j << '\t'<< k << "\n";
//				}
//			}
//		}
//	}
//	cout << "A total of " << count << " triples were found.";
//	return 0;
//}