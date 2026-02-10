#Arrays(Listas)#

nums = [1,2,3,1]
#Índices = [0] [1] [2] [3] #

#Printando os índices correspondentes a cada número #
for i in range(len(nums)):
    print("Índice " + str(i)+" num " + str(nums[i ]))
#----------------------------------------------------------#
nums = [1,2,3,1]
#Índices = [0] [1] [2] [3] #
for i in range(len(nums)):
    print("Índice " + str(i)+" num " + str(nums[i]))
    for j in range(len(nums)):
        print("Índice " + str(j)+" num " + str(nums[j ]))
#----------------------------------------------------------#
nums = [1,2,3,1]
#Índices = [0] [1] [2] [3] #
for i in range(len(nums)):
    print("Índice " + str(i)+" num " + str(nums[i]))
    for j in range(i+1, len(nums)):
        print("Índice " + str(j)+" num " + str(nums[j ]))
        if(nums[i] == nums[j]):
            print("Achei o número igual")








