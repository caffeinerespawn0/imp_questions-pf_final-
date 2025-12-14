// PF Final 2023 Question 4
#include <stdio.h>
#include <string.h>

void encrypt(char *usernames[], char *passwords[], int count)
{
    for (int i = 0; i < count; i++) {

        // encrypt username IN PLACE
        for (int j = 0; usernames[i][j] != '\0'; j++) {
            usernames[i][j] = usernames[i][j] + i;
        }

        // encrypt password IN PLACE
        for (int j = 0; passwords[i][j] != '\0'; j++) {
            passwords[i][j] = passwords[i][j] + i;
        }
    }
}
int find(char *usernames[], char *passwords[], char *search_username, char *search_passcode, int count) {
    int found = 0;

    for (int i = 0; i < count; i++) {
        int match_user = 1, match_pass = 1;

        // Compare username character by character (consider encryption shift)
        for (int j = 0; search_username[j] != '\0'; j++) {
            if (search_username[j] + i != usernames[i][j]) {  // apply same shift as encryption
                match_user = 0;
                break;
            }
        }

        // Compare password character by character
        for (int j = 0; search_passcode[j] != '\0'; j++) {
            if (search_passcode[j] + i != passwords[i][j]) {  // apply same shift as encryption
                match_pass = 0;
                break;
            }
        }

        if (match_user && match_pass) {
            found = 1;
            break; // stop after first match
        }
    }

    return found;
}


int main()
{
    char u1[] = "Ali";
    char u2[] = "Sara";

    char p1[] = "0784";
    char p2[] = "1234";

    char *usernames[] = { u1, u2 };
    char *passwords[] = { p1, p2 };
    char search_username[]="Ali";
    char search_password[]="0784";
    encrypt(usernames, passwords, 2);

    for (int i = 0; i < 2; i++) {
        printf("%s : %s\n", usernames[i], passwords[i]);
    }
    if(find(usernames,passwords,search_username,search_password,2)){
        printf("The username was found");
    }
    else{
        printf("Wasnt found"); 
    }
    return 0;
}
