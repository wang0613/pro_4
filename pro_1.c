#define _CRT_SECURE_NO_WARNINGS 1
// ����һ��stdio��h 
//std-��׼standard		i-input   o-output 
#include <stdio.h>
#include <string.h>


/*
* main(): ���������������ڣ�����ֻ��һ��
* int ���ú����ķ���ֵ
*/
/*int main()
{
	//�������printf()��ӡ���� print function
	//�⺯����c���Ա����ṩ�ĺ���
	printf("Hello world!!!\n\n\n");
	return 0; //�����ķ���ֵ

}
*/

/*
��������:
char �ַ���������
short  ������
int    ����
long   ������
long long  ����������
float   ����������
double  ˫��������
*/
// %d ��ӡ����
// %f ��ӡ������
// %c ��ӡ�ַ�
// %p �Ե�ַ����ʽ��ӡ
// %x ��16����

/*int main()
{
	//����������һ���ռ�洢
	char ch = 'A';
	//%C��ӡ�ַ�
	printf("%c\n", ch);

	int age = 20;
	//%d��ӡ����ʮ��������
	printf("%d\n", age);

	long num = 10000;
	printf("%d\n",num);

	float f = 5.7;
	printf("%f\n", f);

	double d = 3.14527;
	//%lf��ӡ˫���ȵ�����
	printf("%lf\n",d);

	//������еĵ�λ
	//bit: ����λ�����һ�������ƣ�  
	//byte�ֽ�     1�ֽ�=8����λ
	// kb          1kb=1024
	//<<mb <<gb <<tb <<pb
	printf("%d\n",sizeof(char)); //1�ֽ�
	printf("%d\n",sizeof(int));  //4
	//4���ֽڴ��� 4*8=32����λ  int��Χ 2^32-1
	printf("%d\n",sizeof(short));//2 ��
	//16���ֽ�    short��Χ2^16-1
	printf("%d\n", sizeof(float));//4
	printf("%d\n",sizeof(double));//8
	printf("%d\n",sizeof(long)); //4Ҳ������8
	printf("%d\n",sizeof(long long)); //8

	return 0;
}
*/


//	ȫ�ֱ����������ڴ����֮��ı���
int global = 120;
//�ֲ�������ȫ�ֱ��������Ʋ�Ҫ��ͬ��������������ͬʱ���ֲ���������

//���庯�� ����ֵvoid
void test()
{
	printf("test() %d\n", global);
}

/*int main()
{
	//���ڴ�������4�ֽڴ洢
	int age = 10; //�ֲ����� age
	//printf("%d|\n", age);  //�ͽ�ԭ���ӡ

	{
		//�ֲ������������򣺵�ǰ{}���ڲ�
		//ȫ�ֱ�����������: ��������������
		int a = 10;
	}

	int num1 = 0;
	int num2 = 0;
	int sum ;
	//sʹ�����뺯�� scanf()   #d����һ������ 
	//ʹ��scanf()���������� unsafe();  scanf_s()������c�ṩ�ģ���vs�ṩ
	//scanf_s("%d%d",&num1,&num2);  //ȡ��ַ����&
	scanf("%d%d",&num1,&num2);  //#define _CRT_SECURE_NO_WARNINGS 1  �رվ���

	//c�����﷨�涨����Ҫ�����ڵ�ǰ��������ǰ��
	 sum = num1 + num2;

	printf("sum = %d\n",sum);
	
	test(); //����test()����

	return 0;
} */


//ȫ�ֱ������������ڣ������������������
/*int main()
{
	//extern�����ⲿ�ı��� ��������Ҫ����һ��
	extern int num;
	{
		//�ֲ��������������ڣ����뵱ǰ����� ��ʼ�� ִ����ϴ���� �������ڽ���
		int a = 10;
	}

	printf("%d",num);
	return 0;
	      
}
*/

// #define �����ʶ������
#define MAX 10

/*int main()
{
	//������
	const int num = 1;
	printf("%d\n", num);

	//3.12;���泣��
	//num = 2; //�޷����¸�ֵ
	printf("%d\n", num);

	int  arr[MAX] = { 0 };
	printf("%d\n", MAX);


	return 0;
}
*/
//4ö�ٳ���:
//ö�٣� һһ�о� ,���ɸı�
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
	//ö�ٳ������޷��޸ĵģ�����ͨ��ö�����ʹ����ı����ǿ����޸ĵ�
	color = YELLOW;

	return 0;
}
*/

