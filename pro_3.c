#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>



/*int main()
{
	int a = 10; //���ڴ�����4���ֽڿռ�
	int* p=	&a; //�ó�a�������ڴ��ַ  ָ�����-p

	*p = 20;//�����ã��ҵ�p�ĵ�ַ ��20��ֵ��ԭ����

	printf("%p\n",&a); //0057F72C   16���Ƶ�ֵַ
	printf("%d\n", a);


	double b = 2.13;
	double* pc = &b;
	printf("%d\n",sizeof(pc));//4 (32λ���� )
	printf("%lf\n",&pc);

	printf("%d\n", sizeof(int*));//4 (32λ���� )
	printf("%d\n", sizeof(char*));//4 (32λ���� )
	printf("%d\n", sizeof(double*));//4 (32λ���� )
	return 0;
}*/


//�ṹ�壺�������Ӷ���(�Լ��������һ������)
struct Book
{
	char name[20];
	short price;
};

/*int main()
{
	//����һ���ṹ������
	struct Book b = {"c���Գ������",23};

	//struct Book*ָ������
	struct Book* pb = &b;//ȡ��b�ĵ�ַ

	//����pb��ӡ�����ͼ۸�
	printf("%s\n",(*pb).name);
	printf("%d\n",(*pb).price);//�򻯲���

	//�޷�ֱ�Ӹ��ı��������� ��Ϊname��һ��char����
	strcpy(b.name, "C++"); //strcpy����;�ַ�������-�⺯�� string.h


	//ֱ��ʹ��ָ��pb��ȡ����
	printf("%s\n",pb->name);
	// ��   �ṹ���������Ա
	// -��  �ṹ��ָ��-����Ա


	//printf("%s\n", b.name);
	//printf("%d\n", b.price);

	//b.price = 44;
	//printf("%d\n", b.price);
	return 0;

} */

/*int main()
{
	//��֧���
	int age = 0;
	//scanf�������뺯��
	scanf("%d",&age);

	//0Ϊ�� ���еķ�0��Ϊ��
	if (age < 18)
	{
		printf("δ����");
	}
	else if (age >= 18 && age < 28)
	{   //�ڴ�����п���ִ�ж������
		printf("����");
	}
	//else���������δƥ���if������ƥ��
	else 
		printf("����");
	
	return 0;
}*/

//1.���1-100֮�������
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

//Switch���
/*int main()
{
	int day = 0;

	//scanf("%d",&day); //��������

	//switch (day)
	//{
	//	//case ���ʽ�����ǳ���
	//case 1:
	//	printf("����һ");
	//	//break������case���
	//	break;
	//case 2:
	//	printf("���ڶ�");
	//	break;
	//case 3:
	//	printf("������");
	//	break;
	//case 4:
	//	printf("������");
	//	break;
	//case 5:
	//	printf("������");
	//	break;
	//case 6:
	//	printf("������");
	//	break;
	//case 7:
	//	printf("������");
	//	break;
	//default:
	//	break;
	//}

	//ע�⣺case ����п���Ƕ��
	
	int line = 0;
	//��������������ѭ��
	//��i==5�� ����ѭ��ִ�е�ǰwhile��ʱiһֱ��5
	while (line < 10)
	{
		line++; //����λ�ã�������ѭ��
		if (line == 5) 
			continue;  //������ǰѭ������Ĵ���  ִ����һ��ѭ�� ��
			//break; //������ǰwhileѭ�� ��ֵѭ������ѭ��
		printf("%d\n", line);

		//i++;
		
	
	}




}*/

/*int main()
{

	//int ch = getchar(); //�Ӽ����ϻ�ȡһ��char�ַ�
	//putchar(ch);

	//printf("%c\n",ch);

	int ch = 0;
	//�Ӽ����ϻ�ȡһ��char�ַ���ֻ��һ��
	//��getchar() ���� ctrl+z ʱ�����ȡEOF

	//EOF: end of file -> -1 ������־
	while ((ch =getchar()) != EOF)
	{
		putchar(ch);

		printf("%c\n",ch);

	}
}*/

/*int main()
{
	int ret = 0; //�����־
	int ch = 0;
	char password[20] = { 0 };
	printf("���������룺");

	scanf("%s",password); //scanf()ֻ�ܶ�ȡ�ո�֮ǰ���ַ�

	printf("��ȷ�����룺��Y/N��");

	//**getchar������ȡ����password�е�\n ���³������������
	//��ջ�������������\n ��ʹ����ѭ������  scanf()�س�֮ǰ���е��ַ�
	while ((ch =getchar()) != '\n') {
	
	}

	ret = 	getchar(); //ret��10

	if (ret == 'Y') {
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("����ȷ��\n");
	}


} */


//for ѭ��
/*int main()
{
	for (int  i= 0; i < 10; i++)
	{
		if (i == 5)
		
			continue;
			//break; //������ǰforѭ��
		
		printf("%d",i); 
		
	}

	//1��for���Ȼ�ĳ�ʼ����� ����  �ж���䶼����ʡ��
	//���ǣ����ʡ���жϲ��� ���жϲ��ֺ�Ϊ����������ѭ��
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
		//j��10 ִ����� �޷�������  j��ֵû������
		for (; j <10 ; j++) {
			printf("hehe\n"); //?��ӡ��10���Ǻ�   jû������
		}
	}
} */

/*int main()
{
	int x = 0;
	int k = 0;
	//0Ϊ��  ѭ������ȥ
	for (x = 0, k = 0; k=0; x++, k++)
	{
		k++;
	} 
	return 0;
}*/

// do while ѭ��
/*int main()
{
	//����ִ��һ�Σ�Ȼ���жϱ��ʽ���
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

//����n�Ľ׳�
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

		//�ۼ�n�Ľ׳�
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

		num = num * n;  //num=n-1�Ľ׳�

		//�ۼ�n�Ľ׳�
		sum += num;
	}
	printf("%d\n", sum);

} */


//��һ������������в�������n
/*int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int k = 7;
	//(sizeof(arr) / sizeof(arr[0]))����ĳ���
	for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
	{
		if (arr[i] == k) {
			printf("%d\n%d\n",arr[i],i);
			break;
		}
	}

	return 0;


} */
//���ֲ����㷨
/*int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	
	int key = 7;
	int length = sizeof(arr) / sizeof(arr[0]); // ����ĳ���

	int left = 0;
	int right = length - 1; 

	while(left <= right)
	{
		int mid = (left + right) / 2;

		//�����ǰ�±��Ԫ�ش���key ˵��Ԫ������ߡ��ı��Ҳ�
		if (arr[mid] > key) {
			right = mid - 1; //�ұߵ�
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

//���һ���ַ� ���м��ƶ�
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
	//int right = size - 2; //��Ϊ����������Ĭ�����һλ�� \n
	int right = strlen(arr1) - 1; //strlen()�����ǲ�����\n

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];

		printf("%s\n", arr2);

		left++;
		right--;
		
		//��Ϣ1��
		Sleep(1000);
		system("cls"); //ִ��ϵͳ����ĺ���	����
	}



}






















