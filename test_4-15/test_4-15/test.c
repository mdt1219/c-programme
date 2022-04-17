#define _CRT_SECURE_NO_WARNINGS 1
//BC135
//#include <stdio.h>
//int main()
//{
//    int m, n;
//    scanf("%d %d", &n, &m);
//    int arr1[100][100] = { 0 };
//    int arr2[100][100] = { 0 };
//    float count = 0.0;
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
//                count++;
//        }
//    }
//    printf("%.2f", count / m / n * 100);
//    return 0;
//}

//BC136
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int arr[10][10] = { 0 };
//    int count = 0;
//    int sum = 0;
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            scanf("%d ", &arr[i][j]);
//        }
//    }
//    for (int i = 1; i < n; i++) {
//        for (int j = 0; j < i; j++) {
//            if (arr[i][j] == 0)
//                count++;
//        }
//    }
//    for (int i = 1; i < n; i++) {
//        sum += i;
//    }
//    if (count == sum)
//        printf("YES\n");
//    else
//        printf("NO\n");
//    return 0;
//}

//BC137
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int arr1[100] = { 0 };
//    int x = 0;
//    scanf("%d %d", &n, &m);
//    for (int i = 0; i < n * m; i++) {
//        scanf("%d", &arr1[i]);
//    }
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            printf("%d ", arr1[x]);
//            x++;
//        }
//        printf("\n");
//    }
//    return 0;
//}

//BC138
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int arr[10][10] = { 0 };
//    scanf("%d %d", &n, &m);
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (int j = 0; j < m; j++) {
//        for (int i = 0; i < n; i++) {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//BC139
//#include <stdio.h>
//int main()
//{
//    int n = 0, m = 0, k = 0, a = 0, b = 0;
//    int arr[10][10] = { 0 };
//    char t;
//    scanf("%d %d", &n, &m);
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    scanf("%d", &k);
//    for (int i = 0; i < k; i++) {
//        scanf(" %c %d %d", &t, &a, &b);
//        if (t == 'r') {
//            //行变换
//            for (int j = 0; j < m; j++) {
//                int tmp = arr[a - 1][j];
//                arr[a - 1][j] = arr[b - 1][j];
//                arr[b - 1][j] = tmp;
//            }
//        }
//        if (t == 'c') {
//            //列变换
//            for (int j = 0; j < n; j++) {
//                int tmp = arr[j][a - 1];
//                arr[j][a - 1] = arr[j][b - 1];
//                arr[j][b - 1] = tmp;
//            }
//        }
//    }
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//BC140
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int arr[30][30] = { 0 };
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            if (j == 0) {
//                arr[i][j] = 1;
//            }
//            if (i == j) {
//                arr[i][j] = 1;
//            }
//            if (i >= 2 && j >= 1) {
//                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//            }
//        }
//    }
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j <= i; j++) {
//            printf("%5d", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//BC141
//#include <stdio.h>
//int main()
//{
//    char arr[3][3] = { 0 };
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++) {
//            scanf(" %c", &arr[i][j]);//输入字符一定要考虑空格和换行
//        }
//    }
//    char flag = 'O';
//    for (int i = 0; i < 3; i++) {
//        if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][1] != 'O') {
//            flag = arr[i][1];
//            break;
//        }
//        if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[1][i] != 'O') {
//            flag = arr[1][i];
//            break;
//        }
//    }
//    if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[1][1] != 'O') {
//        flag = arr[1][1];
//    }
//    if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[1][1] != 'O') {
//        flag = arr[1][1];
//    }
//    if (flag == 'K') {
//        printf("KiKi wins!\n");
//    }
//    else if (flag == 'B') {
//        printf("BoBo wins!\n");
//    }
//    else
//        printf("No winner!\n");
//    return 0;
//}

//BC142
//#include <stdio.h>
//int main()
//{
//    int n = 0, m = 0;
//    char arr[1002][1002] = { '.' };
//    scanf("%d %d", &n, &m);
//    for (int i = 1; i < n + 1; i++) {
//        for (int j = 1; j < m + 1; j++) {
//            scanf(" %c", &arr[i][j]);
//        }
//    }
//    for (int i = 1; i < n + 1; i++) {
//        for (int j = 1; j < m + 1; j++) {
//            if (arr[i][j] == '*')
//                printf("*");
//            else {
//                int sum = 0;
//                if (arr[i - 1][j - 1] == '*')
//                    sum++;
//                if (arr[i - 1][j] == '*')
//                    sum++;
//                if (arr[i - 1][j + 1] == '*')
//                    sum++;
//                if (arr[i][j - 1] == '*')
//                    sum++;
//                if (arr[i][j + 1] == '*')
//                    sum++;
//                if (arr[i + 1][j - 1] == '*')
//                    sum++;
//                if (arr[i + 1][j] == '*')
//                    sum++;
//                if (arr[i + 1][j + 1] == '*')
//                    sum++;
//                printf("%d", sum);
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}