//�ַ�����
/*int main()
{
	//���Խ��ַ��� ������ַ�����
	char abs[] = "abc"; //Ĭ���ĸ�Ԫ�� ���һ����\0��  ����\0"���ַ����Ľ�����־
	char a[] = { 'a','b','c','\0'};
	
	 // \0�ַ����Ľ�����־ 
	 //  �����ڼ�����ϴ洢��ʱ�򣬴洢���Ƕ�����
	 // ACSII ���� �������˸�ֵ�Ĳ����� a-97   A-65   \0-0
	
	printf("%s\n",abs);
	printf("%s\n",a);
	printf("%d\n", strlen(abs));  //3
	printf("%d\n", strlen(a));  //3 
	//strlen()�����������ַ����ĳ���
	char arr[] = "abc";
	char arr1[] = { 'a','b','c'};//û��\0��������һֱ��Ҫ0 ����n�Σ�����Ϊ���ֵ
	printf("%d\n",strlen(arr));  //3
	printf("%d\n",strlen(arr1));  //15 ���ֵ
} 
*/

/*
\n: ���е�ת���ַ�
\t: ˮƽ�Ʊ��
\\�� ת���ַ�

*/
/*int  main()
{
	printf("%c\n",'\''); //ʹ��\��ת��'
	printf("%s\n","a");
	printf("%s\n","\"");

} */

/* int main()
{
	// \tΪһ��ת���ַ� \32  �����˽��Ƶ�һ���ַ�  
	printf("%d\n",strlen("c:\test\32\test.c"));//13
	return 0;
} */

//if���
/*int main()
{
	int input = 0;
	printf("�������\n");
	printf("��Ҫ�ú�ѧϰ��(1/0)>: ");

	scanf("%d",&input);

	if (input == 1)
	{
		printf("����һ���õ�offer");
	}
	else
	{
		printf("������");
	}
}
*/

//ѭ�����
/*int main()
{
	int line = 0;
	printf("�������\n");
	
	while (line < 20000)
	{
		printf("��һ�д���");
		line++;
		printf("%d\n",line);
	}
	if (line >= 20000) {
		printf("Ӯȡ�׸�������");
	}
	return 0;
}
*/

/*int main()
{
	int num1 = 0;
	int num2 = 0;
	//�ֶ�����
	scanf("%d%d", &num1, &num2);

	//�����Զ��庯��
	int result = sum(num1, num2);
	printf("����ǣ�%d\n", result);


}*/

//�ӷ��ĺ����������ظ�����
int sum(int a, int b)
{
	return a + b;
}
/*int main()
{
	//int arr[10]; //����һ�����10���������ֵ�����
	//arr[0] = 10; //��һ������ֵ(С��)Ϊ0
	//printf("%d", arr[0]);
	
	int arr[10] = { 0,1,2,3,4,5,9,8,7,6 };
	int i = 0;
	while (i <= 9 || i < 10) 
	{
		//printf("%d\n",arr[i]);
		i++;
	}

	//������  ���������� + - * /  %ȡ����
	//��λ������
	// <<����
	// >>����
	int a = 1;
	//���ε�1վ4���ֽ� 32������λ 000000000000000000000000000001
	//a������
	int b = a << 1;  //��������������1λ (һ�㲹0)
	//��ʱ�ƶ��Ķ�����Ϊ......10 ��ʾʮ���ƾ���2   0+1*2^1 = 2
	//printf("%d",b);

	//(������)λ����
	//& ��λ�ڣ�ȫΪ1����1��
	//| ��λ�� ��ֻҪ��1����1��
	//^ ��λ��� (��Ӧ�Ķ�����λ���죬��Ϊ1)
	int q = 3; //011
	int w = 5; //101
	int e = q & w; //  -- 001   1
	int r = q | w; //  -- 111   7
	int t = q ^ w; //  -- 110   6
	//printf("%d",t); //1

	//��c������0λ�� һ�ж���0��Ϊ��  ��ȡ��
	int l = 10; 
	printf("%d\n",l); //10
	printf("%d\n",!l); //0Ϊ��


	int size = 1;
	//sizeOf���������������������ռ�ռ��С
	printf("%d\n",sizeof(size)); //int ����4�ֽ�
	printf("%d\n",sizeof(int)); //int ����4�ֽ�

	int arr1[10] = { 0 }; //10������Ԫ�ص�����
	//10*sizeof(int) = 40 ���ֽ�
	printf("%d\n",sizeof(arr1));   //40

	//���������Ԫ�ظ���: �ܵ���ռ�Ĵ�С����ÿһ��Ԫ�صĴ�С
	int number = sizeof(arr1) / sizeof(arr1[0]);
	printf("%d\n",number); //����Ϊ10
}
*/










