#include <stdio.h>

int main()
{
    int state = 0, i=0;
    char input[25];
    printf("Enter the input string only with A's and B's:   ");
    scanf("%s",input);

    while(input[i])
    {
        if(state==0){
            if(input[i]=='a'){state=1;}
            else if(input[i]=='b'){state=3;}
            else{
                printf("Invalid Token\n");
                return;
            }
            i++;
        }

        else if(state==1){
            if(input[i]=='a'){state=2;}
            else if(input[i]=='b'){state=3;}
            else{
                printf("Invalid Token\n");
                return;
            }
            i++;
        }

        else if(state==2){
            if(input[i]=='a'){state=2;}
            else if(input[i]=='b'){state=3;}
            else{
                printf("Invalid Token\n");
                return;
            }
            i++;
        }

        else if(state==3){
            if(input[i]=='a'){state=1;}
            else if(input[i]=='b'){state=4;}
            else{
                printf("Invalid Token\n");
                return;
            }
            i++;
        }

        else if(state==4){
            if(input[i]=='a'){state=1;}
            else if(input[i]=='b'){state=4;}
            else{
                printf("Invalid Token\n");
                return;
            }
            i++;
        }
    }

    if(state == 2 || state == 4)
    {
        printf("The Entered String is Accepted\n");
    }
    else
    {
        printf("The Entered String Not Accepted\n");
    }

    return 0;
}
