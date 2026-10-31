#include <stdio.h>
int main() {
    int n, k;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &k);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && a[j] - a[i] == k) {
                printf("1");
                return 0;
            }
        }
    }
    printf("0");
    return 0;
}
