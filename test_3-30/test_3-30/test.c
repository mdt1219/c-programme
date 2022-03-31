#define _CRT_SECURE_NO_WARNINGS 1
//BC73
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    float a = 0.0;
//    float b = 0.0;
//    float c = 0.0;
//    float d = 0.0;
//    float x1 = 0.0;
//    float x2 = 0.0;
//    while (scanf("%f %f %f", &a, &b, &c) != EOF)
//    {
//        if (a == 0)
//        {
//            printf("Not quadratic equation");
//        }
//        else
//        {
//            d = b * b - 4 * a * c;
//            if (d == 0)
//            {
//                if (-b + sqrt(d) == 0)
//                    printf("x1=x2=%.2f", (-b + sqrt(d)));
//                else
//                    printf("x1=x2=%.2f", (-b + sqrt(d)) / (2 * a));
//            }
//            else if (d > 0)
//            {
//                x1 = (-b - sqrt(d)) / (2 * a);
//                x2 = (-b + sqrt(d)) / (2 * a);
//                printf("x1=%.2f;x2=%.2f", x1, x2);
//            }
//            else
//            {
//                x1 = sqrt(-d) / (2 * a);
//                printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi", (-b / (2 * a)), x1, (-b / (2 * a)), x1);
//            }
//        }
//    }
//    return 0;
//}

//BC74
//#include <stdio.h>
//int main()
//{
//    int a[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//    int year = 0;
//    int month = 0;
//    int day = 0;
//    while (scanf("%d %d", &year, &month) != EOF)
//    {
//        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
//            if (month == 2)
//                day = a[month - 1] + 1;
//            else
//                day = a[month - 1];
//        else
//            day = a[month - 1];
//        printf("%d\n", day);
//    }
//    return 0;
//}

//BC75
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d %d %d", &a, &b, &c);
//    if ((a + b + c) / 3.0 >= 60.0)
//        printf("NO");
//    else
//        printf("YES");
//    return 0;
//}

//BC76
//#include <stdio.h>
//int main()
//{
//    char a[4] = { '+','-','*','/' };
//    char b;
//    double x = 0.0;
//    double y = 0.0;
//    scanf("%lf%c%lf", &x, &b, &y);
//    int i = 0;
//    for (i = 0; i < 4; i++)
//        if (b == a[i])
//        {
//            if (b == '/')
//            {
//                if (y == 0.0)
//                {
//                    printf("Wrong!Division by zero!");
//                    break;
//                }
//                else
//                {
//                    printf("%.4lf/%.4lf=%.4lf", x, y, x / y);
//                    break;
//                }
//            }
//            else if (b == '+')
//            {
//                printf("%.4lf+%.4lf=%.4lf", x, y, x + y);
//                break;
//            }
//            else if (b == '-')
//            {
//                printf("%.4lf-%.4lf=%.4lf", x, y, x - y);
//                break;
//            }
//            else
//            {
//                printf("%.4lf*%.4lf=%.4lf", x, y, x * y);
//                break;
//            }
//        }
//        else
//            printf("Invalid operation!");
//    return 0;
//}

//BC78
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int i = 0;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//        printf("Happy new year!Good luck!\n");
//    return 0;
//}

//BC79
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int i = 0;
//    long long s = 0;
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//        s = s + i;
//    printf("%lld\n", s);
//    return 0;
//}

//BC80
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int i = 0;
//    int s = 0;
//    scanf("%d", &n);
//    if (n % 2 == 0)
//    {
//        s = n / 2;
//        printf("%d %d\n", s, s);
//    }
//    else
//    {
//        s = n / 2 + 1;
//        printf("%d %d\n", s, s - 1);
//    }
//    return 0;
//}

//BC81
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int j = 0;
//    int k = 0;
//    int count = 0;
//    for (i = 100; i <= 999; i++)
//    {
//        for (j = 1; j <= i; j++)
//        {
//            if (i % j == 0)
//                k++;
//        }
//        if (k == 2)
//            count++;
//        k = 0;
//    }
//    printf("%d", count);
//    return 0;
//}

//BC82
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int j = 0;
//    for (i = 1; i <= 9; i++)
//    {
//        for (j = 1; j <= i; j++)
//        {
//            printf("%d*%d=%2d ", j, i, j * i);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//BC83
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    if (n % 2 == 0)
//        printf("%d\n", -n / 2);
//    else
//        printf("%d\n", 1 + n / 2);
//    return 0;
//}

//BC84
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    double s = 0.0;
//    int i = 0;
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        s += 1.0 / i;
//    }
//    printf("%.6lf", s);
//    return 0;
//}

//BC85
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    double s = 0.0;
//    int fenmu = 0;
//    int i = 0;
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        if (i % 2 == 0)
//        {
//            fenmu = -i;
//        }
//        else
//            fenmu = i;
//        s += 1.0 / fenmu;
//    }
//    printf("%.3lf", s);
//    return 0;
//}

//BC86
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int i = 0;
//    int j = 0;
//    int s = 0;
//    int sum = 0;
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        for (j = 1; j <= i; j++)
//        {
//            s += j;
//        }
//        sum += s;
//        s = 0;
//    }
//    printf("%d", sum);
//    return 0;
//}

