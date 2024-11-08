.model small

.data
    arr db "5213b4dc$"
    nl db 0Ah, 0Dh, "$"
    len dw 8h

printArray macro
    lea dx, nl
    mov ah, 09h
    int 21h
    
    lea dx, arr
    mov ah, 09h
    int 21h
endm

exitzero macro
    mov ah, 4ch
    int 21h
endm

swap macro i1 i2
    mov cl, arr[i1]
    mov ch, arr[i2]
    mov arr[i1], ch
    mov arr[i2], cl
endm
    
.code

    mov dx, @data
    mov ds, dx
    
    mov si, 0h
loop1:
    inc si
    mov di, si
    dec si
loop2:
    mov bl, arr[di]
    mov bh, arr[di-1]
    cmp bl, bh
    jg endloop2
    swap di di-1
    printArray

endloop2:    
    dec di
    cmp di, 1h
    jge loop2
    
    
    inc si
    mov cx, len
    dec cx
    cmp si, cx
    jl loop1
    
    exitzero
end