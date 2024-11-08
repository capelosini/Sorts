.model small

.data
arr db "54321$"
len dw 5h
nl db 0Ah, 0Dh, "$"

printArray macro
lea dx, nl
mov ah, 09h
int 21h

lea dx, arr
mov ah, 09h
int 21h
endm

zeroexit macro
mov ah, 4ch
int 21h
endm

swap macro i1 i2
mov bl, arr[i1]
mov bh, arr[i2]
mov arr[i1], bh
mov arr[i2], bl
endm

.code
mov dx, @data
mov ds, dx

mov si, 0
_loop1:
mov di, 0
_loop2:
mov bl, arr[di]
cmp bl, arr[di+1]
jle _endLoop2
swap di, di+1
printArray

_endLoop2:
inc di
mov cx, len
sub cx, si
dec cx
cmp di, cx
jl _loop2


inc si
cmp si, len
jl _loop1

printArray
zeroexit
end