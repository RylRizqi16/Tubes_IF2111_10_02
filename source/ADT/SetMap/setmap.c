#include "setmap.h"

void CreateKeranjang(Keranjang *K)
{
    K->Count = Nil;
}

boolean IsKeranjangEmpty(Keranjang K)
{
    return K.Count == Nil;
}

boolean IsKeranjangFull(Keranjang K)
{
    return K.Count == MaxEl;
}