#define _CRT_SECURE_NO_WARNINGS 1
//BC127
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int i = 0;
//    int j = 0;
//    int a[100] = { 0 };
//    int count = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (i = 2; i <= n; i++)
//            a[i] = i;
//        for (i = 2; i <= n; i++)
//        {
//            for (j = i + 1; j <= n; j++)
//            {
//                if (j % i == 0)
//                    a[j] = 0;
//            }
//        }
//        for (i = 2; i <= n; i++)
//        {
//            if (a[i] != 0)
//                printf("%d ", a[i]);
//            else
//                count++;
//        }
//        printf("\n%d", count);
//    }
//    return 0;
//}

//BC128
//#include <stdio.h>
//int main()
//{
//    float a[5][5] = { 0.0 };
//    float sum[5] = { 0.0 };
//    int i = 0;
//    for (i = 0; i < 5; i++)
//    {
//        scanf("%f %f %f %f %f\n", &a[i][0], &a[i][1], &a[i][2], &a[i][3], &a[i][4]);
//    }
//    for (i = 0; i < 5; i++)
//    {
//        sum[i] = a[i][0] + a[i][1] + a[i][2] + a[i][3] + a[i][4];
//        printf("%.1f %.1f %.1f %.1f %.1f %.1f\n", a[i][0], a[i][1], a[i][2], a[i][3], a[i][4], sum[i]);
//    }
//    return 0;
//}

//BC129
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int a[5][5] = { 0 };
//    scanf("%d %d\n", &n, &m);
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d ", &a[i][j]);
//        }
//        scanf("\n");
//    }
//    int x = 0;
//    int y = 0;
//    scanf("%d %d", &x, &y);
//    printf("%d\n", a[x - 1][y - 1]);
//    return 0;
//}

//BC130
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int a[10][10] = { 0 };
//    scanf("%d %d\n", &n, &m);
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d ", &a[i][j]);
//        }
//        scanf("\n");
//    }
//    int max = 0;
//    int x = 0;
//    int y = 0;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            if (a[i][j] > max)
//            {
//                max = a[i][j];
//                x = i + 1;
//                y = j + 1;
//            }
//        }
//    }
//    printf("%d %d\n", x, y);
//    return 0;
//}

//BC131
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int arr1[10][10] = { 0 };
//    int arr2[10][10] = { 0 };
//    int flag = 0;
//    scanf("%d %d", &n, &m);
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d ", &arr1[i][j]);
//        }
//    }
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d ", &arr2[i][j]);
//        }
//    }
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            if (arr1[i][j] == arr2[i][j])
//                flag++;
//        }
//    }
//    if (flag == n * m)
//        printf("Yes\n");
//    else
//        printf("No\n");
//    return 0;
//}

//BC132
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int arr[10][10] = { 0 };
//    int sum = 0;
//    scanf("%d %d", &n, &m);
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//            if (arr[i][j] > 0)
//                sum += arr[i][j];
//        }
//    }
//    printf("%d\n", sum);
//    return 0;
//}