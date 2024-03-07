#include "major1.h"
/**
 * EndianSwap
*/
uint32_t EndianSwap(const uint32_t* value){
    return ((*value>>24)&0xff) | // B3 -> B0
                    ((*value>>8)&0xff00) | // B2 -> B1
                    ((*value<<8)&0xff0000) | // B1 -> B2
                    ((*value<<24)&0xff000000); // B0 -> B3
}