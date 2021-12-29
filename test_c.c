#include <stdio.h>

int main(void) {
    #ifndef ONLINE_JUDGE
   freopen("D:/vscode/io/input.txt", "r", stdin);
   freopen("D:/vscode/io/output.txt", "w", stdout);
#endif
    int t=5;
    int *p=&t;
    printf("%d",sizeof(p));
	return 0;
}

