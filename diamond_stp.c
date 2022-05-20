// Diamond
#include <stdio.h>
int main()
{
    int n;
    printf("How many Rows you want to print: ");
    scanf("%d",&n);
    for (int  i = 1; i <= n; i++)
    {
        for (int j = 1; j <=n-i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2*i-1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int z = n-1; z >=1 ; z--)
    {
        for (int x = 1; x <= n-z; x++)
        {
            printf(" ");
        }
        for (int y = 1; y <= 2*z-1; y++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}



// // hole diamond
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("How many Rows you want to print: ");
//     scanf("%d",&n);
//     for (int  i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <=n-i; j++)
//         {
//             printf("*");
//         }
//         for (int k = 1; k <= 2*i-1; k++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <=n-i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     for (int z = n-1; z >=1 ; z--)
//     {
//         for (int x = 1; x <= n-z; x++)
//         {
//             printf("*");
//         }
//         for (int y = 1; y <= 2*z-1; y++)
//         {
//             printf(" ");
//         }
//         for (int x = 1; x <= n-z; x++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // hole diamond 2
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("How many Rows you want to print: ");
//     scanf("%d",&n);
//     for (int  i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <=n-i; j++)
//         {
//             if (j==n-i)
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         for (int k = 1; k <= 2*i-1; k++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <=n-i; j++)
//         {
//             if (j==1)
//             {
//                 printf("*");
//             }
//             // else
//             // {
//             //     printf(" ");
//             // }
//         }
//         printf("\n");
//     }
//     for (int z = n-1; z >=1 ; z--)
//     {
//         for (int x = 1; x <= n-z; x++)
//         {
//             if (x==n-z)
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         for (int y = 1; y <= 2*z-1; y++)
//         {
//             printf(" ");
//         }
//         for (int x = 1; x <= n-z; x++)
//         {
//             if (x==1)
//             {
//                 printf("*");
//             }
//             // else
//             // {
//             //     printf(" ");
//             // }
            
//         }
//         printf("\n");
//     }
//     return 0;
// }