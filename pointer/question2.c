/* Write a program having a variable i . Print the address of i . Pass this variable to a
function and print its address. Are these addresses the same? Why? */
#include <stdio.h>
void add(int i){
    printf("The address of i is: %p\n",&i);
}
int main(){
    int i;
    scanf("%d", &i);
    printf("The address of i is: %p\n",&i);
    add(i);
    return 0;
}

// Address of i in main() and add() are not the same because in add() function, a copy of the value of i is passed (call by value), so it has its own memory location.
/* Why?
কারণ C ল্যাঙ্গুয়েজে ভ্যারিয়েবল পাস করার সময় Pass by Value পদ্ধতি কাজ করে। যখন আপনি add(i) কল করেন, তখন আসল i-এর মানটি কপি হয়ে ফাংশনের প্যারামিটার i-এর কাছে যায়। যেহেতু ফাংশনের প্যারামিটারটি মেমোরির একটি সম্পূর্ণ নতুন জায়গায় তৈরি হয়, তাই দুটির মেমোরি অ্যাড্রেস আলাদা দেখায়। */