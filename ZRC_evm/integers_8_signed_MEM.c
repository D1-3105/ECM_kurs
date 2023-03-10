#include "integers.h"


void add8_mem_signed_left(int _size, int8_t* a, int8_t* b)
{
    /// <summary>
    /// add func for int16_t
    /// </summary>
    /// <param name="a">first member</param>
    /// <param name="b">second member</param>

    __asm
    {
        mov ecx, _size;
        mov edi, a;
        mov esi, b;
    CYCLE:
        mov bl, [edi];
        add[esi], bl;
        add esi, 1
            add edi, 1
            loop CYCLE;
    }
}

void add8_mem_signed_right(int _size, int8_t* a, int8_t* b)
{
    /// <summary>
    /// add func for int16_t
    /// </summary>
    /// <param name="a">first member</param>
    /// <param name="b">second member</param>

    __asm
    {
        mov ecx, _size;
        mov edi, a;
        mov esi, b;
    CYCLE:
        mov al, [esi]
            add al, [edi];
        add esi, 1
            add edi, 1
            loop CYCLE;
    }
}


void sub8_mem_signed_left(int _size, int8_t* a, int8_t* b)
{
    /// <summary>
    /// sub func for int8_t
    /// </summary>
    /// <param name="a">first member</param>
    /// <param name="b">second member</param>

    __asm
    {
        mov ecx, _size;
        mov edi, a;
        mov esi, b;
    CYCLE:
        mov bl, [edi];
        sub[esi], bl;
        add esi, 1
            add edi, 1
            loop CYCLE;
    }
}

void sub8_mem_signed_right(int _size, int8_t* a, int8_t* b)
{
    /// <summary>
    /// sub func for int8_t
    /// </summary>
    /// <param name="a">first member</param>
    /// <param name="b">second member</param>

    __asm
    {
        mov ecx, _size;
        mov edi, a;
        mov esi, b;
    CYCLE:
        mov al, [esi];
        sub al, [edi];
        add esi, 1
            add edi, 1
            loop CYCLE;
    }
}




void mul8_mem_signed(int _size, int8_t* a, int8_t* b)
{
    /// <summary>
    /// mul func for int8_t
    /// </summary>
    /// <param name="a">first member</param>
    /// <param name="b">second member</param>

    __asm
    {
        mov ecx, _size;
        mov edi, a;
        mov esi, b;
    CYCLE:
        mov al, [esi];
        imul al, [edi];
        add esi, 1
            add edi, 1
            loop CYCLE;
    }
}




void div8_mem_signed(int _size, int8_t* a, int8_t* b)
{
    /// <summary>
    /// div func for int8_t
    /// </summary>
    /// <param name="a">first member</param>
    /// <param name="b">second member</param>

    __asm
    {
        mov ecx, _size;
        mov edi, a;
        mov esi, b;
    CYCLE:
        mov al, [esi];
        cbw;
        idiv[edi];
        add esi, 1
            add edi, 1
            loop CYCLE;
    }
}



void neg8_mem_signed(int _size, int8_t* a)
{
    __asm
    {
        mov ecx, _size;
        mov esi, a;
    CYCLE:
        NEG[esi]
            add esi, 1
            loop CYCLE;
    }


}

void NOT8_mem_signed(int _size, int8_t* a)
{
    __asm
    {
        mov ecx, _size;
        mov esi, a;
    CYCLE:
        NOT[esi]
            add esi, 1
            loop CYCLE;
    }
}

void XOR8_mem_signed_left(int _size, int8_t* a, int8_t* b)
{
    __asm
    {
        mov ecx, _size;
        mov edi, a;
        mov esi, b;
    CYCLE:
        mov bl, [edi];
        xor [esi], bl;
        add esi, 1
            add edi, 1
            loop CYCLE;
    }
}

void XOR8_mem_signed_right(int _size, int8_t* a, int8_t* b)
{
    __asm
    {
        mov ecx, _size;
        mov edi, a;
        mov esi, b;
    CYCLE:
        mov al, [esi];
        xor al, [edi];
        add esi, 1
            add edi, 1
            loop CYCLE;
    }
}

void OR8_mem_signed_left(int _size, int8_t* a, int8_t* b)
{
    __asm
    {
        mov ecx, _size;
        mov edi, a;
        mov esi, b;
    CYCLE:
        mov bl, [edi];
        or [esi], bl;
        add esi, 1
            add edi, 1
            loop CYCLE;
    }
}

void OR8_mem_signed_right(int _size, int8_t* a, int8_t* b)
{
    __asm
    {
        mov ecx, _size;
        mov edi, a;
        mov esi, b;
    CYCLE:
        mov al, [esi];
        or al, [edi];
        add esi, 1
            add edi, 1
            loop CYCLE;
    }
}

void AND8_mem_signed_left(int _size, int8_t* a, int8_t* b)
{
    __asm
    {
        mov ecx, _size;
        mov edi, a;
        mov esi, b;
    CYCLE:
        mov bl, [edi];
        and [esi], bl;
        add esi, 1
            add edi, 1
            loop CYCLE;
    }
}


void AND8_mem_signed_right(int _size, int8_t* a, int8_t* b)
{
    __asm
    {
        mov ecx, _size;
        mov edi, a;
        mov esi, b;
    CYCLE:
        mov al, [esi];
        and al, [edi];
        add esi, 1
            add edi, 1
            loop CYCLE;
    }
}

