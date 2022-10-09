#include<stdio.h>

//#define MAX 10
//利用#define定义的标识符常量

//#define 可以定义宏-带参数

/*
ASCII:
A:65
a:97

数组的长度如果没有结束标志 \0 数组会一直检索 长度为随机值
数组的长度只能用常量来指定

*/
/*int main()
{
	//字符串的结束标志  \0
	"abcd"; //默认 '\0'
	// '\0' :  转义字符 ASCII码值 为0；
	//  0： 数字 ASCII 48
	char arr[] = { 'b','t','t','y'};
	printf("%d\n",strlen(arr));  //随机值
	int arr1[] = { 1,2,3,4,5 };  
	printf("%d\n",sizeof(arr1)); //计算数组大小，单位是字节  - 24


	int a = 0; //整形占用4个字节  32个比特位   eg：00000000000000000000000000000000
	int b = ~a;  //b是有符号的整形
	// ~ -按二进制按位取反
	//eg: 1010   0101

	//原码、反码、补码
	// 原码符号位不变其他位按位取反得到反码   反码加一得到补码
	// 11111111111111111111111111111111 补码
	// 11111111111111111111111111111110 -1得到反码
	// 10000000000000000000000000000001   得到原码
	// 补码-1得到反码 然后符号位不变 其他按位取反
	//负数在内存中存储的时候，存储的是二进制的补码，使用的打印的是这个数的原码
	printf("%d\n", b); // -1 


}
*/
/*int main()
{
	int a = 10;
	int b = a++; //后加加  先使用a的值，把a的值付给b，然后a++；

	printf("a=%d\n b=%d\n",a,b); //a=11  b =10

	int c = 10;
	int d = ++c;//前加加 c先加加付给d c的值为11 
	printf("c=%d\n d=%d\n",c,d); //c= 11 d=11
	
	//强制类型转换 ():一般不建议使用
	int pai = (int)3.14527;
	printf("%d\n", pai);
	 
	//关系操作符  >		>=		<		<=      ==   !=  
	//逻辑操作符  &&  ||   C语言中0表示假  非0为真
	int e = 10;
	int f = 2;
	int g = a && f;  //全真则为真
	printf("%d\n",g); //1为真
	return 0;
}*/
/*
二进制位中最高位代表的正负
其中1代表负数   0代表正数
【1】【】【】【】【】【】【】【】【】【】【】

原码	------>		反码   -------> 补码
原码：直接按照正负写出的二进制序列
反码：原码符号位不变，其他位取反得到反码
补码：反码+1得到补码


只要是整数 内存中存储的丢失二进制的补码。
正数--原码。反码。补码 相同
负数-->存储的是补码，打印的是原码

eg： -2
100000000000000000000000000010     2的原码
111111111111111111111111111101     反码
111111111111111111111111111110     补码

*/ 

//声明函数
extern int add(int num1,int num2);

/*int main()
{
	//auto int a = 10; //默认隐藏auto
	//register int b = 10; //建议将b定义为寄存器变量

	//int 定义的变量都是有符号的
	//相当于 signed int 

	//恒为正 即使放一个负数
	//unsigned int num = 10;

	//typedef-类型定义  类型重定义
	typedef unsigned int u_int; //unsigned int定义为 u_int 
	u_int num = 20;



	//extern :声明 外部符号
	//static 改变了变量的作用域，让静态的全局变量只能在自己所在的源文件内部使用 出了原文件就不能使用
	
	extern  int global_v;
	printf("%d\n",global_v); //20

	int a = 10;
	int b = 10;
	printf("%d\n", add(a, b));

} */

//使用函数的方式实现功能
int MAX_M(int a, int b)
{
	if (a >= b) {
		return a;
	}
	else
	{
		return b;
	}
}

//使用宏的方式 来实现MAX函数
//max将会替换为后面的代码
#define MAX(X,Y) (X>Y ? X:Y)

/*int main()
{
	//#define 定义常量和宏
	//int a = MAX;


	//函数方式       
	//int max = MAX(a, b);

	int a = 10;
	int b = 33;
	//宏的方式实现函数功能
	int max = MAX(a, b);
	printf("%d\n",max);

}*/


int main()
{
	int a = 4;
	//&a 打印地址

	//有一种变量存储地址类型就是指针 int*
	int* p = &a;

	printf("%p\n",&p);//003AF7C4  十六进制展示
	printf("%p\n",p);

	*p = 20; //解引用操作符 * ：对p进行解引用操作找到对象a，将20赋给a
	printf("%d\n",a);//此时a的值变成了20

	char ch = 'a';
	char* pc = &ch;//指针类型的区分
	//在64位的机器上  指针的大小是64bite占用8个字节   32位上占用4个字节
	*pc = 'b';//解引用

	printf("%c\n",ch);
	printf("%d\n",sizeof(pc)); //占用4个字节   32位机器
	

}

