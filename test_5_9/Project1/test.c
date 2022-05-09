#define _CRT_SECURE_NO_WARNINGS 1
//BC166
//#include <stdio.h>
//int taijie(int a)
//{
//    int m = 0;
//    if (a <= 2)
//        m = a;
//    else
//        m = taijie(a - 1) + taijie(a - 2);
//    return m;
//}
//int main()
//{
//    int n = 0;
//    int result = 0;
//    scanf("%d", &n);
//    result = taijie(n);
//    printf("%d\n", result);
//    return 0;
//}

//BC167
//#include <stdio.h>
//long long factorial(int n)
//{
//    long long m = 1;
//    for (int i = 1; i <= n; i++)
//    {
//        m = m * i;
//    }
//    return m;
//}
//int main()
//{
//    int n = 0;
//    long long result = 0;
//    scanf("%d", &n);
//    result = factorial(n);
//    printf("%lld\n", result);
//    return 0;
//}

//BC168
//#include <stdio.h>
//int qiuhe(int a)
//{
//    int sum = 0;
//    for (int i = 1; i <= a; i++)
//        sum += i;
//    return sum;
//}
//int main()
//{
//    int n = 0;
//    int result = 0;
//    scanf("%d", &n);
//    result = qiuhe(n);
//    printf("%d\n", result);
//    return 0;
//}

//BC169
//#include <stdio.h>
//int Ackmann(int n, int m)
//{
//    int result = 0;
//    if (m == 0)
//    {
//        result = n + 1;
//    }
//    if (m > 0 && n == 0)
//    {
//        result = Ackmann(m, 1);
//    }
//    if (m > 0 && n > 0)
//    {
//        int a = Ackmann(m, n - 1);
//        result = Ackmann(m - 1,a);
//    }
//    return result;
//}
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int result = Ackmann(n, m);
//    printf("%d\n", result);
//    return 0;
//}

//BC170
//#include <stdio.h>
//#include <math.h>
//int digit(int x, int i)
//{
//    int result = 0;
//    result = x % (int)(pow(10, i));
//    return result;
//}
//int main()
//{
//    int x = 0;
//    int i = 0;
//    scanf("%d %d", &x, &i);
//    int result = digit(x, i);
//    printf("%d\n", result);
//    return 0;
//}

//BC171
//#include <stdio.h>
//int Hermite(int n, int x)
//{
//    int result = 0;
//    if (n == 0)
//    {
//        result = 1;
//    }
//    if (n == 1)
//    {
//        result = 2 * n;
//    }
//    if (n > 1)
//    {
//        result = 2 * x * Hermite(n - 1, x) - 2 * (n - 1) * Hermite(n - 2, x);
//    }
//    return result;
//}
//int main()
//{
//    int n = 0;
//    int x = 0;
//    scanf("%d %d", &n, &x);
//    int result = Hermite(n, x);
//    printf("%d\n", result);
//    return 0;
//}

//BC172
//#include <stdio.h>
//#include <math.h>
//int pailie(int n, int m)
//{
//    int result = 1;
//    int a = n - m + 1;
//    for (int i = a; i <= n; i++)
//    {
//        result *= i;
//    }
//    return result;
//}
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int result = pailie(n, m);
//    printf("%d\n", result);
//    return 0;
//}

//BC173
//#include <stdio.h>
//#include <math.h>
//int nixu(int n)
//{
//    int result = 0;
//    int a[50] = { 0 };
//    int i = 0;
//    while (n)
//    {
//        a[i] = n % 10;
//        i++;
//        n /= 10;
//    }
//    for (int j = i - 1; j >= 0; j--)
//    {
//        result += a[j] * (int)pow(10, i - 1 - j);
//    }
//    return result;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int result = nixu(n);
//    printf("%d\n", result);
//    return 0;
//}