//
// Created by wang on 2022/7/26.
//
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>

//1:算法实现
//a中存放最大值
//b次之
/*int main() {
    int a = 0;
    int b = 0;
    int c = 0;

    scanf("%d%d%d", &a, &b, &c);

    if (a < b) {
        int temp = b;
        b = a;
        a = temp;
    }
    if (a < c) {
        int temp = c;
        c = a;
        a = temp;
    }
    if (b < c) {
        int temp = c;
        c = b;
        b = temp;
    }
    printf("%d %d %d", a, b, c);

    return 0;
}*/

//2:打印1-100  3的倍数
/*int main()
{
    for(int i =1; i <= 100; i++)
    {
        if(i % 3 == 0)
        {
            printf("%d\t",i);
        }
    }
    return 0;
} */
//3：两个数的最大公约数
//辗转相除法算法实现
/*int main() {
    int m = 0;
    int n = 0;
    int r = 0;

    scanf("%d%d",&m,&n);

    while  (r = m % n)
    {
//        r = m % n; //记录r的值
        m = n;
        n = r;  //不能 m%n   因为m的值已近被付给n
    }
    printf("%d\n",n);
    return 0;
}*/
//3:打印1000都2000之间的闰年
/*int main() {
    int count = 0;
    for (int year = 1000; year <= 2000; year++) {
        //判断是否是闰年
        //1:能被4整除且不能被100整除
        //2:能被400 整除是闰年
        if ((year % 4 == 0 && year % 100 != 0)||(year % 400 == 0)) {
            count ++;
            printf("%d\t", year);
        }
    }
    printf("%d\n",count);

}*/
//4:判断100 - 200是否是素数
/*int main() {
    int i = 0;
    int count = 0;
    for (i = 100; i <= 200; i++) {
        //判断i是否为素数（只能被1和本身整除）
        //判断规则：试触法   13  2-12
        int j;
        for (j = 2; j < i; j++) {
            //不是素数
            if (i % j == 0) {
                break;
            }
        }
        //是素数
        if (j == i) {
            count++;
            printf("%d\n", i);

        }
    }
    printf("count =  %d\n ", count);
} */

//优化： i =a*b; a b之间至少有一个数字是等于开平方i
/*int main() {
    int i = 0;
    int count = 0;
    for (i = 100; i <= 200; i++) {
        //判断i是否为素数（只能被1和本身整除）
        //判断规则：试触法   13  2-12
        int j = 0;
        //i =a*b; a b之间至少有一个数字是等于开平方i
        //sqrt();开平方 数学库函数
        for (j = 2; j <= sqrt(i); j++) {
            //不是素数
            if (i % j == 0) {
                break;
            }
        }
        //是素数
        if (j > sqrt(i)) {
            count++;
            printf("%d\n", i);

        }
    }
    printf("count =  %d\n ", count);
} */

// 再次优化：偶数不可能是素数
/*int main()
{
    int i = 0;
    int count = 0;
    //跳过所有的偶数
    for(i = 101; i<= 200; i+=2)
    {
        int j  = 0;
        //从2开始试除 101到本身 2-开平方101
        for(j = 2; j<= sqrt(i);j++)
        {
            if(i%j ==0) //是素数
            {
                break;
            }
        }
        //不是素数 本身肯定大于开平方
        if(j > sqrt(i))
        {
            count++;
            printf("%d ",i);
        }

    }
    printf("%d\n",count);
} */
//5：1-100之间所有数字中出现多少个9
/*int main()
{
    int i;
    int count = 0;

    for(i= 1; i <= 100; i++)
    {
        //99的问题：两个都满足
        //个位为0
        if(i%10 == 9 ){
            count++;
        }
        //十位为9
        if( i /10== 9)
        {
            count++;
        }
    }
    printf("%d\n",count);
} */

//6:求和1/1-1/2+1/3-........+1/99-1/100
/*
int main()
{
    int i =0;
    double sum = 0.0;
    int flag = 1; //0为假
//    double num = 0.0;
    for(i=1;i<=100;i++)
    {
        sum+=flag*1.0/i;
        flag = -flag;
        */
/*num = 1.0/i;
        if(rgt)
        {
            sum+=num;
            rgt = 0;
        }else
        {
            sum-=num;
            rgt = 1;
        }*//*

    }
    printf("%lf\n",sum);
    return 0;
}*/

//7:求十个整数中的最大值
/*int main()
{
    int arr[] = {1,2,30,4,5,6,7,8,9,10};

    int max = arr[0];
    for(int i = 1; i <(sizeof(arr)/sizeof(arr[0]));i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("%d\n",max);
}  */
//8:在屏幕上输出99乘法表
//1*1 =1
//2*1 = 2
/*int main()
{
    int i = 0;
    for(i = 1; i<= 9;i++)
    {
        for(int j = 1; j<=i;j++)
        {
            printf("%d*%d=%-2d ",i,j,i*j); //-2向左对其
        }
        printf("\n");
    }
}*/
//二分查找
int main()
{
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    int left = 0;
    int key = 6;
    int length = sizeof(arr)/sizeof(arr[0]);
    int right = length-1;

    while (left<=right)
    {
        int mid = (left+right)/2;
        if(arr[mid] > key)
        {
            //收缩右边
           right = mid-1;
        }
        if(arr[mid] < key )
        {
            //递进左边
            left = mid+1;
        }
        else
        {
            printf("%d\n", key);
            break;
        }

    }

}
