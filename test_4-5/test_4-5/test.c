#define _CRT_SECURE_NO_WARNINGS 1
//BC110
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int i = 0;
//    int j = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n; j++)
//            {
//                if (j == i || j == n - i - 1)
//                    printf("*");
//                else
//                    printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//BC111
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int i = 0;
//    int j = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n; j++)
//            {
//                if (i == 0 || i == n - 1)
//                    printf("* ");
//                else
//                {
//                    if (j == 0 || j == n - 1)
//                        printf("* ");
//                    else
//                        printf("  ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//BC112
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int i = 0;
//    int j = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (i = 1; i <= n; i++)
//        {
//            for (j = 1; j <= n; j++)
//            {
//                if (i == j || j == 1 || i == n)
//                    printf("* ");
//                else
//                    printf("  ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//BC113
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int i = 0;
//    int j = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (i = 1; i <= n; i++)
//        {
//            for (j = 1; j <= i; j++)
//                printf("%d ", j);
//            printf("\n");
//        }
//    }
//    return 0;
//}

//BC114
//#include <stdio.h>
//int main()
//{
//    int h = 0;
//    int i = 0;
//    int j = 0;
//    int k = 0;
//    scanf("%d", &h);
//    int d = 3 * h;
//    for (i = 1; i <= h; i++)
//    {
//        for (j = d - 1; j > 0; j--)
//            printf(" ");
//        for (j = 1; j <= i; j++)
//            printf("*     ");
//        printf("\n");
//        for (j = d - 2; j > 0; j--)
//            printf(" ");
//        for (j = 1; j <= i; j++)
//            printf("* *   ");
//        printf("\n");
//        for (j = d - 3; j > 0; j--)
//            printf(" ");
//        for (j = 1; j <= i; j++)
//            printf("* * * ");
//        printf("\n");
//        d = d - 3;
//    }
//    for (i = 1; i <= h; i++)
//    {
//        for (j = 1; j < 3*h; j++)
//            printf(" ");
//        printf("*\n");
//    }
//    return 0;
//}

// 
//BC116
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int x = 0;
//    int i = 0;
//    int count = 0;
//    scanf("%d %d", &n, &x);
//    for (i = 1; i <= n; i++)
//    {
//        int a = i;
//        while (a != 0)
//        {
//            if (a % 10 == x)
//                count++;
//            a = a / 10;
//        }
//    }
//    printf("%d\n", count);
//    return 0;
//}

//BC117
//#include <stdio.h>
//int main()
//{
//    int a[10] = { 0 };
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%d ", &a[i]);
//    }
//    for (i = 9; i >= 0; i--)
//        printf("%d ", a[i]);
//    return 0;
//}

//BC118
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int a[50] = { 0 };
//    int i = 0;
//    int sum = 0;
//    scanf("%d\n", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d ", &a[i]);
//        sum += a[i];
//    }
//    printf("%d\n", sum);
//    return 0;
//}

//BC119
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int a[10000] = { 0 };
//    int i = 0;
//    int max = 0;
//    int min = 0;
//    scanf("%d\n", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d ", &a[i]);
//    }
//    max = min = a[0];
//    for (i = 0; i < n; i++)
//    {
//        if (a[i] > max)
//            max = a[i];
//        if (a[i] < min)
//            min = a[i];
//    }
//    printf("%d\n", max - min);
//    return 0;
//}

//BC120
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int a[50] = { 0 };
//    int i = 0;
//    int j = 0;
//    scanf("%d\n", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d ", &a[i]);
//    }
//    for (i = 0; i < n - 1; i++)
//    {
//        for (j = 0; j < n - 1 - i; j++)
//        {
//            if (a[j] < a[j + 1])
//            {
//                int tmp = a[j];
//                a[j] = a[j + 1];
//                a[j + 1] = tmp;
//            }
//        }
//    }
//    for (i = 0; i < 5; i++)
//        printf("%d ", a[i]);
//    return 0;
//}

//BC121
#include <stdio.h>
int main()
{
    int n = 0;
    int m = 0;
    int a[2000] = { 0 };
    int i = 0;
    int j = 0;
    scanf("%d %d\n", &n, &m);
    for (i = 0; i < n; i++)
        scanf("%d ", &a[i]);
    scanf("\n");
    for (i = n; i < n + m; i++)
        scanf("%d ", &a[i]);
    for (i = 0; i < n + m - 1; i++)
    {
        for (j = 0; j < n + m - i - 1; j++)
        {
            if (a[i] > a[i + 1])
            {
                int tmp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = tmp;
            }
        }
    }
    for (i = 0; i < n + m; i++)
        printf("%d ", a[i]);
    return 0;
}
