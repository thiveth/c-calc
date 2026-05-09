#include <stdio.h>
#include <stdlib.h>
 #include <string.h>

double add (double x, double y){

    return x + y;

}

double sub(double x, double y){
    return x - y;

}

double mult(double x, double y){
    return x * y;
}

double divide(double x, double y){
    return x / y;
}


int main() {
    
    int choice;
    double x, y;

    while (1){
        int isValid = 1;
        char buffer[3];
        printf("\nEnter choice (add [1], subtract [2], multiply[3], divide[4]): ");
        fgets(buffer, sizeof(buffer), stdin);
        
        if (strchr(buffer, '\n') == NULL){
            int c;
            while ((c = getchar()) != '\n' && c != EOF);  
        }

        if (buffer[0] == '\n'){
            printf("Invalid choice try again.\n");
            continue;
        }

        for (size_t i = 0; i < (sizeof(buffer) / sizeof(buffer[0])); i++){
            if (buffer[i] != '\n' && buffer[i] != '\0' && !(buffer[i] >= '0' && buffer[i] <= '9')){
                isValid = 0;

                printf("Invalid choice try again.\n");
                break;
            }
        }

        if (isValid == 0) continue;

        if (isValid == 1) choice = atoi(buffer);
    



        if (choice == 0){
            printf("Exiting..\n");
            break;
        }
        else if(choice == 1){
            printf("\nEnter first and second number with a space between both: ");
            scanf("%lf %lf", &x, &y);
            int c;
            while ((c = getchar()) != '\n' && c != EOF); 
            printf("%.2f\n", add(x, y));
        }  
        else if(choice == 2){
            printf("\nEnter first and second number with a space between both: ");
            scanf("%lf %lf", &x, &y);
            int c;
            while ((c = getchar()) != '\n' && c != EOF); 
            printf("%.2f\n", sub(x, y));
        }
        else if(choice == 3){
            printf("\nEnter first and second number with a space between both: ");
            scanf("%lf %lf", &x, &y);
            int c;
            while ((c = getchar()) != '\n' && c != EOF); 
            printf("%.2f\n", mult(x, y));
        }
        else if(choice == 4){
            printf("\nEnter first and second number with a space between both: ");
            scanf("%lf %lf", &x, &y);
            

            if (y == 0){
                printf("Undefined\n");
            }
            else {
                printf("%.2f\n", divide(x, y));
            }

            int c;
            while ((c = getchar()) != '\n' && c != EOF); 


        }
        else {
            printf("Invalid choice try again.\n");
        }


    } 



    return 0;
}