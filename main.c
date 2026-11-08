#include <stdio.h>

int main(void)
{
    int n, cnt = 0;
    scanf("%d", &n);
    /* TODO: 課題0607 */
    if (n < 0)
        printf ("NG");
    else {
        for (int i = 0; i <= 50; i ++) {
            for (int j = 0; j <= 50; j ++) {
                if ((i != j) && (i + j == n))
                    cnt ++;
            }
        }
        printf("%d", cnt);
    }
    return 0;
}
