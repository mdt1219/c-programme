#define _CRT_SECURE_NO_WARNINGS 1
//编程初学者入门
//BC1
//#include <stdio.h>
//
//int main()
//{
//    printf("Hello Nowcoder!");
//    return 0;
//}
//
//BC2
// #include <stdio.h>
//
//int main()
//{
//    printf("     **     \n     **     \n************\n************\n    *  *    \n    *  *    ");
//    return 0;
//
//}
// BC3
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//    float a = 0.0;
//    scanf("%f", &a);
//    printf("%.3f", a);
//    return 0;
//}

//BC4
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//    float a = 0.0;
//    scanf("%f", &a);
//    printf("%.3f", a);
//    return 0;
//}

//BC5
//#include <stdio.h>
//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//        printf("%c\n", ch);
//    return 0;
//}

//BC6
//#include <stdio.h>
//int main()
//{
//    int a[3];
//    int i = 0;
//    for (i = 0; i < 3; i++)
//    {
//        scanf("%d ", &a[i]);
//    }
//    printf("%d\n", a[1]);
//    return 0;
//}

//BC7
//#include <stdio.h>
//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < 3; i++)
//        {
//            printf("%c%c%c\n", ch, ch, ch);
//        }
//    }
//    return 0;
//}
//BC8
//#include <stdio.h>
//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        int i = 0;
//        int j = 0;
//        for (i = 1; i <= 3; i++)
//        {
//            for (j = 1; j <= 3 - i; j++)
//                printf(" ");
//            for (j = 1; j <= 2 * i - 1; j++)
//                printf("%c", ch);
//            printf("\n");
//        }
//        for (i = 2; i > 0; i--)
//        {
//            for (j = 1; j <= 3 - i; j++)
//                printf(" ");
//            for (j = 1; j <= 2 * i - 1; j++)
//                printf("%c", ch);
//            printf("\n");
//        }
//    }
//    return 0;
//}

//BC9
//#include <stdio.h>
//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        printf("%d\n", ch);
//        getchar();  //取走回车占用的字符
//    }
//    return 0;
//}

//BC10
//#include <stdio.h>
//int main()
//{
//    float a = 0.0;
//    scanf("%f", &a);
//    if (a >= 0)
//        if (a - ((int)a) < 0.5)
//            printf("%d\n", (int)a);
//        else
//            printf("%d\n", ((int)a) + 1);
//    else
//        if (a - ((int)a) > -0.5)
//            printf("%d\n", (int)a);
//        else
//            printf("%d\n", ((int)a) - 1);
//    return 0;
//}

//BC11
//#include <stdio.h>
//int main()
//{
//    int score1 = 0;
//    int score2 = 0;
//    int score3 = 0;
//    scanf("%d %d %d", &score1, &score2, &score3);
//    printf("score1=%d,score2=%d,score3=%d\n", score1, score2, score3);
//    return 0;
//}

//BC12
//#include <stdio.h>
//int main()
//{
//    int id = 0;
//    float c = 0.0;
//    float math = 0.0;
//    float eng = 0.0;
//    scanf("%d;%f,%f,%f", &id, &c, &math, &eng);
//    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", id, c, math, eng);
//    return 0;
//}

//BC13
//#include <stdio.h>
//int main()
//{
//    int year = 0;
//    int month = 0;
//    int day = 0;
//    scanf("%4d%2d%2d", &year, &month, &day); //scanf中%4d控制域宽
//    printf("year=%04d\nmonth=%02d\ndate=%02d\n", year, month, day); //print中%02d表示前面自动添0
//    return 0;
//}

//BC14
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("a=%d,b=%d", &a, &b);
//    c = a;
//    a = b;
//    b = c;
//    printf("a=%d,b=%d\n", a, b);
//    return 0;
//}

//BC15
//#include <stdio.h>
//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        printf("%c\n", (ch + 32));
//        getchar();
//    }
//    return 0;
//}

//BC16
//#include <stdio.h>
//int main()
//{
//    int a = 0xABCDEF;
//    printf("%15d\n", a);
//    return 0;
//}

//BC17
#include <stdio.h>
//int main()
//{
//    int a = 1234;
//    printf("%#o %#X", a, a);
//    return 0;
//}

//BC18
//#include <stdio.h>
//int main()
//{
//    char a;
//    int b = 0;
//    float c = 0.0;
//    scanf("%c\n%d\n%f\n", &a, &b, &c);
//    printf("%c %d %.6f", a, b, c);
//    return 0;
//}

//BC19
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d %d %d", &a, &b, &c);
//    printf("%d%8d%8d", a, b, c);
//    return 0;
//}

//BC20
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%0x %o", &a, &b);
//    printf("%d\n", a + b);
//    return 0;
//}

//BC21
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    printf("%d\n", a + b);
//    return 0;
//}

//BC22
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    printf("%d\n", a / b);
//    return 0;
//}

//BC23
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    printf("%d\n", a % b);
//    return 0;
//}

//BC24
//#include <stdio.h>
//int main()
//{
//    float a = 0.0;
//    scanf("%f", &a);
//    printf("%d\n", ((int)a) % 10);
//    return 0;
//}

//BC25
//#include <stdio.h>
//int main()
//{
//    int x = 0;
//    scanf("%d", &x);
//    printf("%d\n", x * 100);
//    return 0;
//}

//BC26
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    printf("%d %d\n", a / b, a % b);
//    return 0;
//}

//BC27
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    printf("%d\n", a % 10);
//    return 0;
//}

//BC28
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    printf("%d\n", (a / 10) % 10);
//    return 0;
//}

//BC29
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    if (a + (b % 7) > 7)
//        printf("%d\n", (a + (b % 7)) % 7);
//    else
//        printf("%d\n", a + (b % 7));
//    return 0;
//}