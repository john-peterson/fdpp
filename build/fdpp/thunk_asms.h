#define _THUNK_P_0(n, r, s, f, z) \
r f(void) \
{ \
    const uint32_t _flags = z; \
    uint32_t _ret; \
    _ret = __CALL(n, NULL, 0, _flags); \
    return s(r, _ret); \
}
#define _THUNK0_v(n, f, z) \
void f(void) \
{ \
    const uint32_t _flags = z; \
    __CALL(n, NULL, 0, _flags); \
}
#define _THUNK_P_0_v(n, f, z) \
void f(void) \
{ \
    const uint32_t _flags = z; \
    __CALL(n, NULL, 0, _flags); \
}
#define _THUNK_P_1(n, r, s, f, t1, q1, at1, aat1, c1, l1, z) \
r f(t1 a1 q1) \
{ \
    const uint32_t _flags = z; \
    uint32_t _ret; \
    _CNV(c1, t1, at1, l1, 1); \
    struct { \
        aat1 a1; \
    } PACKED _args = { _a1 }; \
    _ret = __CALL(n, (UBYTE *)&_args, sizeof(_args), _flags); \
    _UCNV(c1, l1, 1); \
    return s(r, _ret); \
}
#define _THUNK1_v(n, f, t1, q1, at1, aat1, c1, l1, z) \
void f(t1 a1 q1) \
{ \
    const uint32_t _flags = z; \
    _CNV(c1, t1, at1, l1, 1); \
    struct { \
        aat1 a1; \
    } PACKED _args = { _a1 }; \
    __CALL(n, (UBYTE *)&_args, sizeof(_args), _flags); \
    _UCNV(c1, l1, 1); \
    __CSTK(sizeof(_args)); \
}
#define _THUNK_P_1_v(n, f, t1, q1, at1, aat1, c1, l1, z) \
void f(t1 a1 q1) \
{ \
    const uint32_t _flags = z; \
    _CNV(c1, t1, at1, l1, 1); \
    struct { \
        aat1 a1; \
    } PACKED _args = { _a1 }; \
    __CALL(n, (UBYTE *)&_args, sizeof(_args), _flags); \
    _UCNV(c1, l1, 1); \
}
#define _THUNK_P_2(n, r, s, f, t1, q1, at1, aat1, c1, l1, t2, q2, at2, aat2, c2, l2, z) \
r f(t1 a1 q1, t2 a2 q2) \
{ \
    const uint32_t _flags = z; \
    uint32_t _ret; \
    _CNV(c1, t1, at1, l1, 1); \
    _CNV(c2, t2, at2, l2, 2); \
    struct { \
        aat2 a2; \
        aat1 a1; \
    } PACKED _args = { _a2, _a1 }; \
    _ret = __CALL(n, (UBYTE *)&_args, sizeof(_args), _flags); \
    _UCNV(c1, l1, 1); \
    _UCNV(c2, l2, 2); \
    return s(r, _ret); \
}
#define _THUNK_P_2_v(n, f, t1, q1, at1, aat1, c1, l1, t2, q2, at2, aat2, c2, l2, z) \
void f(t1 a1 q1, t2 a2 q2) \
{ \
    const uint32_t _flags = z; \
    _CNV(c1, t1, at1, l1, 1); \
    _CNV(c2, t2, at2, l2, 2); \
    struct { \
        aat2 a2; \
        aat1 a1; \
    } PACKED _args = { _a2, _a1 }; \
    __CALL(n, (UBYTE *)&_args, sizeof(_args), _flags); \
    _UCNV(c1, l1, 1); \
    _UCNV(c2, l2, 2); \
}
#define _THUNK_P_3(n, r, s, f, t1, q1, at1, aat1, c1, l1, t2, q2, at2, aat2, c2, l2, t3, q3, at3, aat3, c3, l3, z) \
r f(t1 a1 q1, t2 a2 q2, t3 a3 q3) \
{ \
    const uint32_t _flags = z; \
    uint32_t _ret; \
    _CNV(c1, t1, at1, l1, 1); \
    _CNV(c2, t2, at2, l2, 2); \
    _CNV(c3, t3, at3, l3, 3); \
    struct { \
        aat3 a3; \
        aat2 a2; \
        aat1 a1; \
    } PACKED _args = { _a3, _a2, _a1 }; \
    _ret = __CALL(n, (UBYTE *)&_args, sizeof(_args), _flags); \
    _UCNV(c1, l1, 1); \
    _UCNV(c2, l2, 2); \
    _UCNV(c3, l3, 3); \
    return s(r, _ret); \
}
#define _THUNK3_v(n, f, t1, q1, at1, aat1, c1, l1, t2, q2, at2, aat2, c2, l2, t3, q3, at3, aat3, c3, l3, z) \
void f(t1 a1 q1, t2 a2 q2, t3 a3 q3) \
{ \
    const uint32_t _flags = z; \
    _CNV(c1, t1, at1, l1, 1); \
    _CNV(c2, t2, at2, l2, 2); \
    _CNV(c3, t3, at3, l3, 3); \
    struct { \
        aat1 a1; \
        aat2 a2; \
        aat3 a3; \
    } PACKED _args = { _a1, _a2, _a3 }; \
    __CALL(n, (UBYTE *)&_args, sizeof(_args), _flags); \
    _UCNV(c1, l1, 1); \
    _UCNV(c2, l2, 2); \
    _UCNV(c3, l3, 3); \
    __CSTK(sizeof(_args)); \
}
#define _THUNK4(n, r, s, f, t1, q1, at1, aat1, c1, l1, t2, q2, at2, aat2, c2, l2, t3, q3, at3, aat3, c3, l3, t4, q4, at4, aat4, c4, l4, z) \
r f(t1 a1 q1, t2 a2 q2, t3 a3 q3, t4 a4 q4) \
{ \
    const uint32_t _flags = z; \
    uint32_t _ret; \
    _CNV(c1, t1, at1, l1, 1); \
    _CNV(c2, t2, at2, l2, 2); \
    _CNV(c3, t3, at3, l3, 3); \
    _CNV(c4, t4, at4, l4, 4); \
    struct { \
        aat1 a1; \
        aat2 a2; \
        aat3 a3; \
        aat4 a4; \
    } PACKED _args = { _a1, _a2, _a3, _a4 }; \
    _ret = __CALL(n, (UBYTE *)&_args, sizeof(_args), _flags); \
    _UCNV(c1, l1, 1); \
    _UCNV(c2, l2, 2); \
    _UCNV(c3, l3, 3); \
    _UCNV(c4, l4, 4); \
    __CSTK(sizeof(_args)); \
    return s(r, _ret); \
}
#define _THUNK_P_4_v(n, f, t1, q1, at1, aat1, c1, l1, t2, q2, at2, aat2, c2, l2, t3, q3, at3, aat3, c3, l3, t4, q4, at4, aat4, c4, l4, z) \
void f(t1 a1 q1, t2 a2 q2, t3 a3 q3, t4 a4 q4) \
{ \
    const uint32_t _flags = z; \
    _CNV(c1, t1, at1, l1, 1); \
    _CNV(c2, t2, at2, l2, 2); \
    _CNV(c3, t3, at3, l3, 3); \
    _CNV(c4, t4, at4, l4, 4); \
    struct { \
        aat4 a4; \
        aat3 a3; \
        aat2 a2; \
        aat1 a1; \
    } PACKED _args = { _a4, _a3, _a2, _a1 }; \
    __CALL(n, (UBYTE *)&_args, sizeof(_args), _flags); \
    _UCNV(c1, l1, 1); \
    _UCNV(c2, l2, 2); \
    _UCNV(c3, l3, 3); \
    _UCNV(c4, l4, 4); \
}
#define _THUNK_P_6(n, r, s, f, t1, q1, at1, aat1, c1, l1, t2, q2, at2, aat2, c2, l2, t3, q3, at3, aat3, c3, l3, t4, q4, at4, aat4, c4, l4, t5, q5, at5, aat5, c5, l5, t6, q6, at6, aat6, c6, l6, z) \
r f(t1 a1 q1, t2 a2 q2, t3 a3 q3, t4 a4 q4, t5 a5 q5, t6 a6 q6) \
{ \
    const uint32_t _flags = z; \
    uint32_t _ret; \
    _CNV(c1, t1, at1, l1, 1); \
    _CNV(c2, t2, at2, l2, 2); \
    _CNV(c3, t3, at3, l3, 3); \
    _CNV(c4, t4, at4, l4, 4); \
    _CNV(c5, t5, at5, l5, 5); \
    _CNV(c6, t6, at6, l6, 6); \
    struct { \
        aat6 a6; \
        aat5 a5; \
        aat4 a4; \
        aat3 a3; \
        aat2 a2; \
        aat1 a1; \
    } PACKED _args = { _a6, _a5, _a4, _a3, _a2, _a1 }; \
    _ret = __CALL(n, (UBYTE *)&_args, sizeof(_args), _flags); \
    _UCNV(c1, l1, 1); \
    _UCNV(c2, l2, 2); \
    _UCNV(c3, l3, 3); \
    _UCNV(c4, l4, 4); \
    _UCNV(c5, l5, 5); \
    _UCNV(c6, l6, 6); \
    return s(r, _ret); \
}
_THUNK0_v(0, DosIdle_int, _TFLG_NONE)
_THUNK0_v(1, DosIdle_hlt, _TFLG_NONE)
_THUNK_P_3(2, __ARG(DWORD), __RET, network_redirector_mx, __ARG(UWORD), , __ARG_A(UWORD), __ARG_A(UWORD), __CNV_SIMPLE, _L_NONE, __ARG_PTR_FAR(VOID), , __ARG_PTR_FAR_A(VOID), __ARG_PTR_FAR_A(VOID), __CNV_PTR_FAR, _L_NONE, __ARG(UWORD), , __ARG_A(UWORD), __ARG_A(UWORD), __CNV_SIMPLE, _L_NONE, _TFLG_NONE)
_THUNK1_v(3, exec_user, __ARG_PTR_FAR(const exec_regs), , __ARG_PTR_FAR_A(const exec_regs), __ARG_PTR_FAR_A(const exec_regs), __CNV_PTR_FAR, _L_NONE, _TFLG_NORET)
_THUNK1_v(4, ret_user, __ARG_PTR_FAR(const iregs), , __ARG_PTR_FAR_A(const iregs), __ARG_PTR_FAR_A(const iregs), __CNV_PTR_FAR, _L_NONE, _TFLG_NORET)
_THUNK_P_1(5, __ARG(WORD), __RET, fl_reset, __ARG(WORD), , __ARG_A(WORD), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, _TFLG_NONE)
_THUNK_P_1(6, __ARG(WORD), __RET, fl_diskchanged, __ARG(WORD), , __ARG_A(WORD), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, _TFLG_NONE)
_THUNK_P_6(7, __ARG(WORD), __RET, fl_format, __ARG(WORD), , __ARG_A(WORD), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, __ARG(WORD), , __ARG_A(WORD), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, __ARG(WORD), , __ARG_A(WORD), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, __ARG(WORD), , __ARG_A(WORD), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, __ARG(WORD), , __ARG_A(WORD), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, __ARG_PTR_FAR(UBYTE), , __ARG_PTR_FAR_A(UBYTE), __ARG_PTR_FAR_A(UBYTE), __CNV_PTR_FAR, _L_NONE, _TFLG_NONE)
_THUNK_P_6(8, __ARG(WORD), __RET, fl_read, __ARG(WORD), , __ARG_A(WORD), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, __ARG(WORD), , __ARG_A(WORD), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, __ARG(WORD), , __ARG_A(WORD), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, __ARG(WORD), , __ARG_A(WORD), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, __ARG(WORD), , __ARG_A(WORD), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, __ARG_PTR_FAR(UBYTE), , __ARG_PTR_FAR_A(UBYTE), __ARG_PTR_FAR_A(UBYTE), __CNV_PTR_FAR, _L_NONE, _TFLG_NONE)
_THUNK_P_6(9, __ARG(WORD), __RET, fl_write, __ARG(WORD), , __ARG_A(WORD), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, __ARG(WORD), , __ARG_A(WORD), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, __ARG(WORD), , __ARG_A(WORD), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, __ARG(WORD), , __ARG_A(WORD), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, __ARG(WORD), , __ARG_A(WORD), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, __ARG_PTR_FAR(UBYTE), , __ARG_PTR_FAR_A(UBYTE), __ARG_PTR_FAR_A(UBYTE), __CNV_PTR_FAR, _L_NONE, _TFLG_NONE)
_THUNK_P_6(10, __ARG(WORD), __RET, fl_verify, __ARG(WORD), , __ARG_A(WORD), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, __ARG(WORD), , __ARG_A(WORD), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, __ARG(WORD), , __ARG_A(WORD), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, __ARG(WORD), , __ARG_A(WORD), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, __ARG(WORD), , __ARG_A(WORD), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, __ARG_PTR_FAR(UBYTE), , __ARG_PTR_FAR_A(UBYTE), __ARG_PTR_FAR_A(UBYTE), __CNV_PTR_FAR, _L_NONE, _TFLG_NONE)
_THUNK_P_2(11, __ARG(WORD), __RET, fl_setdisktype, __ARG(WORD), , __ARG_A(WORD), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, __ARG(WORD), , __ARG_A(WORD), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, _TFLG_NONE)
_THUNK_P_3(12, __ARG(WORD), __RET, fl_setmediatype, __ARG(WORD), , __ARG_A(WORD), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, __ARG(WORD), , __ARG_A(WORD), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, __ARG(WORD), , __ARG_A(WORD), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, _TFLG_NONE)
_THUNK_P_0_v(13, fl_readkey, _TFLG_NONE)
_THUNK_P_3(14, __ARG(WORD), __RET, fl_lba_ReadWrite, __ARG(BYTE), , __ARG_A(BYTE), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, __ARG(WORD), , __ARG_A(WORD), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, __ARG_PTR_FAR(struct _bios_LBA_address_packet), , __ARG_PTR_FAR_A(struct _bios_LBA_address_packet), __ARG_PTR_FAR_A(struct _bios_LBA_address_packet), __CNV_PTR_FAR, _L_NONE, _TFLG_NONE)
_THUNK_P_1(15, __ARG(UWORD), __RET, floppy_change, __ARG(UWORD), , __ARG_A(UWORD), __ARG_A(UWORD), __CNV_SIMPLE, _L_NONE, _TFLG_NONE)
_THUNK4(16, __ARG(WORD), __RET, share_criterr, __ARG(WORD), , __ARG_A(WORD), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, __ARG(WORD), , __ARG_A(WORD), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, __ARG_PTR_FAR(struct dhdr), , __ARG_PTR_FAR_A(struct dhdr), __ARG_PTR_FAR_A(struct dhdr), __CNV_PTR_FAR, _L_NONE, __ARG(UWORD), , __ARG_A(UWORD), __ARG_A(UWORD), __CNV_SIMPLE, _L_NONE, _TFLG_NONE)
_THUNK_P_6(17, __ARG(DWORD), __RET, call_nls, __ARG(UWORD), , __ARG_A(UWORD), __ARG_A(UWORD), __CNV_SIMPLE, _L_NONE, __ARG_PTR_FAR(VOID), , __ARG_PTR_FAR_A(VOID), __ARG_PTR_FAR_A(VOID), __CNV_PTR_FAR, _L_NONE, __ARG(UWORD), , __ARG_A(UWORD), __ARG_A(UWORD), __CNV_SIMPLE, _L_NONE, __ARG(UWORD), , __ARG_A(UWORD), __ARG_A(UWORD), __CNV_SIMPLE, _L_NONE, __ARG(UWORD), , __ARG_A(UWORD), __ARG_A(UWORD), __CNV_SIMPLE, _L_NONE, __ARG(UWORD), , __ARG_A(UWORD), __ARG_A(UWORD), __CNV_SIMPLE, _L_NONE, _TFLG_NONE)
_THUNK_P_0(18, __ARG(UDWORD), __RET, ReadPCClock, _TFLG_NONE)
_THUNK_P_4_v(19, WriteATClock, __ARG_PTR_FAR(BYTE), , __ARG_PTR_FAR_A(BYTE), __ARG_PTR_FAR_A(BYTE), __CNV_PTR_FAR, _L_NONE, __ARG(BYTE), , __ARG_A(BYTE), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, __ARG(BYTE), , __ARG_A(BYTE), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, __ARG(BYTE), , __ARG_A(BYTE), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, _TFLG_NONE)
_THUNK_P_1_v(20, WritePCClock, __ARG(UDWORD), , __ARG_A(UDWORD), __ARG_A(UDWORD), __CNV_SIMPLE, _L_NONE, _TFLG_NONE)
_THUNK4(21, __ARG(WORD), __RET, CriticalError, __ARG(WORD), , __ARG_A(WORD), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, __ARG(WORD), , __ARG_A(WORD), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, __ARG(WORD), , __ARG_A(WORD), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, __ARG_PTR_FAR(struct dhdr), , __ARG_PTR_FAR_A(struct dhdr), __ARG_PTR_FAR_A(struct dhdr), __CNV_PTR_FAR, _L_NONE, _TFLG_NONE)
_THUNK0_v(22, CharMapSrvc, _TFLG_FAR)
_THUNK_P_2(23, __ARG(UWORD), __RET, init_call_intr, __ARG(WORD), , __ARG_A(WORD), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, __ARG_PTR(iregs), , __ARG_PTR_A(iregs), __ARG_PTR_A(iregs), __CNV_PTR, _L_SZ(2), _TFLG_INIT)
_THUNK_P_2(24, __ARG(UWORD), __RET, call_intr, __ARG(WORD), , __ARG_A(WORD), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, __ARG_PTR_FAR(iregs), , __ARG_PTR_FAR_A(iregs), __ARG_PTR_FAR_A(iregs), __CNV_PTR_FAR, _L_NONE, _TFLG_NONE)
_THUNK_P_2_v(25, call_intr_func, __ARG_PTR_FAR(VOID), , __ARG_PTR_FAR_A(VOID), __ARG_PTR_FAR_A(VOID), __CNV_PTR_FAR, _L_NONE, __ARG_PTR_FAR(iregs), , __ARG_PTR_FAR_A(iregs), __ARG_PTR_FAR_A(iregs), __CNV_PTR_FAR, _L_NONE, _TFLG_NONE)
_THUNK_P_3(26, __ARG(DWORD), __RET, init_DosRead, __ARG(WORD), , __ARG_A(WORD), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, __ARG_PTR(VOID), , __ARG_PTR_A(VOID), __ARG_PTR_A(VOID), __CNV_PTR_VOID, _L_REF(3, 1), __ARG(UWORD), , __ARG_A(UWORD), __ARG_A(UWORD), __CNV_SIMPLE, _L_NONE, _TFLG_INIT)
_THUNK_P_2(27, __ARG(WORD), __RET, init_DosOpen, __ARG_PTR(const char), , __ARG_PTR_A(const char), __ARG_PTR_A(const char), __CNV_PTR_CCHAR, _L_NONE, __ARG(WORD), , __ARG_A(WORD), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, _TFLG_INIT)
_THUNK_P_1(28, __ARG(WORD), __RET, init_exists, __ARG_PTR(const char), , __ARG_PTR_A(const char), __ARG_PTR_A(const char), __CNV_PTR_CCHAR, _L_NONE, _TFLG_INIT)
_THUNK_P_1(29, __ARG(WORD), __RET, _close, __ARG(WORD), , __ARG_A(WORD), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, _TFLG_INIT)
_THUNK_P_2(30, __ARG(WORD), __RET, _dup2, __ARG(WORD), , __ARG_A(WORD), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, __ARG(WORD), , __ARG_A(WORD), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, _TFLG_INIT)
_THUNK_P_2(31, __ARG(UDWORD), __RET, _lseek, __ARG(WORD), , __ARG_A(WORD), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, __ARG(DWORD), , __ARG_A(DWORD), __ARG_A(DWORD), __CNV_SIMPLE, _L_NONE, _TFLG_INIT)
_THUNK_P_1(32, __ARG(UWORD), __RET, allocmem, __ARG(UWORD), , __ARG_A(UWORD), __ARG_A(UWORD), __CNV_SIMPLE, _L_NONE, _TFLG_INIT)
_THUNK_P_0_v(33, keycheck, _TFLG_INIT)
_THUNK_P_1_v(34, set_DTA, __ARG_PTR_FAR(VOID), , __ARG_PTR_FAR_A(VOID), __ARG_PTR_FAR_A(VOID), __CNV_PTR_FAR, _L_NONE, _TFLG_INIT)
_THUNK_P_2(35, __ARG(WORD), __RET, execrh, __ARG_PTR_FAR(request), , __ARG_PTR_FAR_A(request), __ARG_PTR_FAR_A(request), __CNV_PTR_FAR, _L_NONE, __ARG_PTR_FAR(struct dhdr), , __ARG_PTR_FAR_A(struct dhdr), __ARG_PTR_FAR_A(struct dhdr), __CNV_PTR_FAR, _L_NONE, _TFLG_NONE)
_THUNK_P_0_v(36, _EnableA20, _TFLG_FAR)
_THUNK_P_0_v(37, _DisableA20, _TFLG_FAR)
_THUNK_P_0(38, __ARG_PTR_FAR(void), __RET_PTR_FAR, DetectXMSDriver, _TFLG_FAR)
_THUNK_P_3(39, __ARG(WORD), __RET, call_XMScall, __ARG_PTR_FAR(VOID), , __ARG_PTR_FAR_A(VOID), __ARG_PTR_FAR_A(VOID), __CNV_PTR_FAR, _L_NONE, __ARG(UWORD), , __ARG_A(UWORD), __ARG_A(UWORD), __CNV_SIMPLE, _L_NONE, __ARG(UWORD), , __ARG_A(UWORD), __ARG_A(UWORD), __CNV_SIMPLE, _L_NONE, _TFLG_FAR)
_THUNK_P_1_v(40, init_PSPSet, __ARG(UWORD), , __ARG_A(UWORD), __ARG_A(UWORD), __CNV_SIMPLE, _L_NONE, _TFLG_INIT)
_THUNK_P_3(41, __ARG(WORD), __RET, init_DosExec, __ARG(WORD), , __ARG_A(WORD), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, __ARG_PTR(exec_blk), , __ARG_PTR_A(exec_blk), __ARG_PTR_A(exec_blk), __CNV_PTR, _L_SZ(2), __ARG_PTR(const char), , __ARG_PTR_A(const char), __ARG_PTR_A(const char), __CNV_PTR_CCHAR, _L_NONE, _TFLG_INIT)
_THUNK_P_1(42, __ARG(WORD), __RET, init_setdrive, __ARG(WORD), , __ARG_A(WORD), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, _TFLG_INIT)
_THUNK_P_1(43, __ARG(WORD), __RET, init_switchar, __ARG(WORD), , __ARG_A(WORD), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, _TFLG_INIT)
_THUNK_P_3(44, __ARG(WORD), __RET, UMB_get_largest, __ARG_PTR_FAR(VOID), , __ARG_PTR_FAR_A(VOID), __ARG_PTR_FAR_A(VOID), __CNV_PTR_FAR, _L_NONE, __ARG_PTR(UDWORD), , __ARG_PTR_A(UDWORD), __ARG_PTR_A(UDWORD), __CNV_PTR, _L_SZ(2), __ARG_PTR(UWORD), , __ARG_PTR_A(UWORD), __ARG_PTR_A(UWORD), __CNV_PTR, _L_SZ(3), _TFLG_INIT)
_THUNK3_v(45, init_stacks, __ARG_PTR_FAR(VOID), , __ARG_PTR_FAR_A(VOID), __ARG_PTR_FAR_A(VOID), __CNV_PTR_FAR, _L_NONE, __ARG(WORD), , __ARG_A(WORD), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, __ARG(WORD), , __ARG_A(WORD), __ARG_A(WORD), __CNV_SIMPLE, _L_NONE, _TFLG_INIT)
_THUNK0_v(46, spawn_int23, _TFLG_NORET)
_THUNK1_v(47, call_p_0, __ARG_PTR_FAR(const struct config), , __ARG_PTR_FAR_A(const struct config), __ARG_PTR_FAR_A(const struct config), __CNV_PTR_FAR, _L_NONE, _TFLG_FAR | _TFLG_NORET)
