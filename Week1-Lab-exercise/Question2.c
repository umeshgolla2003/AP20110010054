#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){
    int state=0, i;
    char input[25];

    printf("Enter a String with A's and B's :");
    scanf("%s",input);

    for(i=0;i<=strlen(input)-1;++i){
        if(state==0){
            if(input[i]=='a'){
                state=1;
            }
            else if(input[i]=='b'){
                state=3;
            }
            else{
                printf("Invalid Symbol");
                exit(0);
            }
        }

        else if(state==1){
            if(input[i]=='a'){
                state=2;
            }
            else if(input[i]=='b'){
                state=3;
            }
            else{
                printf("Invalid Symbol");
                exit(0);
            }
        }

        else if(state==2){
            if(input[i]=='a'){
                state=2;
            }
            else if(input[i]=='b'){
                state=3;
            }
            else{
                printf("Invalid Symbol");
                exit(0);
            }
        }

        else if(state==3){
            if(input[i]=='a'){
                state=1;
            }
            else if(input[i]=='b'){
                state=4;
            }
            else{
                printf("Invalid Symbol");
                exit(0);
            }
        }

        else if(state==4){
            if(input[i]=='a'){
                state=1;
            }
            else if(input[i]=='b'){
                state=4;
            }
            else{
                printf("Invalid Symbol");
                exit(0);
            }
        }
    }

    if(state==2||state==4){
        printf("The Entered String is Accepted");
    }
    else{
        printf("The Entered String is Not Accepted");
    }
    return 0;
}
