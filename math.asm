section .text

    global mais
    global menos
    global vezes
    global dividir

        mais:
            mov EAX, EDI
            add EAX, ESI
            int 0x80
            ret

        menos:
            mov EAX, EDI
            sub EAX, ESI
            ret

        vezes:
            mov EAX, EDI
            imul EAX, ESI
            ret

        dividir:
            mov EAX, EDI   
            xor EDX, EDX   
            div ESI         
            ret                       
    