#define _CRT_SECURE_NO_WARNINGS 1
//BC30
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    scanf("%d\n", &a);
//    printf("%d %d %d\n", (a / 3600), (a % 3600) / 60, (a % 3600) % 60);
//    return 0;
//}

//BC31
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d\n", &n);
//    printf("%d\n", 1 << n);
//    return 0;
//}

//BC32
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d\n", &n);
//    printf("%ld\n", (long long)3.156e7 * n);
//    return 0;
//}

//BC33
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d\n", &n);
//    int i = 0;
//    float sum = 0.0;
//    float max = 0.0;
//    float min = 0.0;
//    float a[n];
//    for (i = 0; i < n; i++)
//    {
//        scanf("%f ", &a[i]);
//    }
//    max = min = sum = a[0];
//    for (i = 1; i < n; i++)
//    {
//        sum += a[i];
//        if (a[i] > max)
//            max = a[i];
//        if (a[i] < min)
//            min = a[i];
//    }
//    printf("%.2f %.2f %.2f\n", max, min, sum / n);
//    return 0;
//}

//BC34
//#include <stdio.h>
//int main()
//{
//    float a = 0.0;
//    float b = 0.0;
//    float c = 0.0;
//    float p = 0.0;
//    scanf("%f %f %f", &a, &b, &c);
//    p = (a + b + c) / 2;
//    printf("circumference=%.2f area=%.2f", a + b + c, sqrt(p * (p - a) * (p - b) * (p - c)));
//    return 0;
//}

//BC35
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int h = 0;
//    int m = 0;
//    scanf("%d %d %d", &n, &h, &m);
//    if (m % h != 0)
//    {
//        printf("%d\n", n - m / h - 1);
//    }
//    else
//        printf("%d\n", n - m / h);
//    return 0;
//}

//BC36
//#include <stdio.h>
//int main()
//{
//    double f = 0.0;
//    scanf("%lf", &f);
//    printf("%.3lf", (5.0 / 9) * (f - 32));
//    return 0;
//}

//BC37
//#include <stdio.h>
//int main()
//{
//    double r = 0.0;
//    double pi = 3.14;
//    scanf("%lf", &r);
//    printf("%.2lf", pi * r * r);
//    return 0;
//}

//BC38
//#include <stdio.h>
//int main()
//{
//    float r1 = 0.0;
//    float r2 = 0.0;
//    scanf("%f %f", &r1, &r2);
//    printf("%f", 1.0 / ((1 / r1) + (1 / r2)));
//    return 0;
//}

//BC39
//#include <stdio.h>
//int main()
//{
//    int h = 0;
//    int r = 0;
//    double pi = 3.14;
//    double v = 0.0;
//    scanf("%d %d", &h, &r);
//    v = pi * h * r * r;
//    if (1e4 / v == 0)
//        printf("%d\n", (int)(1e4 / v));
//    else
//        printf("%d", (int)(1e4 / v + 1));
//    return 0;
//}

//BC40
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    printf("%d\n", b + (b - a));
//    return 0;
//}

//BC41
//#include <stdio.h>
//int main()
//{
//    int r = 0;
//    float pi = 3.14;
//    scanf("%d", &r);
//    printf("%.2f\n", (4 / 3.0) * pi * r * r * r);
//    return 0;
//}

//BC42
//#include <stdio.h>
//int main()
//{
//    int hour = 0;
//    int minute = 0;
//    int k = 0;
//    int hour1 = 0;
//    int minute2 = 0;
//    scanf("%d:%d %d", &hour, &minute, &k);
//    hour1 = (k + minute) / 60 + hour;
//    minute2 = (k + minute) % 60;
//    hour1 = hour1 % 24;
//    printf("%02d:%02d", hour1, minute2);
//    return 0;
//}

//BC43
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int minute = 0;
//    scanf("%d", &n);
//    minute = n / 12 * 4 + 2;
//    printf("%d\n", minute);
//    return 0;
//}

//BC44
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    long long a = 0;
//    long long b = 0;
//    scanf("%d %d", &n, &m);
//    if (n > m)
//    {
//        int t = 0;
//        t = n;
//        n = m;
//        m = t;
//    }
//    b = m * n;
//    a = m % n;
//    while (a != 0)
//    {
//        n = a;
//        m = n;
//        a = m % n;
//    }
//    printf("%lld\n", (long long)(n + (b / n)));
//    return 0;
//}

//BC45
#include <stdio.h>
int main()
{
    int a[10];
    int n;
    scanf("%d", &n);
    int t = 0;
    int flag = 0;
    while (n) {
        if (n % 2 == 1) {
            a[t++] = 1;
        }
        else {
            a[t++] = 0;
        }
        n /= 10;
    }
    int i;
    for (i = t - 1; i >= 0; i--) {
        if (a[i] != 0) {
            flag = 1;
            printf("%d", a[i]);
        }
        else if (flag) {
            printf("%d", a[i]);
        }
    }
    if (!flag) printf("0\n");
}
