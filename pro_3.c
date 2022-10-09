#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>



/*int main()
{
	int a = 10; //向内存申请4个字节空间
	int* p=	&a; //拿出a变量的内存地址  指针变量-p

	*p = 20;//解引用：找到p的地址 将20赋值给原变量

	printf("%p\n",&a); //0057F72C   16进制地址值
	printf("%d\n", a);


	double b = 2.13;
	double* pc = &b;
	printf("%d\n",sizeof(pc));//4 (32位机器 )
	printf("%lf\n",&pc);

	printf("%d\n", sizeof(int*));//4 (32位机器 )
	printf("%d\n", sizeof(char*));//4 (32位机器 )
	printf("%d\n", sizeof(double*));//4 (32位机器 )
	return 0;
}*/


//结构体：描述复杂对象(自己创造出的一种类型)
struct Book
{
	char name[20];
	short price;
};

/*int main()
{
	//创建一个结构体类型
	struct Book b = {"c语言程序设计",23};

	//struct Book*指针类型
	struct Book* pb = &b;//取出b的地址

	//利用pb打印书名和价格
	printf("%s\n",(*pb).name);
	printf("%d\n",(*pb).price);//简化操作

	//无法直接更改变量的名称 因为name是一个char数组
	strcpy(b.name, "C++"); //strcpy（）;字符串拷贝-库函数 string.h


	//直接使用指针pb获取名称
	printf("%s\n",pb->name);
	// 。   结构体变量。成员
	// -》  结构体指针-》成员


	//printf("%s\n", b.name);
	//printf("%d\n", b.price);

	//b.price = 44;
	//printf("%d\n", b.price);
	return 0;

} */

/*int main()
{
	//分支语句
	int age = 0;
	//scanf（）输入函数
	scanf("%d",&age);

	//0为假 所有的非0都为真
	if (age < 18)
	{
		printf("未成年");
	}
	else if (age >= 18 && age < 28)
	{   //在代码块中可以执行多行语句
		printf("青年");
	}
	//else和离最近的未匹配的if语句进行匹配
	else 
		printf("老年");
	
	return 0;
}*/

//1.输出1-100之间的奇数
/*int main()
{
	for (int num =0; num <= 100; num ++)
	{
		if (num % 2 != 0 || num%2 == 1) 
		{
			printf("%d\t", num);
		}
	}
} */

//Switch语句
/*int main()
{
	int day = 0;

	//scanf("%d",&day); //键盘输入

	//switch (day)
	//{
	//	//case 表达式必须是常量
	//case 1:
	//	printf("星期一");
	//	//break：跳出case语句
	//	break;
	//case 2:
	//	printf("星期二");
	//	break;
	//case 3:
	//	printf("星期三");
	//	break;
	//case 4:
	//	printf("星期四");
	//	break;
	//case 5:
	//	printf("星期五");
	//	break;
	//case 6:
	//	printf("星期六");
	//	break;
	//case 7:
	//	printf("星期日");
	//	break;
	//default:
	//	break;
	//}

	//注意：case 语句中可以嵌套
	
	int line = 0;
	//？？？陷入了死循环
	//当i==5是 跳出循环执行当前while此时i一直是5
	while (line < 10)
	{
		line++; //调整位置，避免死循环
		if (line == 5) 
			continue;  //跳过当前循环后面的代码  执行下一次循环 。
			//break; //跳出当前while循环 中值循环永久循环
		printf("%d\n", line);

		//i++;
		
	
	}




}*/

/*int main()
{

	//int ch = getchar(); //从键盘上获取一个char字符
	//putchar(ch);

	//printf("%c\n",ch);

	int ch = 0;
	//从键盘上获取一个char字符，只有一个
	//当getchar() 碰到 ctrl+z 时，会获取EOF

	//EOF: end of file -> -1 结束标志
	while ((ch =getchar()) != EOF)
	{
		putchar(ch);

		printf("%c\n",ch);

	}
}*/

