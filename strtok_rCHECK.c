#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>

int main(void) {
    char str[] = "SOA-ITER-IBCS-SUM-IDS-IBCS";
    char ptr[] = "CSE-CSIT-MECH-ECE-EE-EEE";

    char *sptr, *token, *ptoken;

    token=strtok(str,"-");
    ptoken=strtok_r(ptr,"-",&sptr);
    // printf("%s\n",token);
    // printf("%s\n",ptoken);
    // printf("%s\n",sptr);


    while (token != NULL) {
        printf("Token=%s%s\n",token,ptoken);
        token=strtok(NULL,"-");
        ptoken=strtok_r(NULL,"-",&sptr);
    }

    return 0;
}