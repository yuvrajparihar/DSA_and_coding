#include <stdio.h>

int main(void) {
    #ifndef ONLINE_JUDGE
   freopen("/home/yuvraj/yuvi/DSA_and_coding/io/input.txt", "r", stdin);
   freopen("/home/yuvraj/yuvi/DSA_and_coding/io/output.txt", "w", stdout);
#endif
    int t=5;
    int *p=&t;
    printf("%d",sizeof(p));
	return 0;
}

