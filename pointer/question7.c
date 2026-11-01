/* Try problem 3 using call by value and verify that it does not change the value of the
variable. */
#include <stdio.h>
void changeValue(int i) {
    i *= 10;
}
int main(){
    int i;
    scanf("%d", &i);
    changeValue(i);
    printf("The value of i after change is: %d\n", i);
    return 0;
}

/* কেন মান পরিবর্তন হলো না?
যখন আপনি changeValue(i) কল করলেন, তখন কম্পিউটারে আসল i-এর একটি কপি তৈরি হয়ে x-এর মধ্যে গেল। 
ফাংশনটি শুধু সেই x-কে ১০ গুণ করেছে, কিন্তু আপনার main() ফাংশনের আসল i একদম অপরিবর্তিত রয়ে গেছে! 
এটিই হলো Call by Value-এর কাজ। */