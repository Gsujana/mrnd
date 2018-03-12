/*
Author : Abhijith Ravuri

In this lesson you will learn about  complexity Analysis .
*/
#include <stdio.h>
#define __FILL_THIS__ ;

/*
Watch these videos First ,they are must .Dont be lazy and skip this ,
Spend 1-2 hours on this , It will help you throughout your career .

https://www.youtube.com/watch?v=V42FBiohc6c&list=PL2_aWCzGMAwI9HK8YPVBjElbLbI3ufctn
https://www.youtube.com/watch?v=8syQKTdgdzc&index=2&list=PL2_aWCzGMAwI9HK8YPVBjElbLbI3ufctn
https://www.youtube.com/watch?v=Ok1_mpAlk2I
https://www.youtube.com/watch?v=FEnwM-iDb2g&index=2&list=PLEbnTDJUr_IeHYw_sfBOJ6gk5pie0yP-0
PDF : https://codility.com/media/train/1-TimeComplexity.pdf
http://www.geeksforgeeks.org/analysis-of-algorithms-set-4-analysis-of-loops/
*/
void fun1(int);
void fun2(int);
void fun3(int);
void fun4(int);
void fun5(int);
void fun6(int);
void fun7(int);
int main(){

    //Write the Time complexities for the following functions in Answers section .
    //Uncomment each function ,Run it and check and then write answer and comment the function again ,Repeat the same for all.
    //Function definitons are below answers section .

    fun1(5);

    //fun2(5);

    //fun3(8);

    //fun4(10);

    //fun5(8);

    //fun6(8);

    //Task 1 :Write a function which runs in (Log(n)^2) time ,ie logn square .
    //fun7(10);
}
/*
Time complexity for functions 1,2,3,4,5,6 Answers :
//Write complexity in terms of n . I mean if loop ran 25 times for n=5 ,and 36 for n=6 ,then its complexity is O(n^2)
1)O(n) - > N Times because intialize i is 0 ,and For loop will repeat till i becomes equal to N
So Loop runs n times ,hence the complexity O(n)

2)
3)

4)

5)

6)

*/
//Practice more link : http://www.cquestions.com/2012/02/looping-questions-in-c-and-answers.html
void fun1(int n){

    int i=0;
    for(i=0;i<n;i++){
        printf("Loop ran %d Time\n",i+1);
    }

}

void fun2(int n){

    int i=n;
    int count=0;
    while(i>=0){
        count++;
        i--;
    }
    printf("Loop ran %d times\n",count);
}


void fun3(int n){
    int i=1;
    int count=0;
    while(i<n){
        count++;
        i=i*2;
    }
    printf("Loop ran %d times\n",count);
}


void fun4(int n){
    int i=0;
    int j=0;
    int count=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            count++;
        }
    }
    printf("Loop ran %d times\n",count);
}

void fun5(int n){
    int i=0;
    int j=0;
    int count=0;
    for(i=0;i<n;i++){
        for(j=1;j<n;){
            count++;
            j=j*2;
        }
    }
    printf("Loop ran %d times\n",count);
}



void fun6(int n){
    int i=0;
    int j=0;
    int count=0;
    int k=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            for(k=0;k<n;k++){
                count++;
            }
        }
    }
    printf("Loop ran %d times\n",count);
}

void fun7(int n){
    printf("Log(n) sqaure Function not yet implemented\n");
}
