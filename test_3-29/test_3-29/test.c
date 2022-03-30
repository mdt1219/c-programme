#define _CRT_SECURE_NO_WARNINGS 1
////BC64
//#include <stdio.h>
//int main()
//{
//    float a = 0.0;
//    char b;
//    int money = 0;
//    int flag = 0;
//    scanf("%f %c", &a, &b);
//    if (b == 'y')
//        flag = 1;
//    else
//        flag = 0;
//    if (a <= 1)
//        money = 20 + flag * 5;
//    else
//        if (a == (int)(a / 1))
//            money = 20 + a - 1 + flag * 5;
//        else
//            money = 20 + a / 1 + flag * 5;
//    printf("%d\n", money);
//    return 0;
//}

//BC65
//#include <stdio.h>
//int main()
//{
//    int price = 0;
//    float a = 0.0;
//    scanf("%d", &price);
//    if (price < 100)
//        a = 1.0;
//    if (price >= 100 && price < 500)
//        a = 0.9;
//    if (price >= 500 && price < 2000)
//        a = 0.8;
//    if (price >= 2000 && price < 5000)
//        a = 0.7;
//    if (price >= 5000)
//        a = 0.6;
//    printf("%.1f", a * price);
//    return 0;
//}

//BC66
//#include <stdio.h>
//int main()
//{
//    int l = 0;
//    int t1 = 0;
//    int t2 = 0;
//    scanf("%d", &l);
//    t1 = l;
//    t2 = 10 + l / 10;
//    if (t1 < t2)
//        printf("w");
//    else
//        printf("v");
//    return 0;
//}

//BC67
//#include <stdio.h>
//int main()
//{
//    int x = 0;
//    int y = 0;
//    int x1 = 0;
//    int y1 = 0;
//    scanf("%d %d\n%d %d", &x, &y, &x1, &y1);
//    if (x == x1 && y < y1)
//        printf("u");
//    if (x == x1 && y > y1)
//        printf("d");
//    if (x < x1 && y == y1)
//        printf("r");
//    if (x > x1 && y == y1)
//        printf("l");
//    return 0;
//}

//BC68
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    scanf("%d", &i);
//    switch (i)
//    {
//    case 1:
//        printf("Monday");
//        break;
//    case 2:
//        printf("Tuesday");
//        break;
//    case 3:
//        printf("Wednesday");
//        break;
//    case 4:
//        printf("Thursday");
//        break;
//    case 5:
//        printf("Friday");
//        break;
//    case 6:
//        printf("Saturday");
//        break;
//    case 7:
//        printf("Sunday");
//        break;
//    }
//    return 0;
//}

//BC69
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    while (scanf("%d", &i) != EOF)
//    {
//        switch (i)
//        {
//        case 200:
//            printf("OK\n");
//            break;
//        case 202:
//            printf("Accepted\n");
//            break;
//        case 400:
//            printf("Bad Request\n");
//            break;
//        case 403:
//            printf("Forbidden\n");
//            break;
//        case 404:
//            printf("Not Found\n");
//            break;
//        case 500:
//            printf("Internal Server Error\n");
//            break;
//        case 502:
//            printf("Bad Gateway\n");
//            break;
//        }
//    }
//    return 0;
//}

//BC70
//#include <stdio.h>
//int main()
//{
//    int t = 0;
//    while (scanf("%d", &t) != EOF)
//    {
//        if (t > 0)
//            printf("1\n");
//        else if (t == 0)
//            printf("0.5\n");
//        else
//            printf("0\n");
//    }
//    return 0;
//}

//BC71
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    while (scanf("%d %d %d", &a, &b, &c) != EOF)
//    {
//        if (a + b > c && a + c > b && b + c > a)
//            if (a == b && b == c)
//                printf("Equilateral triangle!\n");
//            else if (a != b && a != c && b != c)
//                printf("Ordinary triangle!\n");
//            else
//                printf("Isosceles triangle!\n");
//        else
//            printf("Not a triangle!\n");
//
//    }
//    return 0;
//}

//BC72
//#include <stdio.h>
//int main()
//{
//    int y = 0;
//    int m = 0;
//    int d = 0;
//    int y1 = 0;
//    int m1 = 0;
//    int d1 = 0;
//    scanf("%d %d %d\n%d %d %d", &y, &m, &d, &y1, &m1, &d1);
//    if (y < y1)
//        printf("yes\n");
//    else if (y == y1)
//    {
//        if (m < m1)
//            printf("yes\n");
//        else if (m == m1)
//            if (d <= d1)
//                printf("yes\n");
//            else
//                printf("no\n");
//        else
//            printf("no\n");
//    }
//    else
//        printf("no\n");
//    return 0;
//}

