#define _CRT_SECURE_NO_WARNINGS 1
//BC97
//#include <stdio.h>
//int judge(int n)
//{
//    int m = 0;
//    int a = n;
//    while (n != 0)
//    {
//        m = m * 10 + n % 10;
//        n = n / 10;
//    }
//    if (m == a)
//        return 1;
//    else
//        return 0;
//}
//int main()
//{
//    int n = 0;
//    int i = 0;
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        if (judge(i) == 1)
//            printf("%d\n", i);
//    }
//    return 0;
//}

//BC98
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int i = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (i = 0; i < n; i++)
//            printf("*");
//        printf("\n");
//    }
//    return 0;
//}

//BC99
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
//                printf("* ");
//            printf("\n");
//        }
//    }
//    return 0;
//}

//BC100
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
//                printf("* ");
//            printf("\n");
//        }
//    }
//    return 0;
//}

//BC101
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
//            for (j = 0; j < n - i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//BC102
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int i = 0;
//    int j = 0;
//    int k = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (i = 1; i <= n; i++)
//        {
//            for (j = 1; j <= n - i; j++)
//                printf("  ");
//            for (k = 1; k <= i; k++)
//                printf("* ");
//            printf("\n");
//        }
//    }
//    return 0;
//}

//BC103
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int i = 0;
//    int j = 0;
//    int k = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (i = 1; i <= n; i++)
//        {
//            for (j = 1; j <= n - i; j++)
//                printf(" ");
//            for (k = 1; k <= i; k++)
//                printf("* ");
//            printf("\n");
//        }
//    }
//    return 0;
//}
// 
//BC104
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int i = 0;
//    int j = 0;
//    int k = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (i = 1; i <= n; i++)
//        {
//            for (j = 0; j < i - 1; j++)
//                printf(" ");
//            for (k = n - i; k >= 0; k--)
//                printf("* ");
//            printf("\n");
//        }
//    }
//    return 0;
//}

//BC105
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
//            for (j = n - i; j >= 0; j--)
//                printf(" ");
//            for (j = 1; j <= i; j++)
//                printf("* ");
//            printf("\n");
//        }
//        for (i = 0; i <= n; i++)
//        {
//            for (j = 0; j < i; j++)
//                printf(" ");
//            for (j = n - i; j >= 0; j--)
//                printf("* ");
//            printf("\n");
//        }
//    }
//    return 0;
//}

//BC106
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
//            for (j = n - i; j >= 0; j--)
//                printf("* ");
//            printf("\n");
//        }
//        for (i = 0; i <= n; i++)
//        {
//            for (j = 0; j <= i; j++)
//                printf("* ");
//            printf("\n");
//        }
//    }
//    return 0;
//}

//BC107
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
//            for (j = 2 * (n - i); j > 0; j--)
//                printf(" ");
//            for (j = 0; j <= i; j++)
//                printf("*");
//            printf("\n");
//        }
//        for (i = n; i >= 0; i--)
//        {
//            for (j = 2 * (n - i); j > 0; j--)
//                printf(" ");
//            for (j = i; j >= 0; j--)
//                printf("*");
//            printf("\n");
//        }
//    }
//    return 0;
//}

//BC108
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
//            for (j = 0; j < i; j++)
//                printf(" ");
//            printf("*\n");
//        }
//    }
//    return 0;
//}

//BC109
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
//            for (j = n - i; j > 1; j--)
//                printf(" ");
//            printf("*\n");
//        }
//    }
//    return 0;
//}

