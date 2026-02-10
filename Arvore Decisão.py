arvoredo_intervalo = {
    'pergunta':'você gosta de jogos?',
    'sim': {'resposta': 'Salão de jogos'},
    'não': {'pergunta': 'Você gosta de esportes?',
    'sim': {'resposta': 'quadra'},
    'não': {'pergunta': 'você gosta de ler?',
    'sim': {'resposta': 'biblioteca'},
    'não': {'resposta': 'pátio'},
    }
    }
}


no_atual = arvoredo_intervalo
while True: 
    if 'resposta' in no_atual:
        print(no_atual['resposta'])
        resp = input('responda com sim ou não')
        no_atual = no_atual['resp']
