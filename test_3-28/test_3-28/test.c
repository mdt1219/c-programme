#define _CRT_SECURE_NO_WARNINGS 1
//BC46
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    int d = 0;
//    scanf("%d %d %d %d", &a, &b, &c, &d);
//    printf("%.1f\n", (0.2 * a + 0.1 * b + 0.2 * c + 0.5 * d));
//    return 0;
//}

//BC47
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    int d = 0;
//    scanf("%d %d %d %d", &a, &b, &c, &d);
//    printf("%d\n", ((a + b - c) * d));
//    return 0;
//}

//BC48
//#include <stdio.h>
//int main()
//{
//    int x1 = 0;
//    int x2 = 0;
//    int y1 = 0;
//    int y2 = 0;
//    int sum = 0;
//    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
//    sum = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
//    printf("%d\n", sum);
//    return 0;
//}

//BC49
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    printf("%d\n", (a + b) % 100);
//    return 0;
//}

//BC50
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    if (a >= 140)
//        printf("Genius");
//    return 0;
//}

//BC51
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    while (~scanf("%d", &a))
//    {
//        if (a >= 60)
//            printf("Pass\n");
//        else
//            printf("Fail\n");
//    }
//    return 0;
//}

//BC52
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    while (~scanf("%d", &a))
//    {
//        if (a % 2 == 0)
//            printf("Even\n");
//        else
//            printf("Odd\n");
//    }
//    return 0;
//}

//BC53
//#include <stdio.h>
//int main()
//{
//    int ch = 0;
//    char a[10] = "AaEeIiOoUu";
//    while ((ch = getchar()) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < 10; i++)
//            if (ch == a[i])
//            {
//                printf("Vowel\n");
//                break;
//            }
//        if (i == 10)
//            printf("Consonant\n");
//        getchar();
//    }
//    return 0;
//}

//BC54
//#include <stdio.h>
//int main()
//{
//    int x = 0;
//    int l = 0;
//    int r = 0;
//    scanf("%d %d %d", &x, &l, &r);
//    if (x > r || x < l)
//        printf("false\n");
//    else
//        printf("true\n");
//    return 0;
//}


//BC55
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    if (((n % 4) == 0 && (n % 100) != 0) || (n % 400) == 0)
//        printf("yes\n");
//    else
//        printf("no\n");
//    return 0;
//}

//BC56
//#include <stdio.h>
//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//            printf("YES\n");
//        else
//            printf("NO\n");
//        getchar();
//    }
//    return 0;
//}

//BC57
//#include <stdio.h>
//int main()
//{
//    int year = 0;
//    int month = 0;
//    scanf("%4d%2d", &year, &month);
//    if (month >= 3 && month <= 5)
//        printf("spring\n");
//    else if (month >= 6 && month <= 8)
//        printf("summer\n");
//    else if (month >= 9 && month <= 11)
//        printf("autumn\n");
//    else
//        printf("winter\n");
//    return 0;
//}

//BC58
//#include <stdio.h>
//int main()
//{
//    float weight = 0.0;
//    float high = 0.0;
//    float bmi = 0.0;
//    scanf("%f %f", &weight, &high);
//    bmi = weight / (high * high);
//    if (bmi >= 18.5 && bmi <= 23.9)
//        printf("Normal\n");
//    else
//        printf("Abnormal\n");
//    return 0;
//}

//BC59
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    int d = 0;
//    int max = 0;
//    scanf("%d %d %d %d", &a, &b, &c, &d);
//    max = a;
//    if (b > max)
//        max = b;
//    if (c > max)
//        max = c;
//    if (d > max)
//        max = d;
//    printf("%d\n", max);
//    return 0;
//}
//或者用数组for循环
//#include <stdio.h>
//int main()
//{
//    int a[4] = { 0 };
//    int max = 0;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        scanf("%d ", &a[i]);
//    }
//    max = a[0];
//    for (i = 1; i < 4; i++)
//    {
//        if (a[i] > max)
//            max = a[i];
//    }
//    printf("%d\n", max);
//    return 0;
//}

//BC60
//#include <stdio.h>
//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//            printf("%c is an alphabet.\n", ch);
//        else
//            printf("%c is not an alphabet.\n", ch);
//        getchar();
//    }
//    return 0;
//}

//BC61
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int i = 0;
//    scanf("%d", &a);
//    if (a % 2 == 0)
//        printf("2 ");
//    if (a % 3 == 0)
//        printf("3 ");
//    if (a % 7 == 0)
//        printf("7");
//    if (a % 2 != 0 && a % 3 != 0 && a % 7 != 0)
//        printf("n");
//}

//BC62
//#include <stdio.h>
//int main()
//{
//    int a[10] = { 0 };
//    int p = 0;
//    int n = 0;
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%d ", &a[i]);
//        if (a[i] > 0)
//            p++;
//        if (a[i] < 0)
//            n++;
//    }
//    printf("positive:%d\nnegative:%d\n", p, n);
//}

//BC63
//#include <stdio.h>
//int main()
//{
//    float money = 0.0;
//    int month = 0;
//    int day = 0;
//    int flag = 0;
//    float s = 0.0;
//    float a = 1.0;
//    scanf("%f %d %d %d", &money, &month, &day, &flag);
//    if (month == 11 && day == 11)
//    {
//        a = 0.7;
//        s = money * a - 50 * flag;
//    }
//    else if (month == 12 && day == 12)
//    {
//        a = 0.8;
//        s = money * a - 50 * flag;
//    }
//    else
//        s = money;
//    if (s < 0)
//        s = 0;
//    printf("%.2f", s);
//    return 0;
//}