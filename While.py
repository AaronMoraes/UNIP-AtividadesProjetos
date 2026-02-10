##Aprendendo Estruturas de Repetição em Phyton##
i = 0
while i < 6:
    print(i)
    i = i + 1   
#Ler um número do teclado até ser um número negativo#
num = int(input("Digite um número: "))
while num > 0:
    print("Número positivo")
    num = int(input("Digite outro número: "))
if num < 0:
    print("Número Negativo")


