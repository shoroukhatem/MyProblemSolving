#include <stdio.h>
#include <stdlib.h>
void update(int *a,int *b) {
    int aa = *a;
    *a = (*a) + (*b);
    int sub = (aa)-(*b);
    *b = abs(sub);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
