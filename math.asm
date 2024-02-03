section .text

    global addition
        addition:
            mov EAX, ESI
            add EAX, EDI
            ret
        
        
    global subtraction
        subtraction:
            mov EAX, EDI
            sub EAX, ESI
            ret

    global multiplication
        multiplication:
            mov EAX, EDI
            imul EAX, ESI
            ret

    global division
        division:
            mov EAX, EDI   
            xor EDX, EDX   
            idiv ESI         
            ret  


