#define _CRT_SECURE_NO_WARNINGS 1
//BC148
//#include <stdio.h>
//int main()
//{
//    int n = 0, m = 0;
//    char s[100] = { 0 };
//    int l = 0, r = 0;
//    char c1 = { 0 }, c2 = { 0 };
//    scanf("%d %d", &n, &m);
//    getchar();            //消化上个scanf的\n
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%c", &s[i]);
//    }
//    for (int i = 0; i < m; i++)
//    {
//        scanf("%d %d %c %c", &l, &r, &c1, &c2);
//        for (int j = l - 1; j < r; j++)
//        {
//            if (s[j] == c1)
//                s[j] = c2;
//        }
//    }
//    for (int i = 0; i < n; i++)
//        printf("%c", s[i]);
//    return 0;
//}

//BC149
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char a[5000] = { 0 };
//    gets(a);
//    int len = strlen(a);
//    if (a[0] >= 'A' && a[0] <= 'Z')
//        printf("%c", a[0]);
//    if (a[0] >= 'a' && a[0] <= 'z')
//        printf("%c", a[0] - 32);
//    for (int i = 1; i < len; i++)
//    {
//        if (a[i] == ' ' && a[i + 1] >= 'A' && a[i + 1] <= 'Z')
//            printf("%c", a[i + 1]);
//        if (a[i] == ' ' && a[i + 1] >= 'a' && a[i + 1] <= 'z')
//            printf("%c", a[i + 1] - 32);
//    }
//    return 0;
//}

//BC150
//#include <stdio.h>
//int max3(int x, int y, int z)
//{
//    int max = 0;
//    max = x;
//    if (y > max)
//        max = y;
//    if (z > max)
//        max = z;
//    return max;
//}
//int main()
//{
//    int a = 0, b = 0, c = 0;
//    float res = 0.0;
//    scanf("%d %d %d", &a, &b, &c);
//    res = (float)max3(a + b, b, c) / (max3(a, b + c, c) + max3(a, b, b + c));
//    printf("%.2f", res);
//    return 0;
//}

//BC151
//#include <stdio.h>
//int judge(int x)
//{
//    int sum = 0;
//    while (x != 0)
//    {
//        int a = x % 10;
//        sum += a;
//        x = x / 10;
//    }
//    if (sum % 5 == 0)
//        return 1;
//    else
//        return 0;
//}
//int main()
//{
//    int a = 0, b = 0;
//    int num = 0;
//    scanf("%d %d", &a, &b);
//    for (int i = a; i <= b; i++)
//    {
//        if (judge(i) == 1)
//            num++;
//    }
//    printf("%d", num);
//    return 0;
//}

//BC152
//#include <stdio.h>
//int qiuhe(int x)
//{
//    int sum = 0;
//    while (x != 0)
//    {
//        int a = x % 10;
//        sum += a;
//        x = x / 10;
//    }
//    return sum;
//}
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    if (a < 10)
//        printf("%d", a);
//    else
//    {
//        while (a > 9)
//        {
//            int b = qiuhe(a);
//            if (b < 10)
//            {
//                printf("%d", b);
//                break;
//            }
//            else
//                a = b;
//        }
//    }
//    return 0;
//}


