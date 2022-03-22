q1
ברצוננו לבנות פונקציה אשר תקבל מערך של מספרים, תספור כמה פעמים במערך מופיעה כל ספרה,
 ותחזיר מערך של עשרה ערכים – ערך אחד עבור כל ספרה, בצורה הבאה:
אם הספרה 1 הופיעה במערך 5 פעמים- במערך המוחזר המקום בעל אינדקס 1 יכיל את הערך 11111 (5 פעמים הספרה 1, כי היא הופיעה 5 פעמים במערך הקלט).
אם הספרה 2 הופיעה 7 פעמים – במקום בעל אינדקס 2 במערך המוחזר יהיה הערך 2222222 (כי הספרה 2 הופיעה 7 פעמים במערך הקלט).
אם הספרה 3 הופיעה 0 פעמים – במקום בעל אינדקס 3 במערך המוחזר יהיה הערך 0 (כי הספרה 3 הופיעה 0 פעמים במערך הקלט עם המספרים).
וכו'...
זאת אומרת בכל אחד מהמקומות במערך המוחזר – יהיה מספר המורכב מספרה אחת ומספר הספרות בו יהיה מספר הפעמים שהספרה הופיעה במערך הקלט.
במערך המוחזר באינדקס 0 – יש לשים תמיד את הערך 0. עיינו בדוגמא הבאה: אם מערך הקלט נראה כך:
8120 2987 201 4892
הספרה 1 מופיעה 2 פעמים, (לכן נשמור את המספר 11 במקום בעל אינדקס 1 במערך המוחזר) הספרה 2 מופיעה 4 פעמים, (לכן נשמור את המספר 2222 במקום בעל אינדקס 2 במערך המוחזר) הספרה 3 לא מופיע בכלל במערך (לכן נשמור את המספר 0 במקום בעל אינדקס 3 במערך המוחזר) וכו'. המערך המוחזר יראה כך:
99 888 7 0 0 4 0 2222 11 0
כתוב את הפונקציה processDigits המקבלת מערך בשם numbers המכיל מספרים שלמים לא שליליים, ואת גודלו size. על הפונקציה להחזיר את המערך החדש arr (לפי המפורט לעיל).
int* processDigits(int numbers[], int size)
ניתן להשתמש בפונקציה עזר כרצונכם.
חתימת הפונקציה תראה כך:
סעיף א הצלחה במוד אימון מזכה ב-8 נקודות סעיף ב הצלחה במקרי קצה במוד הגשה מזכה ב 8 נקודות
סעיף ג￼ הצלחה במוד הגשה בשאר המקרים מזכה ב-9 נקודות הערה: הציון המלא המכיל את כל הסעיפים הללו ינתן לאחר הגשה במוד הגשה. ממשו את הקוד הנדרש בקובץ Q1.c
q2

כתוב פונקציה רקורסיבית:
int recStrcmp(char* st1, char* st2) הפונקציה מקבלת שתי מחרוזות st1 ו-st2. במידה ומחרוזת st1 גדולה ממחרוזת st2 תחזיר הפונקציה 1.
מידה ו-st2 גדולה תחזיר הפונקציה 1- ומידה והן שוות תחזיר הפונקציה 0.
למעשה פונקציה זו עובדת בדיוק כפי שעובדת strcmp אך הפונקציה שעליכם לממש הינה בצורה רקורסיבית.
אסור השימוש בכל הפונקציות הקיימות ב string.h.
דוגמאות:
)"recStrcmp("ab", "ab הפונקציה תחזיר 0 )"recStrcmp("abC", "abc הפונקציה תחזיר 1- )"recStrcmp("cde", "cd הפנקציה תחזיר 1
● ניתן להניח שכל מחרוזת מסתיימת ב-null ● אין להשתמש בלולאות, פונקציות עזר-אף לא פונקצית עזר רקורסיבית ו\או מערכי עזר. ● אין להשתמש במשתנים גלובאליים ו\או סטטיים.
סעיף א הצלחה במוד אימון מזכה ב-8 נקודות סעיף ב הצלחה במקרי קצה במוד הגשה מזכה ב 8 נקודות סעיף ג הצלחה במוד הגשה בשאר המקרים מזכה ב-9 נקודות הערה: הציון המלא המכיל את כל הסעיפים הללו ינתן לאחר הגשה במוד הגשה
את הפתרון לשאלה זו יש לכתוב בקובץ Q2.c

