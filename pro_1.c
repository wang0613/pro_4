#define _CRT_SECURE_NO_WARNINGS 1
// 包含一个stdio的h 
//std-标准standard		i-input   o-output 
#include <stdio.h>
#include <string.h>


/*
* main(): 主函数，程序的入口，有且只有一个
* int 调用函数的返回值
*/
/*int main()
{
	//这里调用printf()打印函数 print function
	//库函数：c语言本身提供的函数
	printf("Hello world!!!\n\n\n");
	return 0; //函数的返回值

}
*/

/*
数据类型:
char 字符数据类型
short  短整形
int    整形
long   长整形
long long  更长的整形
float   单精度类型
double  双精度类型
*/
// %d 打印整形
// %f 打印浮点数
// %c 打印字符
// %p 以地址的形式打印
// %x 以16进制

/*int main()
{
	//向计算机申请一个空间存储
	char ch = 'A';
	//%C打印字符
	printf("%c\n", ch);

	int age = 20;
	//%d打印整形十进制数据
	printf("%d\n", age);

	long num = 10000;
	printf("%d\n",num);

	float f = 5.7;
	printf("%f\n", f);

	double d = 3.14527;
	//%lf打印双精度的类型
	printf("%lf\n",d);

	//计算机中的单位
	//bit: 比特位（存放一个二进制）  
	//byte字节     1字节=8比特位
	// kb          1kb=1024
	//<<mb <<gb <<tb <<pb
	printf("%d\n",sizeof(char)); //1字节
	printf("%d\n",sizeof(int));  //4
	//4个字节代表 4*8=32比特位  int范围 2^32-1
	printf("%d\n",sizeof(short));//2 字
	//16个字节    short范围2^16-1
	printf("%d\n", sizeof(float));//4
	printf("%d\n",sizeof(double));//8
	printf("%d\n",sizeof(long)); //4也可以是8
	printf("%d\n",sizeof(long long)); //8

	return 0;
}
*/


//	全局变量：定义在代码块之外的变量
int global = 120;
//局部变量和全局变量的名称不要相同，当变量名称相同时，局部变量优先

//定义函数 返回值void
void test()
{
	printf("test() %d\n", global);
}

/*int main()
{
	//向内存中申请4字节存储
	int age = 10; //局部变量 age
	//printf("%d|\n", age);  //就近原则打印

	{
		//局部变量的作用域：当前{}的内部
		//全局变量的作用域: 作用于整个工程
		int a = 10;
	}

	int num1 = 0;
	int num2 = 0;
	int sum ;
	//s使用输入函数 scanf()   #d代表一个整数 
	//使用scanf()编译器报错 unsafe();  scanf_s()：不是c提供的，由vs提供
	//scanf_s("%d%d",&num1,&num2);  //取地址符号&
	scanf("%d%d",&num1,&num2);  //#define _CRT_SECURE_NO_WARNINGS 1  关闭警告

	//c语言语法规定变量要定义在当前代码块的最前面
	 sum = num1 + num2;

	printf("sum = %d\n",sum);
	
	test(); //调用test()函数

	return 0;
} */


//全局变量的声明周期：整个程序的声明周期
/*int main()
{
	//extern声明外部的变量 变量名需要保持一致
	extern int num;
	{
		//局部变量的声明周期：进入当前代码块 开始， 执行完毕代码块 生命周期结束
		int a = 10;
	}

	printf("%d",num);
	return 0;
	      
}
*/

// #define 定义标识符常量
#define MAX 10

/*int main()
{
	//常属性
	const int num = 1;
	printf("%d\n", num);

	//3.12;字面常量
	//num = 2; //无法重新赋值
	printf("%d\n", num);

	int  arr[MAX] = { 0 };
	printf("%d\n", MAX);


	return 0;
}
*/
//4枚举常量:
//枚举： 一一列举 ,不可改变
enum Sex
{
	MALE,
	FEMALE,
	SECRET
};
enum Color
{
	RED,
	YELLOW,
	BLUE

};
/*int main()
{
	//enum Sex s = MALE;
	printf("%d\n",MALE);
	printf("%d\n",FEMALE);
	printf("%d\n",SECRET);


	enum Color  color = BLUE;
	//枚举常量是无法修改的，但是通过枚举类型创建的变量是可以修改的
	color = YELLOW;

	return 0;
}
*/

