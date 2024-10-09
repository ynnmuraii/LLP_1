%include "io64.inc"

section .bss:
    n resd 1
    left resd 1
    right resd 1
    temp resd 1
    arr resd 100

section .text:
    global main

main: 

end_program:
    NEWLINE
    RET
