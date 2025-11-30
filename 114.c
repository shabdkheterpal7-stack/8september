//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output
#include <stdio.h>
#include <string.h>

int main() {
    char s[100005];
    if (scanf("%100004s", s) != 1) return 0;

    int last[256];
    for (int i = 0; i < 256; i++) last[i] = -1;

    int best = 0, start = 0;
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        unsigned char c = s[i];
        if (last[c] >= start) start = last[c] + 1;
        last[c] = i;
        int cur = i - start + 1;
        if (cur > best) best = cur;
    }

    printf("%d\n", best);
    return 0;
}
