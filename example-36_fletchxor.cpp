#include <stdio.h>
#include <libakrypt-base.h>
#include <libakrypt.h>
int main(){
    ak_const_pointer data = "abcde";
    ak_uint32 *res;
    res = (ak_uint32*)malloc(1);
    res[0]=0;
    int result = ak_ptr_fletcher32_xor(data,5,res);

    int i=0;

    for(i=0;i<1;i++){
        printf("%d \n %d",res[i],result);
    }

}
