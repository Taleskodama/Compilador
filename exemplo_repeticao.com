comenzar
    ent contadorWhile !!        
    ent contadorFor !!          
    ent limiteLoop !!          
    
    #=>"Defina o limite maximo para os loops (ex: 5): " !!
    & limiteLoop <= !!

    #=>"Iniciando loop WHILE:" !!
    contadorWhile := 1 !!
    mientras @{contadorWhile [* limiteLoop}@ comenzar 
        #=>"  WHILE Iteracao: " ## [contadorWhile] !!
        contadorWhile := contadorWhile mas 1 !!
    fin
    #=>"Loop WHILE finalizado." !!

    #=>"Iniciando loop FOR:" !!
    para contadorFor := 1 !! contadorFor << limiteLoop <<>> contadorFor >> 0 !! contadorFor := contadorFor mas 1 comenzar
        si @{contadorFor = 3}@ comenzar 
            #=>"    Valor e 3." !!
        fin
        demas comenzar
            #=>"    Valor nao e 3." !!
        fin
    
        contadorFor := contadorFor por 1 !! 
    fin
    #=>"Loop FOR finalizado." !!

    #=>"Fim da demonstracao de Comandos de Repeticao." !!
fin