/*int main()
{
	int ret = 0; //输入标志
	int ch = 0;
	char password[20] = { 0 };
	printf("请输入密码：");

	scanf("%s",password); //scanf()只能读取空格之前的字符

	printf("请确认密码：（Y/N）");

	//**getchar（）读取到了password中的\n 导致程序出现了问题
	//清空缓冲区或者拿走\n ，使用死循环带走  scanf()回车之前所有的字符
	while ((ch =getchar()) != '\n') {
	
	}

	ret = 	getchar(); //ret是10

	if (ret == 'Y') {
		printf("确认成功\n");
	}
	else
	{
		printf("放弃确认\n");
	}


} */


//for 循环
/*int main()
{
	for (int  i= 0; i < 10; i++)
	{
		if (i == 5)
		
			continue;
			//break; //结束当前for循环
		
		printf("%d",i); 
		
	}

	//1：for徐娜混的初始化语句 调整  判断语句都可以省略
	//但是：如果省略判断部分 则判断部分恒为正，进入死循环
	for (;;)
	{
		printf("haha");
	}
	return 0;

} */

/*int main()
{
	int i = 0;
	int j = 0;
	for (; i < 10; i++)
	{
		//j是10 执行外卷 无法进入了  j的值没有销毁
		for (; j <10 ; j++) {
			printf("hehe\n"); //?打印了10个呵呵   j没有销毁
		}
	}
} */

/*int main()
{
	int x = 0;
	int k = 0;
	//0为假  循环进不去
	for (x = 0, k = 0; k=0; x++, k++)
	{
		k++;
	} 
	return 0;
}*/

// do while 循环
/*int main()
{
	//至少执行一次，然后判断表达式语句
	int i = 1;
	do
	{
		if (i == 5)
		{
			break;
		}
		printf("%d\n",i);
		i++;
	} while (i<= 10);
 } */

//计算n的阶乘
/*int main()
{
	int num = 1;

	
	for (int i = 1; i <= 10; i++) {

			num = num * i;
	}

	printf("%d",num);



} */

/*int main()
{
	int i = 1;
	int n = 1;
	int num = 1;
	int sum = 0;
	for (n = 1; n <= 4; n++) {

		num = 1;
		for (i = 1; i <= n; i++)
		{
			
			num = num * i;
		}

		//累加n的阶乘
		sum += num;
		
	}
	printf("%d\n",sum);
	

	return 0;


} */

/*int main()
{


	int i = 1;
	int n = 1;
	int num = 1;
	int sum = 0;
	for (n = 1; n <= 4; n++) {

		num = num * n;  //num=n-1的阶乘

		//累加n的阶乘
		sum += num;
	}
	printf("%d\n", sum);

} */


//在一个有序的数组中查找数字n
/*int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int k = 7;
	//(sizeof(arr) / sizeof(arr[0]))数组的长度
	for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
	{
		if (arr[i] == k) {
			printf("%d\n%d\n",arr[i],i);
			break;
		}
	}

	return 0;


} */
//二分查找算法
/*int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	
	int key = 7;
	int length = sizeof(arr) / sizeof(arr[0]); // 数组的长度

	int left = 0;
	int right = length - 1; 

	while(left <= right)
	{
		int mid = (left + right) / 2;

		//如果当前下表的元素大于key 说明元素在左边·改变右侧
		if (arr[mid] > key) {
			right = mid - 1; //右边的
		}
		else if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else
		{
			printf("%d\n", key);
			break;
		}

	}
} */

//输出一串字符 向中间移动
int main()
{
	//welcome  to bit !
	//##############
	//w############!
	//we###########t!
	//wel.....
	//welcome to bit !
	char arr1[] = "welcome to bit!!!!";
	char arr2[] = "##################";

	int size = sizeof(arr1) / sizeof(arr1[0]);
	int left = 0;
	//int right = size - 2; //因为数组中数组默认最后一位是 \n
	int right = strlen(arr1) - 1; //strlen()计算是不包含\n

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];

		printf("%s\n", arr2);

		left++;
		right--;
		
		//休息1秒
		Sleep(1000);
		system("cls"); //执行系统命令的函数	清屏
	}



}






















