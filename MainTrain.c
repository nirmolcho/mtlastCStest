
#include "exam.h"

int count1=0; // do not change!

void fx1(){
    count1++;
}

int main()
{
    //1
    int numbers1[] = { 4892, 201, 2987, 8120 };
    int* arr = processDigits(numbers1, 4);

    if (arr[4] != 4)
        printf("processDigits function is wrong for train1_1 (-8)\n");



    int numbers2[] = { 1392, 2101, 23487, 81120, 76, 54, 99 };
    
    arr = processDigits(numbers2, 7);


    if (arr[2] + arr[3] != 2255)
        printf("processDigits function is wrong for train1_2 (-8)\n");

    int numbers3[] = {0,0};

    arr = processDigits(numbers3, 2);

    if (arr[1] != 0)
        printf("processDigits function is wrong for train1_3 (-9)\n");

       
	// 2
	

    int res = recStrcmp("abc", "abc");

    if (count1 < 2)
        printf("recStrcmp function is not recursive (-8)\n");
    else {
        if (res != 0)
            printf("recStrcmp function is wrong for train2_1  (-8)\n");
    }
	count1 = 0;
	
    res = recStrcmp("abC", "abc");

    if (count1 < 2)
        printf("recStrcmp function is not recursive (-8)\n");
    else {
        if (res != -1)
            printf("recStrcmp function is wrong for train2_2  (-8)\n");
    }
	count1 = 0;	
	
    res = recStrcmp("", "aaa");

    if (res != -1)
        printf("recStrcmp function is wrong for train3_3  (-9)\n");


	//3
	printf("Question 3 will be checked manually, don't worry (-50)\n");
	printf("done");
    return 0;
}
