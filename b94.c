#include <stdio.h>
    int main()
    {
        int arr[100], len, i, j, temp, n;
        printf("Enter the size:");
 
        scanf("%d", &len);
        printf("\n Enter the elements");
 
        for (i = 0; i < len; i++) 
        {
            scanf("%d", &arr[i]);
        }
 
        printf("\n Enter the kth Number:");
        scanf("%d", &n);
        printf("\n The %d th kth number is: %d", n, arr[n - 1]);
        return 0;
    }
