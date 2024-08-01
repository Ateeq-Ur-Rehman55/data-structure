#include <stdio.h>
#include <stdlib.h>

int main(void){
    //allocate memory for 3 integer
    int *list = malloc(3 * sizeof(int));
    // if null return 
    if (list == NULL){
        return 1;
    }
    
    // assign the value on indexes.
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;
    
    // allocate memory for 4 integer 

    int *tmp = malloc(4 * sizeof(int));
    // if null return 
    if (tmp == NULL){
        free(list);
        return 1;
    }
    // copiying the value of list into tmp
    for (int j = 0 ; j < 3 ; j++ ){
        tmp[j] = list[j];
    }
    // adding the value of 4th integer 
    tmp[3] = 4;
    free(list);
    // change point from list to tmp
    list = tmp; 

    // print the value of 4 integers 
    for (int i = 0 ; i < 4; i++){
        printf("%i\n ", list[i]);

    }

    return 0;
}