#ifndef EXAM_H_
#define EXAM_H_

#ifndef NULL
#define NULL 0
#endif

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


typedef struct
{
	int x, y;
}Location;

typedef struct
{
	char* name;
	char id[20];
	char phoneNumber[11];
    Location loc;
    int category;
    int subCategory;
    int easyPoints;
    char** reviews;
	int reviewsSize;
}Business;

typedef struct
{
	char* fullName;
	char* email;
	char phoneNumber[11];
	Location currentLocation;
	Business** history;
	int historySize;
	Business** preferences;
	int preferencesSize;
}User;

typedef struct
{
	User** users;
	int usersSize;
	Business ** businesses;
	int businessesSize;
}EasyApp;



//Q1
int* processDigits(int numbers[], int size);
//Q2
int recStrcmp(char* st1, char* st2);
void fx1();

//Q3
//Business** searchBusiness(EasyApp* easyApp,  char* email, int category, int subcategory, float radius, int *resultsSize);
//int deleteEasyUser(EasyApp* easy, char *email);



#endif