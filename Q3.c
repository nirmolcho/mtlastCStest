#include "exam.h"

// the function calculates the distance between location 1 to location 2; feel free to use it
float distance( Location l1, Location l2 )
{
    return (float)sqrt( pow( l1.x - l2.x, 2 ) + pow( l1.y - l2.y, 2 ) );
}


int checkIfAdded(Business **searched, int size,  char* id) {// נבדוק שהיוזר באמת התווסף במידה וכן נחזיר 1 כמבוקש אם לא נחזיר 0
    if (searched == NULL) {
        return 0;
    }
    for(int i = 0; i < size; i++) {
        if (strcmp(searched[i]->id, id) == 0) {
            return 1;
        }
    }
    return 0;
}

Business** searchBusiness(EasyApp* easyApp,  char* email, int category, int subcategory, float radius, int *resultsSize)
{
    Business **searched = NULL;
    User *user = NULL;
    *resultsSize = 0;
    for(int i = 0; i < easyApp->usersSize; i++) {
        if (strcmp(easyApp->users[i]->email, email) == 0) {
            user = easyApp->users[i];
            break;// נבדוק אם האיימיילים תואמים
        }
    }
    if (user == NULL) { // אם לא נמצא היוזר המתאים
        return searched; // תחזיר שריק
    }
    for(int i = 0; i < user->preferencesSize; i++) {
        if (user->preferences[i]->category == category &&
            user->preferences[i]->subCategory == subcategory &&
            radius >= distance(user->currentLocation, user->preferences[i]->loc)) // נרוץ עך כל המשתנים שצאיך לבדוק על מנת להתאים את המרחק
        {
            if (searched == NULL) {
                searched = (Business**)malloc(sizeof(Business*));
            } else {
                searched = (Business**)realloc(searched, (*resultsSize + 1) * sizeof(Business*));
            }
            searched[*resultsSize] = user->preferences[i];
            *resultsSize++;
        }
    }

    for(int i = 0; i < user->historySize; i++) {
        if (user->history[i]->category == category &&
            user->history[i]->subCategory == subcategory &&
            radius >= distance(user->currentLocation, user->history[i]->loc) &&
            (checkIfAdded(searched, *resultsSize, user->history[i]->id) == 0))// עכשיו נבדוק על כלהיסטוריית ההזמנות ונראה האם זה מתאים במידה וכן נעדכן בהתאם
        {
            if (searched == NULL) {
                searched = (Business**)malloc(sizeof(Business*));
            } else {
                searched = (Business**)realloc(searched, (*resultsSize + 1) * sizeof(Business*));
            }
            searched[*resultsSize] = user->history[i];
            *resultsSize++;
        }
    }

    for(int i = 0; i < easyApp->businessesSize; i++) {// לאחר שווידאנו גם אצל היוזר וגם בהיסטוריית ההיוזרס נבדוק האם יש עסק שמתאים להכל
        if (easyApp->businesses[i]->category == category &&
            easyApp->businesses[i]->subCategory == subcategory &&
            radius >= distance(user->currentLocation, easyApp->businesses[i]->loc) &&
            (checkIfAdded(searched, *resultsSize, easyApp->businesses[i]->id) == 0)) {
            if (searched == NULL) {
                searched = (Business**)malloc(sizeof(Business*));
            } else {
                searched = (Business**)realloc(searched, (*resultsSize + 1) * sizeof(Business*));
            }
            searched[*resultsSize] = easyApp->businesses[i];
            *resultsSize++;
        }
    }
    return searched;// נחזיר מערך דינאמי של מצביעים לעסקים מתאימים
}

int deleteEasyUser(EasyApp* easy, char *email) {
    User *user = NULL;
    User **users = NULL;
    Business *business = NULL;
    int index, l = 0;
    for(int i = 0; i < easy->usersSize; i++) {
        if (strcmp(easy->users[i]->email, email) == 0) {
            user = easy->users[i];
            index = i;
            break;
        }
    }
    if (user == NULL)
        return 0;
    free(user->preferences);
    free(user->history);
    free(user->email);
    free(user->fullName);
    if (easy->usersSize == 1) {
        easy->usersSize = 0;
        free(easy->users);
    } else {
        users = (User**) malloc((easy->usersSize - 1) * sizeof(User*));
        for(int i = 0; i < easy->usersSize; i++) {
            if (i != index) {
                users[l] = easy->users[i];
                l++;
            }
        }
        free(easy->users);
        easy->users = users;
    }
    return 1;
}