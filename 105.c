//Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[1000];         
    int freq[1000];          
    int i, j;

    
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

   
    for (i = 0; i < n; i++) {
        freq[i] = 1;
        for (j = i + 1; j < n; j++) {
            if (nums[i] == nums[j]) {
                freq[i]++;
            }
        }
    }

    int limit = n / 2;
    int ans = -1;

   
    for (i = 0; i < n; i++) {
        if (freq[i] > limit) {
            ans = nums[i];
            break;
        }
    }

    printf("%d\n", ans);
    return 0;
}
