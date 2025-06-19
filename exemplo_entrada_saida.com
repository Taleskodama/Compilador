comenzar
    ent valorInt !!             
    real valorReal !!           
    chr caractereUnico !!       
    ent resultadoSoma !!      
    ent resultadoResto !!       
    ent resultadoSubtracao !!   
    ent resultadoMultiplicacao !! 
    ent resultadoDivisao !!     

    #=>"Digite um numero inteiro: " !!
    & valorInt <= !!

    #=>"Digite um numero real: " !!
    & valorReal <= !!

    #=>"Digite um caractere: " !!
    & caractereUnico <= !!

    resultadoSoma := valorInt mas 5 !!          
    resultadoSubtracao := valorInt menos 3 !!   
    resultadoMultiplicacao := valorInt por 2 !! 
    resultadoDivisao := valorInt dividido 4 !!  
    resultadoResto := valorInt resto 2 !!       

    #=>"--- Resultados ---" !!
    #=>"Inteiro digitado: " ## [valorInt] !!
    #=>"Real digitado: " ## [valorReal] !!
    #=>"Caractere digitado: " ## [caractereUnico] !!
    #=>"Soma (int + 5): " ## [resultadoSoma] !!
    #=>"Subtracao (int - 3): " ## [resultadoSubtracao] !!
    #=>"Multiplicacao (int * 2): " ## [resultadoMultiplicacao] !!
    #=>"Divisao (int / 4): " ## [resultadoDivisao] !!
    #=>"Resto (int % 2): " ## [resultadoResto] !!
    #=>"Fim da demonstracao de E/S." !!
fin