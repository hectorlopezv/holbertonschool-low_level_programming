; Disassembly of file: 100-hello_holberton.o
; Thu Mar 12 16:46:23 2020
; Mode: 64 bits
; Syntax: YASM/NASM
; Instruction set: 8086, x64


global main

extern syscall                                          ; near
extern _GLOBAL_OFFSET_TABLE_                            ; byte


SECTION .text                            ; section number 1, code


SECTION .data                          ; section number 2, data


SECTION .bss                           ; section number 3, bss


SECTION .rodata.str1.1                 ; section number 4, const

.LC0:                                                   ; byte
        db 48H, 65H, 6CH, 6CH, 6FH, 2CH, 20H, 48H       ; 0000 _ Hello, H
        db 6FH, 6CH, 62H, 65H, 72H, 74H, 6FH, 6EH       ; 0008 _ olberton
        db 0AH, 00H                                     ; 0010 _ ..


SECTION .text.startup                   ; section number 5, code

main:   ; Function begin
        sub     rsp, 8                                  ; 0004 _ 48: 83. EC, 08
        mov     ecx, 16                                 ; 0008 _ B9, 00000010
        xor     esi, esi                                ; 000D _ 31. F6
        mov     edi, 1                                  ; 000F _ BF, 00000001
        lea     rdx, [rel .LC0]                         ; 0014 _ 48: 8D. 15, 00000000(rel)
        xor     eax, eax                                ; 001B _ 31. C0
        call    syscall                                 ; 001D _ E8, 00000000(PLT r)
        xor     eax, eax                                ; 0022 _ 31. C0
        add     rsp, 8                                  ; 0024 _ 48: 83. C4, 08
        ret                                             ; 0028 _ C3
; main End of function


