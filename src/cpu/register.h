#ifndef YUX86_CPU_CPU_H_
#define YUX86_CPU_CPU_H_

#include <stdbool.h>
#include <stdint.h>

#ifdef  __cplusplus
extern "C" {
#endif //  __cplusplus

typedef uint8_t Register8;
typedef uint16_t Register16;
typedef uint32_t Register32;

typedef struct _RegisterGroup {
    struct {
        union {
            struct {
                union
                {
                    struct {
                        Register8 al;
                        Register8 ah;
                    };
                    Register16 ax;
                };
                Register16 invalid1;
            };
            Register32 eax;
        };
        union {
            struct {
                union
                {
                    struct {
                        Register8 cl;
                        Register8 ch;
                    };
                    Register16 cx;
                };
                Register16 invalid2;
            };
            Register32 ecx;
        };
        union {
            struct {
                union
                {
                    struct {
                        Register8 dl;
                        Register8 dh;
                    };
                    Register16 dx;
                };
                Register16 invalid3;
            };
            Register32 edx;
        };
        union {
            struct {
                union
                {
                    struct {
                        Register8 bl;
                        Register8 bh;
                    };
                    Register16 bx;
                };
                Register16 invalid4;
            };
            Register32 ebx;
        };
        union {
            struct {
                Register16 sp;
                Register16 invalid5;
            };
            Register32 esp;
        };
        union {
            struct {
                Register16 bp;
                Register16 invalid5;
            };
            Register32 ebp;
        };
        union {
            struct {
                Register16 si;
                Register16 invalid6;
            };
            Register32 esi;
        };
        union {
            struct {
                Register16 di;
                Register16 invalid6;
            };
            Register32 edi;
        };
    } general;
} RegisterGroup;

#ifdef __cplusplus
}
#endif //  __cplusplus

#endif // YUX86_CPU_CPU_H_

