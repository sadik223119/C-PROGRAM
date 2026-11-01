 /* Write a program using a function which calculates the sum and average of two
 numbers. Use pointers and print the values of sum and average in main(). */

#include <stdio.h>

// একটি ফাংশন যা পয়েন্টার ব্যবহার করে sum এবং avg ক্যালকুলেট করে main() এ পাঠাবে
void calculate(int a, int b, int *sum, float *avg) {
    *sum = a + b;                  // sum ভ্যারিয়েবলের অ্যাড্রেসে যোগফল রাখা হচ্ছে
    *avg = (float)(*sum) / 2;      // avg ভ্যারিয়েবলের অ্যাড্রেসে গড় রাখা হচ্ছে
}

int main() {
    int x, y, sum;
    float avg;

    // দুটি সংখ্যা ইনপুট নেওয়া
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    // পয়েন্টারের মাধ্যমে মান পাওয়ার জন্য sum এবং avg এর অ্যাড্রেস (&) পাঠানো হলো
    calculate(x, y, &sum, &avg);

    // প্রশ্নের শর্ত অনুযায়ী মানগুলো main() ফাংশনে প্রিন্ট করা হচ্ছে
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}