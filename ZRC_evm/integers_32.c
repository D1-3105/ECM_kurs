#include "integers.h"



void neg32_reg(int _size, int32_t* a)
{
    __asm
    {
        mov ecx, _size;
        mov esi, a;
        CYCLE:
            mov eax, [esi]
            NEG eax
            add esi, 4
        loop CYCLE;
    }
}


void NOT32_reg(int _size, int32_t* a)
{
    __asm
    {
        mov ecx, _size;
        mov esi, a;
        CYCLE:
            mov eax, [esi]
            NOT eax
            add esi, 4
        loop CYCLE;
    }
}

void XOR32_reg(int _size, int32_t* a, int32_t* b)
{
    __asm
    {
        mov ecx, _size;
        mov edi, a;
        mov esi, b;
        CYCLE:
            mov eax, [esi];
            mov ebx, [edi];
            xor eax, ebx;
            add esi, 4
            add edi, 4
        loop CYCLE;
    }
}

void OR32_reg(int _size, int32_t* a, int32_t* b)
{
    __asm
    {
        mov ecx, _size;
        mov edi, a;
        mov esi, b;
        CYCLE:
            mov eax, [esi];
            mov ebx, [edi];
            or eax, ebx;
            add esi, 4
            add edi, 4
        loop CYCLE;
    }
}

void AND32_reg(int _size, int32_t* a, int32_t* b)
{
    __asm
    {
        mov ecx, _size;
        mov edi, a;
        mov esi, b;
        CYCLE:
            mov eax, [esi];
            mov ebx, [edi];
            and eax, ebx;
            add esi, 4
            add edi, 4
        loop CYCLE;
    }
}


void add32_reg(int _size, int32_t* a, int32_t* b)
{
    __asm
    {
        mov ecx, _size;
        mov edi, a;
        mov esi, b;
        CYCLE:
            mov eax, [esi];
            mov ebx, [edi];
            add eax, ebx;
            add esi, 4
            add edi, 4
        loop CYCLE;
    }
}


void sub32_reg(int _size, int32_t* a, int32_t* b)
{
    __asm
    {
        mov ecx, _size;
        mov edi, a;
        mov esi, b;
        CYCLE:
            mov eax, [esi];
            mov ebx, [edi];
            sub eax, ebx;
            add esi, 4
            add edi, 4
        loop CYCLE;
    }
}

void mul32_reg(int _size, int32_t* a, int32_t* b)
{
    __asm
    {
        mov ecx, _size;
        mov edi, a;
        mov esi, b;
        CYCLE:
            mov eax, [esi];
            mov ebx, [edi];
            imul eax, ebx;
            add esi, 4
            add edi, 4
        loop CYCLE;
    }

}

void div32_reg(int _size, int32_t* a, int32_t* b)
{
    __asm
    {
        mov ecx, _size;
        mov edi, a;
        mov esi, b;
        CYCLE:
            mov eax, [esi];
            mov ebx, [edi];
            cdq;
            idiv ebx;
            add esi, 4
            add edi, 4
        loop CYCLE;
    }
}




