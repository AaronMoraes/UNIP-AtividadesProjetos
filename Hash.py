gavetas = set()
nums = [1, 2, 3, 1]

for num in nums :
    gavetas.add(num)
    print(gavetas)
#----------------------------------------#
gavetas = set()
nums = [1, 2, 3, 1]
for num in nums :
    if num in gavetas:

        print("Achei o número igual")

    gavetas.add(num)
    print(gavetas)
#----------------------------------------#
nums = [1, 2, 3, 1]
gavetas = set(nums)

print (gavetas)
if(len(nums)!= len(gavetas)):
    print("Achei o número igual")
