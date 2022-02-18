// 146873232	Feb/19/2022 05:18UTC+9	junah	A - Watermelon	GNU C11	Accepted	30 ms	0 KB

#include <stdio.h>

int W;

int main() {
    scanf("%d", &W);
    if(W % 2 == 0 && W > 2) printf("YES");
    else printf("NO");
    return 0;
}