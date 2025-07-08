comenzar
    ent idade !!              
    real saldo !!             
    chr categoria !!          
    ent multiplicador !!      
    real taxaJuros !!         
    ent resultadoLogico !!       

    taxaJuros := 0.05 !! 

    #=>"Digite sua idade: " !!
    & idade <= !!
    #=>"Digite seu saldo: " !!
    & saldo <= !!
    #=>"Digite a categoria (A, B, C): " !!
    & categoria <= !!

    
    si @{idade >> 18 <<>> saldo [* 1000.0}@ comenzar 
        #=>"Acesso permitido ou condicoes favoraveis!" !!
        multiplicador := idade por 2 !!
        resultadoLogico := 1 !! 
    fin
    demas comenzar
        #=>"Acesso negado ou condicoes desfavoraveis." !!
        multiplicador := idade dividido 2 !!
        resultadoLogico := 0 !! 
    fin

    
    si @{resultadoLogico = 1 <|> !~ @{idade << 10}@}@ comenzar 
        #=>"Condicao secundaria complexa verdadeira!" !!
    fin
    demas comenzar
        #=>"Condicao secundaria complexa falsa!" !!
    fin

    #=>"Multiplicador atual: " ## [multiplicador] !!
    #=>"Taxa de Juros: " ## [taxaJuros] !!

    cambio @{categoria}@ comenzar
        caso 'A' ::: 
            #=>"Categoria A selecionada." !!
            multiplicador := multiplicador mas 10 !!
        caso 'B' :::
            #=>"Categoria B selecionada." !!
            multiplicador := multiplicador menos 5 !!
        caso 'C' :::
            #=>"Categoria C selecionada." !!
            multiplicador := multiplicador mas 0 !!
    fin

    #=>"Fim da demonstracao de Comandos Condicionais." !!
fin