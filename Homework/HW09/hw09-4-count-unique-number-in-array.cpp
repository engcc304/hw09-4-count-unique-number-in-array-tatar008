/*
    ผู้ใช้กรอกจำนวนอาเรย์ที่ต้องการกรอก จากนั้นผู้ใช้ทำการกรอกข้อมูลลงไปในอาเรย์จนครบ และให้คุณแสดงจำนวนชุดตัวเลขที่ซ้ำกันจากที่ผู้ใช้กรอก
    
    Test case:
        Input N :
            4
        Element[0] :
            3
        Element[1] :
            3
        Element[2] :
            2
        Element[3] :
            5
    Output:
        2 -> 1 value.
        3 -> 2 values.
        5 -> 1 value.


    Test case:
        Input N :
            9
        Element[0] :
            6
        Element[1] :
            6
        Element[2] :
            5
        Element[3] :
            9
        Element[4] :
            1
        Element[5] :
            9
        Element[6] :
            7
        Element[7] :
            6
        Element[8] :
            2
    Output:
        1 -> 1 value.
        2 -> 1 value.
        5 -> 1 value.
        6 -> 3 values.
        7 -> 1 value.
        9 -> 2 values.
*/
#include<stdio.h>
int main() {
    int arr[100] ;
    int num ;
    int i ;
    printf( "input N :\n" ) ;
    scanf( "%d", &num ) ;

    for(i = 0 ; i < num ; i++ ) {
        printf( "Element[%d] : \n" ) ;
        scanf( "    %d", &arr[i] ) ;
    }

    int count[1000] = {0}; 
    
    for (int i = 0 ; i < num ; i++) {
        count[arr[i]]++;
    }

    for (int i = 0 ; i < 1000 ; i++) {
        if (count[i] > 0) {
            printf("%d -> %d value(s).\n", i, count[i]);
        }
    }

    return 0 ;

}