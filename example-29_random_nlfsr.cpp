#include <iostream>
#include <string>
#include <libakrypt.h>
#include <libakrypt-base.h>

/*Использование NLSFR генератора случайных чисел*/

int main(){
    struct random rnd;
    ak_uint8 buf[12];
    ak_random_create_nlfsr(&rnd);
    ak_random_ptr( &rnd, buf, sizeof( buf ));
    for(int i=0;i<sizeof(buf);i++){
        std::cout<<int(buf[i])<<" ";
    }
    
} 
