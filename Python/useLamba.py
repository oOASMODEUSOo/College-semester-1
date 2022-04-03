#q) Use lambda, map and filter functions to find the sum of cubes of first 5 even numbers

listOfEvenNumbers = []
sum = 0
tables = [lambda x=x: x for x in range(1, 11)]

for table in tables:
    listOfEvenNumbers.append(table())

updatedList = list(filter(lambda x: x%2==0, listOfEvenNumbers))

cubeList = list(map(lambda x: x*x*x, updatedList))

for num in cubeList:
    sum = sum + num

print("sum of the cube of the first 5 element of the natural number", sum)