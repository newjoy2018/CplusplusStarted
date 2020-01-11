#include <iostream>
using namespace std;

float pi = 3.1416f;
const char NEWLINE = '\n';

/* Addition function */
int add(int add_num1, int add_num2)
{
	int sum;
	sum = add_num1 + add_num2;
	return sum;
}


/* 这里只给出函数声明，在后面定义具体的函数内容 */
bool trueOrNot(bool judge);
int printDataType();
int enumerationTest(); 
int dataTypeTest1();
int defDataName();
int addLoop1(int nummax);
int addLoop2(int nummax);
int addLoop3(int nummax);
int findPrimeNumber(int nummax);
int lambdaFunction(int a, int b);
/* 批量注释快捷键是 CTRL+K, CTRL+C ; 取消注释 CTRL+K，CTRL+U */

/* ------------------------------------主函数------------------------------------ */
int main()
{
	int numx, numy, sum1, sum2;
	numx = 5;
	numy = numx + 5;
	numx += 1;
	sum1 = numx + numy;
	sum2 = add(numx, numy);
	cout << "Hello World! \nDirect_Sum is " << sum1 << "\nFunction_Sum is " << sum2 << endl;

    double numf1 = 3.1415926575897;
    cout << NEWLINE << float(numf1) << endl;

    int x = 3;
    int y = 4;
    lambdaFunction(x,y);

    bool judge_1 = true;
    trueOrNot(judge_1);
    
    int addloop = 100;
    int sumloop;
    sumloop = addLoop3(addloop);
    cout << "\nThe sum from 1 to " << addloop << " is " << sumloop << endl;

    int numk = 1000;
    cout << "\nPrime Numbers up to " << numk << " is: \n";
    findPrimeNumber(numk);

    dataTypeTest1();
    enumerationTest();
    defDataName();
    //printDataType();
		return 0;
}

/* enumeration 枚举类型*/
int enumerationTest()
{
    enum weekday { monday = 1, tuesday, wednesday, thursday, friday } day;
    enum weekday day2 = tuesday;
    day = friday;
    cout << "\nenumerate Test: day is " << day << "\tday2 is " << day2 << endl;
    switch (day)
    {
    case monday:
        cout << "星期一\n";
        break;
    case tuesday:
        cout << "星期二\n";
        break;
    case wednesday:
        cout << "星期三\n";
        break;
    case thursday:
        cout << "星期四\n";
        break;
    default:
        cout << "星期五\n";
        break;
    }
    return 0;
}

int dataTypeTest1()
{
    float a = 1.1f;
    //string s;
    bool jj = true;
    double b = 12.3456789;
    cout << NEWLINE << a << endl;
    cout << "\na * pi = " << a * pi << "\njj = " << jj << "\nb = " << b << endl;
    //cout << "input a char: ";
    //cin >> s;
    //cout << "\nthe char is " << s << endl;
    return 0;
}

/* 自定义数据类型名称 */
int defDataName()
{
    typedef int integernum;
    integernum a;
    a = 5;
    cout << "\na的字节数是" << sizeof(a) << "; a = " << a << endl;
    return 0;
}

