#define _CRT_SECURE_NO_WARNINGS 1
//BC121
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int a[2000] = { 0 };
//    int i = 0;
//    int j = 0;
//    scanf("%d %d\n", &n, &m);
//    for (i = 0; i < n; i++)
//        scanf("%d ", &a[i]);
//    scanf("\n");
//    for (i = n; i < n + m; i++)
//        scanf("%d ", &a[i]);
//    for (i = 0; i < n + m - 1; i++)
//    {
//        for (j = 0; j < n + m - i - 1; j++)
//        {
//            if (a[j] > a[j + 1])
//            {
//                int tmp = a[j];
//                a[j] = a[j + 1];
//                a[j + 1] = tmp;
//            }
//        }
//    }
//    for (i = 0; i < n + m; i++)
//        printf("%d ", a[i]);
//    return 0;
//}

//BC122
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int a[50] = { 0 };
//    int i = 0;
//    int up = 0;
//    int down = 0;
//    scanf("%d\n", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d ", &a[i]);
//    }
//    for (i = 0; i < n - 1; i++)
//    {
//        if (a[i] >= a[i + 1])
//            up++;
//        if (a[i] <= a[i + 1])
//            down++;
//    }
//    if ((up == n - 1) || (down == n - 1))
//        printf("sorted");
//    else
//        printf("unsorted");
//    return 0;
//}

//BC123
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int a[50] = { 0 };
//    int m = 0;
//    int i = 0;
//    scanf("%d\n", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d ", &a[i]);
//    }
//    scanf("\n");
//    scanf("%d", &m);
//    for (i = 0; i < n; i++)
//    {
//        if (a[i] < m)
//            printf("%d ", a[i]);
//        else
//            break;
//    }
//    printf("%d ", m);
//    while (i < n)
//    {
//        printf("%d ", a[i]);
//        i++;
//    }
//    return 0;
//}

//BC124
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int a[50] = { 0 };
//    int m = 0;
//    int i = 0;
//    scanf("%d\n", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d ", &a[i]);
//    }
//    scanf("\n");
//    scanf("%d", &m);
//    for (i = 0; i < n; i++)
//    {
//        if (a[i] != m)
//            printf("%d ", a[i]);
//    }
//    return 0;
//}

//BC125
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int a[1000] = { 0 };
//    int i = 0;
//    scanf("%d\n", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d ", &a[i]);
//    }
//    printf("%d ", a[0]);
//    for (i = 1; i < n; i++)
//    {
//        int j = 0;
//        int count = 0;
//        for (j = 0; j < i; j++)
//        {
//            if (a[j] != a[i])
//                count++;
//        }
//        if (count == i)
//            printf("%d ", a[i]);
//    }
//    return 0;
//}

//BC126
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int a[100] = { 0 };
//    int i = 0;
//    int m = 0;
//    int count = 0;
//    scanf("%d\n", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d ", &a[i]);
//    }
//    scanf("\n%d", &m);
//    for (i = 0; i < n; i++)
//    {
//        if (a[i] == m)
//            count++;
//    }
//    printf("%d", count);
//    return 0;
//}


