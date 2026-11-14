#include <stdio.h>

#define MAX_SIZE 10

int main(void)
{
    int n, x;
    int r, c, y, z;
    int a[MAX_SIZE];
    int b[MAX_SIZE][MAX_SIZE];

    printf("Enter 1-D array element count (1-%d): ", MAX_SIZE);
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX_SIZE) {
        printf("Invalid 1-D array element count.\n");
        return 1;
    }

    printf("Enter 1-D array elements:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        if (scanf("%d", &a[i]) != 1) {
            printf("Invalid array element.\n");
            return 1;
        }
    }

    printf("Enter the 1-D array position to access (1-%d): ", n);
    if (scanf("%d", &x) != 1 || x < 1 || x > n) {
        printf("Invalid 1-D array position.\n");
        return 1;
    }
    printf("Element %d is %d.\n", x, a[x - 1]);

    printf("1-D array elements:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d is %d\n", i + 1, a[i]);
    }

    printf("Enter 2-D array row and column counts (1-%d each): ", MAX_SIZE);
    if (scanf("%d %d", &r, &c) != 2 ||
        r < 1 || r > MAX_SIZE || c < 1 || c > MAX_SIZE) {
        printf("Invalid 2-D array dimensions.\n");
        return 1;
    }

    printf("Enter 2-D array elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            if (scanf("%d", &b[i][j]) != 1) {
                printf("Invalid array element.\n");
                return 1;
            }
        }
    }

    printf("Enter the 2-D array row and column position to access: ");
    if (scanf("%d %d", &y, &z) != 2 ||
        y < 1 || y > r || z < 1 || z > c) {
        printf("Invalid 2-D array position.\n");
        return 1;
    }
    printf("Element at row %d, column %d is %d.\n", y, z, b[y - 1][z - 1]);

    printf("2-D array elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("Element [%d][%d]: %d\n", i + 1, j + 1, b[i][j]);
        }
    }

    return 0;
}