/* 常用数据类型演示 */
int printDataType()
{
    cout << "\n\nbool: \t\t" << "所占字节数：" << sizeof(bool);
    cout << "\t最大值：" << (numeric_limits<bool>::max)();
    cout << "\t\t最小值：" << (numeric_limits<bool>::min)() << endl;
    cout << "char: \t\t" << "所占字节数：" << sizeof(char);
    cout << "\t最大值：" << (numeric_limits<char>::max)();
    cout << "\t\t最小值：" << (numeric_limits<char>::min)() << endl;
    cout << "signed char: \t" << "所占字节数：" << sizeof(signed char);
    cout << "\t最大值：" << (numeric_limits<signed char>::max)();
    cout << "\t\t最小值：" << (numeric_limits<signed char>::min)() << endl;
    cout << "unsigned char: \t" << "所占字节数：" << sizeof(unsigned char);
    cout << "\t最大值：" << (numeric_limits<unsigned char>::max)();
    cout << "\t\t最小值：" << (numeric_limits<unsigned char>::min)() << endl;
    cout << "wchar_t: \t" << "所占字节数：" << sizeof(wchar_t);
    cout << "\t最大值：" << (numeric_limits<wchar_t>::max)();
    cout << "\t\t最小值：" << (numeric_limits<wchar_t>::min)() << endl;
    cout << "short: \t\t" << "所占字节数：" << sizeof(short);
    cout << "\t最大值：" << (numeric_limits<short>::max)();
    cout << "\t\t最小值：" << (numeric_limits<short>::min)() << endl;
    cout << "int: \t\t" << "所占字节数：" << sizeof(int);
    cout << "\t最大值：" << (numeric_limits<int>::max)();
    cout << "\t最小值：" << (numeric_limits<int>::min)() << endl;
    cout << "unsigned: \t" << "所占字节数：" << sizeof(unsigned);
    cout << "\t最大值：" << (numeric_limits<unsigned>::max)();
    cout << "\t最小值：" << (numeric_limits<unsigned>::min)() << endl;
    cout << "long: \t\t" << "所占字节数：" << sizeof(long);
    cout << "\t最大值：" << (numeric_limits<long>::max)();
    cout << "\t最小值：" << (numeric_limits<long>::min)() << endl;
    cout << "unsigned long: \t" << "所占字节数：" << sizeof(unsigned long);
    cout << "\t最大值：" << (numeric_limits<unsigned long>::max)();
    cout << "\t最小值：" << (numeric_limits<unsigned long>::min)() << endl;
    cout << "double: \t" << "所占字节数：" << sizeof(double);
    cout << "\t最大值：" << (numeric_limits<double>::max)();
    cout << "\t最小值：" << (numeric_limits<double>::min)() << endl;
    cout << "long double: \t" << "所占字节数：" << sizeof(long double);
    cout << "\t最大值：" << (numeric_limits<long double>::max)();
    cout << "\t最小值：" << (numeric_limits<long double>::min)() << endl;
    cout << "float: \t\t" << "所占字节数：" << sizeof(float);
    cout << "\t最大值：" << (numeric_limits<float>::max)();
    cout << "\t最小值：" << (numeric_limits<float>::min)() << endl;
    cout << "size_t: \t" << "所占字节数：" << sizeof(size_t);
    cout << "\t最大值：" << (numeric_limits<size_t>::max)();
    cout << "\t最小值：" << (numeric_limits<size_t>::min)() << endl;
    cout << "string: \t" << "所占字节数：" << sizeof(string) << endl;
    // << "\t最大值：" << (numeric_limits<string>::max)() << "\t最小值：" << (numeric_limits<string>::min)() << endl;  
    cout << "\n\n";
    return 0;
}

bool trueOrNot(bool judge)
{
    if (judge)
    {
        cout << "\nBool Test --> Answer is True!\n";
    }
    else
    {
        cout << "\nBool Test --> Answer is False!\n";
    }
    return 0;
}

/* 3 Loop function --> add int from 1 to nummax */
int addLoop1(int nummax)
{
    int sum = 0;
    while (nummax != 0)
    {
        sum += nummax;
        nummax--;
    }
    return sum;
}

int addLoop2(int nummax)
{
    int sum = 0;
    for (int i = 0; i <= nummax; i++)
    {
        sum += i;
    }
    return sum;
}

int addLoop3(int nummax)
{
    int i = 0;
    int sum = 0;
    do {
        i++;
        sum += i;
    } while (i < nummax);
    return sum;
}

int findPrimeNumber(int nummax)
{
    int i = 2;
    int p = 0;
    int prime[200];
    for (i; i < nummax; i++)
    {
        int k = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                k++;
            }
        }
        if (k == 2)
        {
            //cout << i << " is a Prime Number!\n" << endl;
            prime[p] = i;
            p++;
        }
    }
    int q = 0;
    int r = 0;
    for (q; q < p; q++)
    {
        if (r % 6 == 0)
        {
            cout << "Line " << r / 6 + 1 << ": \t";
        }
        cout << prime[q] << "\t" ;
        r++;
        if (r % 6 == 0)
        {
            cout << NEWLINE;
        }
    }
    cout << "\nTotally we have found " << p << " prime numbers in the range of [1, " << nummax << "].\n";
    return 0;
}

int lambdaFunction(int a, int b)
{
    int m = 10;
    auto lambadd = [m](int x, int y) -> int {int z; z = m *(x + y); return z; };
    int sum = lambadd(a, b);
    cout << NEWLINE << sum << NEWLINE << endl;
    return 0;
}