q3 ￼
אפליקציית
אנשים לעסקים מקומיים. נושאי התוכן באפליקציה מחולקים לפי הצרכים היומיומיים של משתמשי האפליקציה, למשל - "לאכול", "לקנות", "לבלות" וכו'.
לכל עסק באפליקציה נקבע דירוג על סמך ציון easy (
בשאלה זו עליכם לממש מספר פונקציות שימושיות עבור האפליקציה (בקובץ Q3.c) להלן המבנים הנדרשים: מיקום (Location)
y-וxקורדינאטתמיקוםבדומימדלפי o
עסק (Business):
name o:מצביעלמחרוזתאשרמצייןאתשםהעסק ID o:מחרוזתהמציינתמספרמזההשלהעסק phoneNumber o: מחרוזת המציינת את מספר הטלפון של העסק location o:מיקוםהעסק
category o:קטגוריהשלהעסק subCategory o:תתקטגוריהשלהעסק. easyPoints o:דירוגהעסק reviews o: מצביע למערך מצביעים לביקורות שהעסק קיבל. (ביקורת הינה מחרוזת) reviewsSize o:גודלמערךהביקורות
משתמש (User):
fullName o:מצביעלמחרוזתאשרמצייןאתהשםהמלאשלהמשתמש email o: מצביע למחרוזת אשר מציין את האימייל. מזהה ייחודי של המשתמש. phoneNumber o: מחרוזת המציינת את מספר הסלולר currentLocation o:מיקוםנוכחי
history o:מצביעלמערךמצביעיםלעסקיםשהמשתמשנכנסלראותמידעלגביהם (מדובר בעסקים הקיימים באפליציה)
historySize o:גודלמערךההיסטוריה preferences o:מצביעלמערךמצביעיםלעסקיםשהמשתמשסימןעסקיםאלו
כמועדפים עליו (מדובר בעסקים הקיימים באפליציה) preferencesSize o:גודלמערךהמועדפים
Easy אשר פותחה בשנת 2011, מספקת פלטפורמה לחיבור בין￼￼
האפליקציה מציגה מידע אובייקטיבי ושימושי על עסקים בישראל - כתובות, טלפונים, שעות פתיחה,￼￼ ביקורות, תמונות ועוד. רשימות העסקים מסודרת על בסיס מיקום המשתמש, נושא החיפוש ואיכות העסקים. קיימות אלפי רשימות שונות אותן ניתן לסנן לפי מאות אפשרויות שונות.
הציון מתעדכן בצורה אוטומטית ויומיומית על/￼
ידי האפליקציה ומייצג את כלל מדדי איכות העסק - ציוני גולשים, פופולריות, שירותי העסק ועוד.)￼

נתוני אפליקציית EasyApp( EASY):￼
users o:מצביעלמערךמצביעיםלכללהמשתמשיםבאפליקציה usersSize o:מספרהמשתמשיםבאפליקציה businesses o:מצביעלמערךמצביעיםלכללהעסקיםהנמצאיםבאפליקציה
businessesSize o:מספרהעסקיםבאפליקציה
להלן הגדרת המבנים: (ובכל מקרה, מה שקובע אלו ההגדרות הנמצאות ב exam.h)
￼typedef struct
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
סעיף א (25 נקודות) ממשו את הפונקציה הבאה:
￼Business** searchBusiness(EasyApp* easyApp, char* email, int category, int subcategory, float radius, int *resultsSize);
הפונקציה מחפשת בשביל משתמש מסויים (לפי האימייל) עסקים המתאימים לקטגוריה ולתת הקטגוריה שביקש, אשר נמצאים במרחק קטן שווה ל-radius מהמקום בוא הוא נמצא.
הפונקציה תחזיר מערך דינאמי של מצביעים לעסקים מתאימים העונים על הדרישות. גודל המערך￼ המוחזר יעודכן בפרמטר resultsSize.
העסקים אשר יופיעו במערך המוחזר (שעונים על הקריטריונים לעיל) יהיו לפי הסדר הבא
- עסקים הנמצאים במועדפים של המשתמש. - עסקים הנמצאים בהיסטוריה של המשתמש. - עסקים הנמצאים באפליקציה.
כמובן, שאין לחזור על עסק פעמיים במערך המוחזר...
אם לא קיימים עסקים מתאימים כלל, יוחזר NULL. הקלות: ניתן להניח כי כל ההקצאות מצליחות. פונקצית המרחק נתונה (בקובץ Q3.c) עליכם רק להשתמש בה בהתאם.
סעיף ב (25 נקודות) ממשו את הפונקציה הבאה:
int deleteEasyUser(EasyApp* easy, char *email);
הפונקציה מקבלת מצביע לאפליקציה, ומצביע לאימייל של משתמש מסוים.
על הפונקציה למחוק את המשתמש מהאפליקציה ולעדכן זאת בכל המקומות הנדרשים לכך. הפונקציה תחזיר 1 אם המשתמש היה קיים באפליקציה, אחרת יוחזר 0.
!
