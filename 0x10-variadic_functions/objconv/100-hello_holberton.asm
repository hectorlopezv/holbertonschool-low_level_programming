; Disassembly of file: 100-hello_holberton.o
; Thu Mar 12 15:48:58 2020
; Mode: 64 bits
; Syntax: YASM/NASM
; Instruction set: 8086, x64

default rel

global main:

extern write                                            ; near
extern _GLOBAL_OFFSET_TABLE_                            ; byte


SECTION .text   align=1 execute                         ; section number 1, code

main:   ; Function begin
        endbr64                                         ; 0000 _ F3: 0F 1E. FA
        push    rbp                                     ; 0004 _ 55
        mov     rbp, rsp                                ; 0005 _ 48: 89. E5
        mov     edx, 17                                 ; 0008 _ BA, 00000011
        lea     rsi, [rel ?_001]                        ; 000D _ 48: 8D. 35, 00000000(rel)
        mov     edi, 1                                  ; 0014 _ BF, 00000001
        call    write                                   ; 0019 _ E8, 00000000(PLT r)
        mov     eax, 0                                  ; 001E _ B8, 00000000
        pop     rbp                                     ; 0023 _ 5D
        ret                                             ; 0024 _ C3
; main End of function


SECTION .data                         ; section number 2, data


SECTION .bss                          ; section number 3, bss


SECTION .rodata                        ; section number 4, const

?_001:                                                  ; byte
        db 48H, 65H, 6CH, 6CH, 6FH, 2CH, 20H, 48H       ; 0000 _ Hello, H
        db 6FH, 6CH, 62H, 65H, 72H, 74H, 6FH, 6EH       ; 0008 _ olberton
        db 0AH, 00H                                     ; 0010 _ ..


SECTION .note.gnu.property             ; section number 5, const

        db 04H, 00H, 00H, 00H, 10H, 00H, 00H, 00H       ; 0000 _ ........
        db 05H, 00H, 00H, 00H, 47H, 4EH, 55H, 00H       ; 0008 _ ....GNU.
        db 02H, 00H, 00H, 0C0H, 04H, 00H, 00H, 00H      ; 0010 _ ........
        db 03H, 00H, 00H, 00H, 00H, 00H, 00H, 00H       ; 0018 _ ........


