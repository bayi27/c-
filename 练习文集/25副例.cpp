#include<iostream>
using namespace std; 
int main()
{
        while(1)
        {
        int i,j,n;//声明i为要打印的行数，j是控制输出打印空格和星星，n是菱形为菱形的高
        printf("请输入菱形的高(奇数)\n");
        cin>>n;  //接受输入胡奇数
        for(i=1;i<=n/2+1;i++) //先打印上半部分，如果奇数输入的是5，那么上面就会显示3行，以此类推
        {
                for(j=1;j<=n-i;j++) //打印空格
                {
                    printf(" ");
                }
                for(j=1;j<=2*i-1;j++)//打印星星
                {
                        printf("*");
                }
                printf("\n");
         }
        for(i=n/2;i>=1;i--) //n已经明确了，打印下半部分，如果n为5，那么下半部分显示两行，以此类推
        {
                 for(j=1;j<=n-i;j++) //打印空格
                {
                   printf(" ");
                }
                for(j=1;j<=2*i-1;j++)//打印星星
                {
                        printf("*");
                }
                printf("\n");
        }}

}