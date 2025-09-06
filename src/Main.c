#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "C:\Wichtig\System\Static\Library\String.h"
#include "C:\Wichtig\System\Static\Library\Pointer.h"

int main(void){

    printf("------\n");
    SharedPointer_A sp1 = SharedPointer_New(CStr_Cpy("Hello World"));
    printf("------\n");
    SharedPointer_A sp2 = SharedPointer_Share(&sp1);

    {
        SharedPointer_A sp3 = SharedPointer_Share(&sp2);

        {
            SharedPointer_A sp4 = SharedPointer_Share(&sp3);
            printf("------\n");
        }
        printf("------\n");
    }
    printf("------\n");


    UniquePointer_A up1 = UniquePointer_New(CStr_Cpy("Hello World"));

    printf("Out: %s\n",SharedPointer_Get(&sp1));
    
    return 0;
}