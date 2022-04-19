#define _CRT_SECURE_NO_WARNINGS 1
//BC143
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char a[100] = { 0 };
//    int count = 0;
//    gets(a);
//    int len = strlen(a);
//    for (int i = 0; i < len; i++)
//    {
//        if (a[i] != ' ')
//            count++;
//    }
//    printf("%d\n", count);
//    return 0;
//}

//BC144
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char a[100] = { 0 };
//    char b[100] = { 0 };
//    char c[100] = "admin";
//    while (scanf("%s %s", a, b) != EOF)
//    {
//        if (strcmp(a, b) == 0 && strcmp(a, c) == 0)
//            printf("Login Success!");
//        else
//            printf("Login Fail!");
//    }
//    return 0;
//}

//BC145
//#include <stdio.h>
//#include <string.h>
//int judge(int x)
//{
//    int i = 0;
//    for (i = 2; i < x; i++)
//    {
//        if (x % i == 0)
//            return 0;
//    }
//    return 1;
//}
//int main()
//{
//    char a[100] = { 0 };
//    char b[100] = { 0 };
//    int maxn = 0, minn = 100;
//    gets(a);
//    int len = strlen(a);
//    for (int i = 0; i < len; i++)
//    {
//        b[a[i] - '0']++;
//    }
//    for (int i = 0; i < 100; i++)
//    {
//        if (b[i] > maxn)
//            maxn = b[i];
//        if (b[i] < minn && b[i] != 0)
//            minn = b[i];
//    }
//    int result = maxn - minn;
//    if (result < 2)
//    {
//        printf("No Answer\n0\n");
//    }
//    else
//    {
//        if (judge(result) == 1)
//        {
//            printf("Lucky Word\n%d\n", result);
//        }
//        else
//        {
//            printf("No Answer\n0\n");
//        }
//    }
//    return 0;
//}

//BC146
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int a = 0;
//    int b[4] = { 0 };
//    while (n / 1000 != 0)
//    {
//        int n1 = n % 1000;
//        a++;
//        b[a] = n1;
//        n /= 1000;
//    }
//    printf("%d", n);
//    for (int i = a; i > 0; i--)
//    {
//        printf(",%03d", b[i]);
//    }
//    return 0;
//}

//BC147
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char n[1000] = { 0 };
//    int a = 0, b = 0;
//    gets(n);
//    int len = strlen(n);
//    for (int i = 0; i < len; i++) {
//        if (n[i] == 'A')
//            a++;
//        if (n[i] == 'B')
//            b++;
//    }
//    if (a > b)
//        printf("A\n");
//    if (a == b)
//        printf("E\n");
//    if (a < b)
//        printf("B\n");
//    return 0;
//}

//BC148
#include <stdio.h>
#include <string.h>
int main()
{
    int n = 0, m = 0;
    char s[100] = { 0 };
    int l = 0, r = 0;
    char c1 = { 0 }, c2 = { 0 };
    scanf("%d %d", &n, &m);
    gets(s);
    for (int i = 0; i < m; i++)
    {
        scanf("%d %d %c %c", l, r, c1, c2);
        for (int j = l; j <= r; j++)
        {
            if (s[j - 1] == c1)
                s[j - 1] = c2;
        }
    }
    int len = strlen(s);
    for (int i = 0; i < len; i++)
        printf("%c", s[i]);
    return 0;
}