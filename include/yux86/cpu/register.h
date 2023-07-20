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

typedef struct _EflagsRegister {
    union {
        struct {
            Register32 reserved5_0:10;
            Register32 id:1;            // ID Flag
            Register32 vip:1;           // Virtual Interrupt Pending
            Register32 vif:1;           // Virtual Interrupt Flag
            Register32 ac:1;            // Alignment Check
            Register32 vm:1;            // Virtual-8086 Mode
            Register32 rf:1;            // Resume Flag
            Register32 reserved4_0:1;
            Register32 nt:1;            // nested_Task
            Register32 iopl:2;          // I/O Privilege Level
            Register32 of:1;            // Overflow Flag
            Register32 df:1;            // Direction Flag
            Register32 if:1;            // Interrupt Enable Flag
            Register32 tf:1;            // Trap Flag
            Register32 sf:1;            // Sign Flag
            Register32 zf:1;            // Zero Flag
            Register32 reserved3_0:1;
            Register32 af:1;            // Auxiliary Carry Flag
            Register32 reserved2_0:1;
            Register32 pf:1;            // Parity Flag
            Register32 reserved1_1:1;
            Register32 cf:1;            // Carry Flag
        };
        Register32 all;
    };
} EflagsRegister;

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
    Register32 eip;
    EflagsRegister eflags;
    struct {
        Register16 cs;
        Register16 ds;
        Register16 ss;
        Register16 es;
        Register16 fs;
        Register16 gs;
    } segment;
    struct {
        struct {
            Register32 base_addr;
            Register16 limit;
        } gdtr;
        struct {
            Register32 base_addr;
            Register16 limit;
        } idtr;
        Register16 ldtr;
        Register16 tr;
    } system_table;
    struct {
        Register32 cr0;
        Register32 cr1;
        Register32 cr2;
        Register32 cr3;
        Register32 cr4;
    } control;
    struct {
        Register32 dr0;
        Register32 dr1;
        Register32 dr2;
        Register32 dr3;
        Register32 dr4;
        Register32 dr5;
        Register32 dr6;
        Register32 dr7;
    } debug;
    struct {
        Register32 tr6;
        Register32 tr7;
    } test;
} RegisterGroup;

#ifdef __cplusplus
}
#endif //  __cplusplus

#endif // YUX86_CPU_CPU_H_