//字符串：
/*int main()
{
	//可以将字符串 存放入字符数组
	char abs[] = "abc"; //默认四个元素 最后一个“\0”  其中\0"是字符串的结束标志
	char a[] = { 'a','b','c','\0'};
	
	 // \0字符串的结束标志 
	 //  数据在计算机上存储的时候，存储的是二进制
	 // ACSII 编码 并进行了赋值的操作， a-97   A-65   \0-0
	
	printf("%s\n",abs);
	printf("%s\n",a);
	printf("%d\n", strlen(abs));  //3
	printf("%d\n", strlen(a));  //3 
	//strlen()函数：计算字符串的长度
	char arr[] = "abc";
	char arr1[] = { 'a','b','c'};//没有\0结束，会一直需要0 可以n次，所以为随机值
	printf("%d\n",strlen(arr));  //3
	printf("%d\n",strlen(arr1));  //15 随机值
} 
*/

/*
\n: 换行的转移字符
\t: 水平制表符
\\： 转义字符

*/
/*int  main()
{
	printf("%c\n",'\''); //使用\来转义'
	printf("%s\n","a");
	printf("%s\n","\"");

} */

/* int main()
{
	// \t为一个转义字符 \32  两个八进制的一个字符  
	printf("%d\n",strlen("c:\test\32\test.c"));//13
	return 0;
} */

//if语句
/*int main()
{
	int input = 0;
	printf("加入比特\n");
	printf("你要好好学习吗？(1/0)>: ");

	scanf("%d",&input);

	if (input == 1)
	{
		printf("给你一个好的offer");
	}
	else
	{
		printf("卖红薯");
	}
}
*/

//循环语句
/*int main()
{
	int line = 0;
	printf("加入比特\n");
	
	while (line < 20000)
	{
		printf("敲一行代码");
		line++;
		printf("%d\n",line);
	}
	if (line >= 20000) {
		printf("赢取白富美！！");
	}
	return 0;
}
*/

/*int main()
{
	int num1 = 0;
	int num2 = 0;
	//手动输入
	scanf("%d%d", &num1, &num2);

	//调用自定义函数
	int result = sum(num1, num2);
	printf("结果是：%d\n", result);


}*/

//加法的函数，可以重复利用
int sum(int a, int b)
{
	return a + b;
}
/*int main()
{
	//int arr[10]; //定义一个存放10个整数数字的数组
	//arr[0] = 10; //第一个索引值(小标)为0
	//printf("%d", arr[0]);
	
	int arr[10] = { 0,1,2,3,4,5,9,8,7,6 };
	int i = 0;
	while (i <= 9 || i < 10) 
	{
		//printf("%d\n",arr[i]);
		i++;
	}

	//操作符  算数操作符 + - * /  %取余数
	//移位操作符
	// <<右移
	// >>左移
	int a = 1;
	//整形的1站4个字节 32个比特位 000000000000000000000000000001
	//a本身不变
	int b = a << 1;  //二进制序列右移1位 (一般补0)
	//此时移动的二进制为......10 表示十进制就是2   0+1*2^1 = 2
	//printf("%d",b);

	//(二进制)位操作
	//& 按位于（全为1则是1）
	//| 按位或 （只要有1就是1）
	//^ 按位异或 (对应的二进制位想异，则为1)
	int q = 3; //011
	int w = 5; //101
	int e = q & w; //  -- 001   1
	int r = q | w; //  -- 111   7
	int t = q ^ w; //  -- 110   6
	//printf("%d",t); //1

	//在c语言中0位假 一切都非0都为真  ！取反
	int l = 10; 
	printf("%d\n",l); //10
	printf("%d\n",!l); //0为假


	int size = 1;
	//sizeOf（）计算变量或者类型所占空间大小
	printf("%d\n",sizeof(size)); //int 所含4字节
	printf("%d\n",sizeof(int)); //int 所含4字节

	int arr1[10] = { 0 }; //10个整形元素的数组
	//10*sizeof(int) = 40 个字节
	printf("%d\n",sizeof(arr1));   //40

	//计算数组的元素个数: 总的所占的大小除以每一个元素的大小
	int number = sizeof(arr1) / sizeof(arr1[0]);
	printf("%d\n",number); //长度为10
}
*/










