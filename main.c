#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    //ghi File.
    FILE *fp = fopen("hello_c.txt", "w+");
    char choice;
    char userInput[255];
    printf("Enter something to save file:\n"); //Yêu cầu nhập dữ liệu
    while (1 == 1) {
        fgets(userInput, 255, stdin);
        //"exit"
        if (strcmp(userInput, "exit\n")){
        break;
        }
        fprintf(fp, userInput);
    }
    fclose(fp);

    //Đọc file.
    printf("----------Read file data-----------\n");
    fp = fopen("hello_c.txt", "r");
    int bufferSize = 255;
    char buffer[bufferSize];
    while(fgets(buffer, bufferSize, fp) !=NULL){
        printf("%s", buffer);
    }
    return 0;
}


