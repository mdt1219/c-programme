#define _CRT_SECURE_NO_WARNINGS 1
//BC87
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int a = 0;
//    int sum = 0;
//    scanf("%d", &n);
//    while (n != 0)
//    {
//        a = n % 10;
//        n = n / 10;
//        sum += a;
//    }
//    printf("%d\n", sum);
//    return 0;
//}

//BC88
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int cishu = 0;
//    scanf("%d", &n);
//    while (n != 1)
//    {
//        if (n % 2 == 0)
//            n = n / 2;
//        else
//            n = 3 * n + 1;
//        cishu++;
//    }
//    printf("%d\n", cishu);
//    return 0;
//}

//BC89
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int i = 0;
//    for (i = 1; i <= 2019; i++)
//    {
//        int bai = (i / 100) % 10;
//        int shi = (i / 10) % 10;
//        int ge = i % 10;
//        if (bai == 9 || shi == 9 || ge == 9)
//            n++;
//    }
//    printf("%d\n", n);
//    return 0;
//}

//BC90
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int chinese = 0;
//    int math = 0;
//    int english = 0;
//    int sum = 0;
//    scanf("%d\n", &n);
//    while (scanf("%d %d %d\n", &chinese, &math, &english) != EOF)
//    {
//        int avg = (chinese + math + english) / 3;
//        if (avg < 60)
//            sum++;
//    }
//    printf("%d\n", sum);
//    return 0;
//}

//BC91
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    int m = 0;
//    int n = 0;
//    int i = 0;
//    int x = 0;
//    int sum = 0;
//    while ((scanf("%d %d", &m, &n)) != EOF)
//    {
//        for (i = m; i <= n; i++)
//        {
//            int bai = i / 100;
//            int shi = i / 10 % 10;
//            int ge = i % 10;
//            sum = pow(bai, 3) + pow(shi, 3) + pow(ge, 3);
//            if (sum == i)
//            {
//                printf("%d ", i);
//                x++;
//            }
//        }
//        if (x == 0)
//            printf("no\n");
//        else
//            printf("\n");
//    }
//    return 0;
//}

//BC92
//#include <stdio.h>
//int main()
//{
//    int m = 0;
//    int n = 0;
//    int sum = 0;
//    for (m = 10000; m <= 99999; m++)
//    {
//        sum = (m / 10000) * (m % 10000) + (m / 1000) * (m % 1000) + (m / 100) * (m % 100) + (m / 10) * (m % 10);
//        if (sum == m)
//            printf("%d ", m);
//    }
//    return 0;
//}

//BC93
//#include <stdio.h>
//int main()
//{
//    int a[7] = { 0 };
//    int max = 0;
//    int min = 0;
//    int sum = 0;
//    double avg = 0;
//    int i = 0;
//    while (scanf("%d %d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6]) != EOF)
//    {
//        max = min = a[0];
//        for (i = 0; i < 7; i++)
//        {
//            if (a[i] > max)
//                max = a[i];
//            if (a[i] < min)
//                min = a[i];
//            sum += a[i];
//        }
//        avg = (sum - max - min) / 5.0;
//        printf("%.2lf\n", avg);
//        sum = 0;
//    }
//    return 0;
//}

//BC94
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int qian = n / 1000;
//    int bai = n / 100 % 10;
//    int shi = n % 100 / 10;
//    int ge = n % 10;
//    printf("%d%d%d%d", ge, shi, bai, qian);
//    return 0;
//}

//BC95
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    int n = 0;
//    int i = 0;
//    int j = 0;
//    int a[10] = { 0 };
//    scanf("%d", &n);
//    if (n < 6)
//        printf("%d\n", n);
//    else
//    {
//        while (n != 0)
//        {
//            a[i] = n % 6;
//            i++;
//            n = n / 6;
//        }
//        for (j = i; j > 0; j--)
//        {
//            printf("%d", a[j - 1]);
//        }
//    }
//}

//BC96
#include <stdio.h>
int qiuhe(int m)
{
    int i = 0;
    int sum = 0;
    for (i = 1; i <= m; i++)
    {
        sum = sum + i;
    }
    return sum;
}
int main()
{
    int k = 0;
    int i = 1;
    int j = 0;
    int n = 0;
    int sum = 0;
    int result = 0;
    scanf("%d", &k);
    while (k >= qiuhe(i))
    {
        i++;
    }
    for (j = 1; j < i; j++)
    {
        result = result + j * j;
    }
    result = (k - qiuhe(i - 1)) * i + result;
    return 0;
}
