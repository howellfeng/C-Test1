// Test1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"


using namespace std;

template <typename T>
void showMaxMin()
{
	cout << "\t\t字节=" << sizeof(T) << "\tmax=" << (numeric_limits<T>::max)() << "\tmin=" << (numeric_limits<T>::min)() << endl;
}

template <typename T>
T add(T a, T b)
{
	return a + b;
}
void showType()
{
	cout << "bool";
	showMaxMin<bool>();

	cout << "int";
	showMaxMin<int>();

	cout << "float";
	showMaxMin<float>();

	cout << "char";
	showMaxMin<char>();

	cout << "unsigned int";
	showMaxMin<unsigned int>();
}
enum Days { Monday, Firday, Sunday };
int main()
{
	int a;
	//	cout << "enter" << endl;
	//	cin >> a;
	//	cout << a << endl;
	//	std::cout << "c++" << std::endl;
	//#if a==0
	//	cout << "??=" << endl;
	//#endif
	//#if 1
	//	printf("%d\n", 0x99);
	//#endif


	/*cout << "bool\t\t字节=" << sizeof(bool);
	cout << "\tmax=" << (numeric_limits<bool>::max)() ;
	cout << "\tmin=" << (numeric_limits<bool>::min)() << endl;*/

	/*int b,sum;
	cin >> a >> b;
	sum = add(a, b);
	cout << sum;*/

	showType();
	Days d = Sunday;
	cout << d;

	cin >> a;
	return 0;
}



