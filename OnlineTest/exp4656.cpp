/*
ʵ��4.1 ��������д�����жϡ��������������һ������ֻ�ܱ�������ͬ����������1���������������ͳ��������λ���������磬2��3��5��7������������4��6��8�Ͳ��ǣ�ע�⣬1������������
���дһ��������ȷ��һ�����Ƿ�Ϊ�������ڳ����е��ô˺�����ȷ������ӡ1~10000֮�������������
�����ʽ��
ÿ�����Ϊ6��ÿ�����10������

ʵ�������
The prime numbers from 1 to 10000 are:
     2     3     5     7    11    13    17    19    23    29
    31    37    41    43    47    53    59    61    67    71
    73    79    83    89    97   101   103   107   109   113
    ...
  9643  9649  9661  9677  9679  9689  9697  9719  9721  9733
  9739  9743  9749  9767  9769  9781  9787  9791  9803  9811
  9817  9829  9833  9839  9851  9857  9859  9871  9883  9887
  9901  9907  9923  9929  9931  9941  9949  9967  9973
There were 1229 prime numbers*/
//#include <iostream>
//#include<cmath>
//using namespace std;
//#include <iomanip>
//
///* write prototype for function prime */
//bool prime(int n);
//int main()
//{
//	int count = 0;
//
//	cout << "The prime numbers from 1 to 10000 are:\n";
//
//	for (int loop = 2; loop <= 10000; ++loop) {
//		if (prime(loop)) {
//			++count;
//			cout << setw(6) << loop;
//
//			if (count % 10 == 0)
//				cout << '\n';
//		}
//	}
//	cout << '\n' << "There were " << count
//		<< " prime numbers\n";
//	return 0;
//}
//
//bool prime(int n)
//{
//	int upper = sqrt(n);
//	for (int i = 2; i<=upper; i++)
//		if (n%i==0)
//			return false;
//
//	return true; //number is prime
//}